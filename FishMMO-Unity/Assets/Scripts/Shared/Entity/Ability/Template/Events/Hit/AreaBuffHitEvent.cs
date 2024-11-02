﻿using UnityEngine;

namespace FishMMO.Shared
{
	[CreateAssetMenu(fileName = "New Area Buff Hit Event", menuName = "Character/Ability/Hit Event/Area Buff", order = 1)]
	public sealed class AreaBuffHitEvent : HitEvent
	{
		private static Collider[] Hits = new Collider[512];

		public int HitCount;
		public int Stacks;
		public float Radius;
		public BaseBuffTemplate BuffTemplate;
		public LayerMask CollidableLayers = -1;

		public override int Invoke(ICharacter attacker, ICharacter defender, TargetInfo hitTarget, AbilityObject abilityObject)
		{
			// Attacker should exist with a faction controller
			if (attacker == null ||
				!attacker.TryGet(out IFactionController attackerFactionController))
			{
				return 0;
			}

			PhysicsScene physicsScene = attacker.GameObject.scene.GetPhysicsScene();

			int overlapCount = physicsScene.OverlapSphere(
				hitTarget.Target.position,
				Radius,
				Hits,
				CollidableLayers,
				QueryTriggerInteraction.Ignore);

			int hits = 0;
			for (int i = 0; i < overlapCount && hits < HitCount; ++i)
			{
				ICharacter def = Hits[i].gameObject.GetComponent<ICharacter>();
				if (def == null)
				{
					continue;
				}
				// Skip Alliance check if we are targeting ourself
				else if (def.ID == attacker.ID)
				{
					if (def.TryGet(out IBuffController buffController))
					{
						buffController.Apply(BuffTemplate);
						++hits;
					}
				}
				else if (def.TryGet(out IFactionController defenderFactionController) &&
						 def.TryGet(out IBuffController buffController) &&
						 attackerFactionController.GetAllianceLevel(defenderFactionController) == FactionAllianceLevel.Ally)
				{
					buffController.Apply(BuffTemplate);
					++hits;
				}
			}
			return hits;
		}

		public override string GetFormattedDescription()
		{
			return Description.Replace("$BUFF$", BuffTemplate.Name)
							  .Replace("$STACKS$", Stacks.ToString())
							  .Replace("$RADIUS$", Radius.ToString());
		}
	}
}