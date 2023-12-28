﻿#if !UNITY_SERVER
using FishMMO.Client;
#endif
using FishNet;
using FishNet.Object;
using FishNet.Object.Prediction;
using FishNet.Transporting;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace FishMMO.Shared
{
	[RequireComponent(typeof(Character))]
	public class AbilityController : NetworkBehaviour
	{
		public const int NO_ABILITY = 0;

		private Ability currentAbility;
		private bool interruptQueued;
		private int queuedAbilityID;
		private float remainingTime;
		private KeyCode heldKey;
		//private Random currentSeed = 12345;

		public Transform AbilitySpawner;
		public Character Character;
		public CharacterAttributeTemplate BloodResourceTemplate;
		public CharacterAttributeTemplate AttackSpeedReductionTemplate;
		public AbilityEvent BloodResourceConversionTemplate;
		public AbilityEvent ChargedTemplate;
		public AbilityEvent ChanneledTemplate;
		public event Action<string, float, float> OnUpdate;
		// Invoked when the current ability is Interrupted.
		public event Action OnInterrupt;
		// Invoked when the current ability is Cancelled.
		public event Action OnCancel;

		public Dictionary<int, Ability> KnownAbilities { get; private set; }
		public HashSet<int> KnownTemplates { get; private set; }
		public HashSet<int> KnownEvents { get; private set; }
		public HashSet<int> KnownSpawnEvents { get; private set; }
		public HashSet<int> KnownHitEvents { get; private set; }
		public HashSet<int> KnownMoveEvents { get; private set; }
		public bool IsActivating { get { return currentAbility != null; } }
		public bool AbilityQueued { get { return queuedAbilityID != NO_ABILITY; } }

#if !UNITY_SERVER
		void Awake()
		{
			if (FishMMO.Client.Client.TimeManager != null)
			{
				FishMMO.Client.Client.TimeManager.OnTick += TimeManager_OnTick;
			}
		}

		void OnDestroy()
		{
			if (FishMMO.Client.Client.TimeManager != null)
			{
				FishMMO.Client.Client.TimeManager.OnTick -= TimeManager_OnTick;
			}
		}

		public override void OnStartClient()
		{
			base.OnStartClient();

			if (!base.IsOwner)
			{
				this.enabled = false;
			}
			else
			{
				if (UIManager.TryGet("UICastBar", out UICastBar uiCastBar))
				{
					OnUpdate += uiCastBar.OnUpdate;
					OnCancel += uiCastBar.OnCancel;
				}
			}
		}

		public override void OnStopClient()
		{
			base.OnStopClient();

			if (base.IsOwner)
			{
				if (UIManager.TryGet("UICastBar", out UICastBar uiCastBar))
				{
					OnUpdate -= uiCastBar.OnUpdate;
					OnCancel -= uiCastBar.OnCancel;
				}
			}
		}
#else
		void Awake()
		{
			if (InstanceFinder.TimeManager != null)
			{
				InstanceFinder.TimeManager.OnTick += TimeManager_OnTick;
			}
		}

		void OnDestroy()
		{
			if (InstanceFinder.TimeManager != null)
			{
				InstanceFinder.TimeManager.OnTick -= TimeManager_OnTick;
			}
		}

#endif

		private void TimeManager_OnTick()
		{
			if (base.IsOwner)
			{
				Reconcile(default, false);
				HandleCharacterInput(out AbilityActivationReplicateData activationData);
				Replicate(activationData, false);
			}
			if (base.IsServer)
			{
				Replicate(default, true);
				AbilityReconcileData state = new AbilityReconcileData(interruptQueued,
																	  currentAbility == null ? NO_ABILITY : currentAbility.ID,
																	  remainingTime);
				Reconcile(state, true);
			}
		}

		[Replicate]
		private void Replicate(AbilityActivationReplicateData activationData, bool asServer, Channel channel = Channel.Unreliable, bool replaying = false)
		{
			if (activationData.InterruptQueued)
			{
				OnInterrupt?.Invoke();
				Cancel();
			}
			else if (IsActivating)
			{
				if (remainingTime > 0.0f)
				{
					remainingTime -= (float)base.TimeManager.TickDelta;

					// handle ability update here, display cast bar, display hitbox telegraphs, etc
					OnUpdate?.Invoke(currentAbility.Name, remainingTime, currentAbility.ActivationTime * CalculateSpeedReduction(currentAbility.Template.ActivationSpeedReductionAttribute));

					// handle held ability updates
					if (heldKey != KeyCode.None)
					{
						// a held ability hotkey was released or the character can no longer activate the ability
						if (activationData.HeldKey == KeyCode.None || !CanActivate(currentAbility))
						{
							// add ability to cooldowns
							AddCooldown(currentAbility);

							Cancel();
						}
						// channeled abilities like beam effects or a charge rush that are continuously updating or spawning objects should be handled here
						else if (ChanneledTemplate != null && currentAbility.HasAbilityEvent(ChanneledTemplate.ID))
						{
							// get target info
							TargetInfo targetInfo = Character.TargetController.UpdateTarget(Character.CharacterController.VirtualCameraPosition, Character.CharacterController.VirtualCameraRotation * Vector3.forward, currentAbility.Range);

							// spawn the ability object
							if (AbilityObject.TrySpawn(currentAbility, Character, this, AbilitySpawner, targetInfo))
							{
								// channeled abilities consume resources during activation
								currentAbility.ConsumeResources(Character.AttributeController, BloodResourceConversionTemplate, BloodResourceTemplate);
							}
						}
					}
					return;
				}

				// this will allow for charged abilities to remain held for aiming purposes
				if (ChargedTemplate != null && currentAbility.HasAbilityEvent(ChargedTemplate.ID) &&
					heldKey != KeyCode.None &&
					activationData.HeldKey != KeyCode.None)
				{
					return;
				}

				// complete the final activation of the ability
				if (CanActivate(currentAbility))
				{
					// get target info
					TargetInfo targetInfo = Character.TargetController.UpdateTarget(Character.CharacterController.VirtualCameraPosition, Character.CharacterController.VirtualCameraRotation * Vector3.forward, currentAbility.Range);

					// spawn the ability object
					if (AbilityObject.TrySpawn(currentAbility, Character, this, AbilitySpawner, targetInfo))
					{
						// consume resources
						currentAbility.ConsumeResources(Character.AttributeController, BloodResourceConversionTemplate, BloodResourceTemplate);

						// add ability to cooldowns
						AddCooldown(currentAbility);
					}
				}
				// reset ability data
				Cancel();
			}
			else if (activationData.QueuedAbilityID != NO_ABILITY &&
					 KnownAbilities.TryGetValue(activationData.QueuedAbilityID, out Ability validatedAbility) &&
					 CanActivate(validatedAbility))
			{
				interruptQueued = false;
				currentAbility = validatedAbility;
				remainingTime = validatedAbility.ActivationTime * CalculateSpeedReduction(validatedAbility.Template.ActivationSpeedReductionAttribute);
				if (validatedAbility.HasAbilityEvent(ChanneledTemplate.ID) || validatedAbility.HasAbilityEvent(ChargedTemplate.ID))
				{
					heldKey = activationData.HeldKey;
				}
			}
		}

		[Reconcile]
		private void Reconcile(AbilityReconcileData rd, bool asServer, Channel channel = Channel.Unreliable)
		{
			if (rd.AbilityID == NO_ABILITY)
			{
				return;
			}
			if (!KnownAbilities.TryGetValue(rd.AbilityID, out Ability ability) || rd.Interrupt && rd.AbilityID == NO_ABILITY)
			{
				OnInterrupt?.Invoke();
				Cancel();
			}
			else
			{
				currentAbility = ability;
				remainingTime = rd.RemainingTime;
			}
		}

		public float CalculateSpeedReduction(CharacterAttributeTemplate attribute)
		{
			if (attribute != null)
			{
				CharacterAttribute speedReduction;
				if (Character.AttributeController.TryGetAttribute(attribute.ID, out speedReduction))
				{
					return 1.0f - ((speedReduction.FinalValue * 0.01f).Clamp(0.0f, 1.0f));
				}
			}
			return 1.0f;
		}

		public void Interrupt(Character attacker)
		{
			interruptQueued = true;
		}


		public void Activate(int referenceID, KeyCode heldKey)
		{
#if !UNITY_SERVER
			// validate UI controls are focused so we aren't casting spells when hovering over interfaces.
			if (!InputManager.MouseMode)
			{
				return;
			}

			if (!IsActivating && !interruptQueued)
			{
				queuedAbilityID = referenceID;
				this.heldKey = heldKey;
			}
#endif
		}

		private void HandleCharacterInput(out AbilityActivationReplicateData activationEventData)
		{
			activationEventData = new AbilityActivationReplicateData(interruptQueued,
																	 queuedAbilityID,
																	 heldKey);
			interruptQueued = false;
			queuedAbilityID = NO_ABILITY;
		}

		/// <summary>
		/// Validates that we can activate the ability and returns it if successful.
		/// </summary>
		private bool CanActivate(Ability ability)
		{
			return KnownAbilities.TryGetValue(ability.ID, out Ability knownAbility) &&
					!Character.CooldownController.IsOnCooldown(knownAbility.Template.Name) &&
					knownAbility.MeetsRequirements(Character) &&
					knownAbility.HasResource(Character, BloodResourceConversionTemplate, BloodResourceTemplate);
		}

		internal void Cancel()
		{
			interruptQueued = false;
			queuedAbilityID = NO_ABILITY;
			currentAbility = null;
			remainingTime = 0.0f;
			heldKey = KeyCode.None;

			OnCancel?.Invoke();
		}

		internal void AddCooldown(Ability ability)
		{
			AbilityTemplate currentAbilityTemplate = ability.Template;
			if (ability.Cooldown > 0.0f)
			{
				float cooldownReduction = CalculateSpeedReduction(currentAbilityTemplate.CooldownReductionAttribute);
				float cooldown = ability.Cooldown * cooldownReduction;

				Character.CooldownController.AddCooldown(currentAbilityTemplate.Name, new CooldownInstance(cooldown));
			}
		}

		public void RemoveAbility(int referenceID)
		{
			KnownAbilities.Remove(referenceID);
		}

		public bool CanManipulate()
		{
			if (Character == null)
				return false;

			/*if (!character.IsSafeZone &&
				  (character.State == CharacterState.Idle ||
				  character.State == CharacterState.Moving) &&
				  character.State != CharacterState.UsingObject &&
				  character.State != CharacterState.IsFrozen &&
				  character.State != CharacterState.IsStunned &&
				  character.State != CharacterState.IsMesmerized) return true;
			*/
			return true;
		}

		public bool KnowsAbility(int abilityID)
		{
			if (KnownTemplates.Contains(abilityID) ||
				KnownEvents.Contains(abilityID))
			{
				return true;
			}
			return false;
		}

		public bool LearnAbilities(List<BaseAbilityTemplate> abilityTemplates = null)
		{
			if (abilityTemplates == null)
			{
				return false;
			}

			for (int i = 0; i < abilityTemplates.Count; ++i)
			{
				// if the template is an ability event we add them to their mapped containers
				AbilityEvent abilityEvent = abilityTemplates[i] as AbilityEvent;
				if (abilityEvent != null)
				{
					// add the event to the global events map
					if (KnownEvents == null)
					{
						KnownEvents = new HashSet<int>();
					}
					if (!KnownEvents.Contains(abilityEvent.ID))
					{
						KnownEvents.Add(abilityEvent.ID);
					}

					// figure out what kind of event it is and add to the respective category
					if (abilityEvent is HitEvent)
					{
						if (KnownHitEvents == null)
						{
							KnownHitEvents = new HashSet<int>();
						}
						if (!KnownHitEvents.Contains(abilityEvent.ID))
						{
							KnownHitEvents.Add(abilityEvent.ID);
						}
					}
					else if (abilityEvent is MoveEvent)
					{
						if (KnownMoveEvents == null)
						{
							KnownMoveEvents = new HashSet<int>();
						}
						if (!KnownMoveEvents.Contains(abilityEvent.ID))
						{
							KnownMoveEvents.Add(abilityEvent.ID);
						}
					}
					else if (abilityEvent is SpawnEvent)
					{
						if (KnownSpawnEvents == null)
						{
							KnownSpawnEvents = new HashSet<int>();
						}
						if (!KnownSpawnEvents.Contains(abilityEvent.ID))
						{
							KnownSpawnEvents.Add(abilityEvent.ID);
						}
					}
				}
				else
				{
					AbilityTemplate abilityTemplate = abilityTemplates[i] as AbilityTemplate;
					if (abilityTemplate != null)
					{
						if (KnownTemplates == null)
						{
							KnownTemplates = new HashSet<int>();
						}
						if (!KnownTemplates.Contains(abilityTemplate.ID))
						{
							KnownTemplates.Add(abilityTemplate.ID);
						}
					}
				}
			}
			return true;
		}

		public void LearnAbility(Ability ability)
		{
			if (ability == null)
			{
				return;
			}

			if (KnownAbilities == null)
			{
				KnownAbilities = new Dictionary<int, Ability>();
			}
		}
	}
}