﻿using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.AI;

namespace FishMMO.Shared
{
	[RequireComponent(typeof(NavMeshAgent))]
	public class AIController : CharacterBehaviour, IAIController
	{
		public BaseAIState InitialState;
		public AgentAvoidancePriority AvoidancePriority = AgentAvoidancePriority.Medium;
		public BaseAIState WanderState;
		public BaseAIState PatrolState;
		public BaseAIState ReturnHomeState;
		public BaseAIState RetreatState;
		public BaseAIState IdleState;
		public BaseAIState AttackingState;
		public BaseAIState DeadState;

		public Transform LookTarget;
		public bool RandomizeState;

		//public List<AIState> AllowedRandomStates;

		public PhysicsScene PhysicsScene { get; private set; }
		public Vector3 Home { get; private set;}
		public Transform Target
		{
			get
			{
				return target;
			}
			set
			{
				target = value;
				if (value != null)
				{
					Agent.SetDestination(value.position);
				}
				else
				{
					Agent.SetDestination(Character.Transform.position);
				}
			}
		}
		public NavMeshAgent Agent { get; private set; }
		public BaseAIState CurrentState { get; private set; }
		public float LeashUpdateRate = 5.0f;
		/// <summary>
		/// Minimum distance at which the AI will forget the current target and return home
		/// </summary>
		public float MinLeashRange = 100.0f;
		/// <summary>
		/// Maximum distance at which the AI will forget the current target and teleport return home
		/// </summary>
		public float MaxLeashRange = 500.0f;
		/// <summary>
		/// The waypoints available to this AI controller
		/// </summary>
		public Vector3[] Waypoints;
		/// <summary>
		/// The current waypoint index
		/// </summary>
		public int CurrentWaypointIndex { get; private set; }

		private Transform target;
		private float nextUpdate = 0;
		private float nextLeashUpdate = 0;
		private List<BaseAIState> movementStates = new List<BaseAIState>();

#if UNITY_EDITOR
		void OnDrawGizmos()
		{
			if (Agent == null)
			{
				return;
			}
			DrawDebugCircle(transform.position, Agent.radius, Color.red);

			if (Home != null)
			{
				if (WanderState != null && WanderState is WanderState wanderState)
				{
					DrawDebugCircle(Home, wanderState.WanderRadius, Color.green);
				}
				DrawDebugCircle(Home, 0.5f, Color.blue);
			}
		}
#endif

		public override void OnAwake()
		{
			base.OnAwake();
			
			if (Agent == null)
			{
				Agent = GetComponent<NavMeshAgent>();
			}

			PhysicsScene = gameObject.scene.GetPhysicsScene();
			Agent.avoidancePriority = (int)AvoidancePriority;
			Agent.speed = Constants.Character.WalkSpeed;

			if (WanderState != null)
			{
				movementStates.Add(WanderState);
			}
			if (PatrolState != null)
			{
				movementStates.Add(PatrolState);
			}
			if (ReturnHomeState != null)
			{
				movementStates.Add(ReturnHomeState);
			}
			if (IdleState != null)
			{
				movementStates.Add(IdleState);
			}
		}

		public void Initialize(Vector3 home, Vector3[] waypoints = null)
		{
			Home = home;
			Waypoints = waypoints;

			// Set initial state
			ChangeState(InitialState);
		}

		void Update()
		{
			if (CurrentState != null)
			{
				if (nextUpdate < 0.0f)
				{
					if (nextLeashUpdate < 0.0f)
					{
						// If the target is too far away from home, return home and forget the target
						float distanceToHome = Vector3.Distance(Character.Transform.position, Home);
						if (distanceToHome >= MinLeashRange)
						{
							// Warp back to home if we have somehow reached a significant leash range
							if (distanceToHome >= MaxLeashRange)
							{
								// Complete heal on returning home
								if (Character.TryGet(out ICharacterDamageController characterDamageController))
								{
									characterDamageController.CompleteHeal();
								}
								// Warp home
								if (!Agent.Warp(Home))
								{
									Character.Transform.position = Home;
								}
								Target = null;
							}
							// Otherwise run back
							else if (ReturnHomeState != null)
							{
								ChangeState(ReturnHomeState);
								return;
							}
						}
						nextLeashUpdate = LeashUpdateRate;
					}
					nextLeashUpdate -= Time.deltaTime;

					CurrentState.UpdateState(this, Time.deltaTime);
					nextUpdate = CurrentState.GetUpdateRate();
				}
				nextUpdate -= Time.deltaTime;
			}
			if (LookTarget != null)
			{
				FaceLookTarget();
			}
		}

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public void Stop()
		{
			Agent.isStopped = true;
		}

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public void Resume()
		{
			Agent.isStopped = false;
		}

		public void ChangeState(BaseAIState newState, List<ICharacter> targets = null)
		{
			if (newState == null)
			{
				return;
			}

			if (CurrentState != null)
			{
				CurrentState?.Exit(this);
			}

			CurrentState = newState;
			if (CurrentState != null)
			{
				nextUpdate = CurrentState.GetUpdateRate();

				Collider collider = Character.Transform.GetComponent<Collider>();
				if (collider != null &&
					collider.TryGetDimensions(out float height, out float radius))
				{
					Agent.height = height;
					Agent.radius = radius;
				}
				else // default height and radius
				{
					Agent.height = 2.0f;
					Agent.radius = 0.5f;
				}
			}

			if (newState is BaseAttackingState attackingState)
			{
				// TODO - Add CharacterAttribute.MoveSpeed bonus
				Agent.speed = Constants.Character.RunSpeed;

				if (targets != null)
				{
					attackingState.PickTarget(this, targets);
				}
			}
			else
			{
				Agent.speed = Constants.Character.WalkSpeed;
			}
			CurrentState?.Enter(this);
		}

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public void TransitionToIdleState()
		{
			ChangeState(IdleState, null);
		}

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public virtual void TransitionToRandomMovementState()
		{
			if (movementStates == null ||
				movementStates.Count < 1)
			{
				return;
			}

			BaseAIState randomState = movementStates.GetRandom();
			if (randomState != null)
			{
				ChangeState(randomState);
			}
		}

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public void SetRandomHomeDestination(float radius = 0.0f)
		{
			Vector3 position = Character.Transform.position;
			if (radius > 0.0f)
			{
				position = Vector3Extensions.RandomPositionWithinRadius(Home, radius);
			}
			NavMeshHit hit;
			if (NavMesh.SamplePosition(position, out hit, radius, NavMesh.AllAreas))
			{
				Agent.SetDestination(hit.position);
			}
		}

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public void SetRandomDestination(float radius = 0.0f)
		{
			Vector3 position = Character.Transform.position;
			if (radius > 0.0f)
			{
				position = Vector3Extensions.RandomPositionWithinRadius(position, radius);
			}
			NavMeshHit hit;
			if (NavMesh.SamplePosition(position, out hit, radius, NavMesh.AllAreas))
			{
				Agent.SetDestination(hit.position);
			}
		}

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public void TransitionToNextWaypoint()
		{
			CurrentWaypointIndex = (CurrentWaypointIndex + 1) % Waypoints.Length;
			Agent.SetDestination(Waypoints[CurrentWaypointIndex]);
		}

		public void PickNearestWaypoint()
		{
			if (Waypoints != null &&
				Waypoints.Length > 0)
			{
				float lastSqrDistance = 0.0f;
				int closestIndex = -1;
				// Find the nearest waypoint
				for (int i = 0; i < Waypoints.Length; ++i)
				{
					Vector3 waypoint = Waypoints[i];

					float sqrDistance = (Character.Transform.position - waypoint).sqrMagnitude;
					if (closestIndex < 0 ||
						sqrDistance < lastSqrDistance)
					{
						lastSqrDistance = sqrDistance;
						closestIndex = i;
					}
				}
				Agent.SetDestination(Waypoints[closestIndex]);
				CurrentWaypointIndex = 0;
			}
		}

		public void FaceLookTarget()
		{
			// Get the direction from the agent to the LookTarget
			Vector3 direction = LookTarget.position - transform.position;
			direction.y = 0;

			// Calculate the rotation needed to face the target
			Quaternion targetRotation = Quaternion.LookRotation(direction);

			// Apply a smooth rotation (you can adjust the speed of the rotation here)
			transform.rotation = Quaternion.Slerp(transform.rotation, targetRotation, Time.deltaTime * 5f);
		}

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public void DrawDebugCircle(Vector3 position, float radius, Color color)
		{
			Gizmos.color = color;
			Gizmos.DrawWireSphere(position, radius);
		}
	}
}