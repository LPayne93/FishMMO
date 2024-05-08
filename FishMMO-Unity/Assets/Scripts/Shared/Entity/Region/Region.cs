using System.Collections.Generic;
using UnityEngine;
using FishNet.Object;
using FishNet.Component.Prediction;

namespace FishMMO.Shared
{
	[RequireComponent(typeof(NetworkObject))]
	[RequireComponent(typeof(NetworkCollider))]
	public class Region : NetworkBehaviour
	{
		public Region Parent;
		public List<Region> Children = new List<Region>();

		public NetworkCollider NetworkCollider;

		public string Name { get { return gameObject.name; } }

		public Collider Collider;
		[Tooltip("Add a terrain if you would like the region to span the entire map. (Requires BoxCollider)")]
		public Terrain Terrain;

		public List<RegionAction> OnRegionEnter = new List<RegionAction>();
		public List<RegionAction> OnRegionStay = new List<RegionAction>();
		public List<RegionAction> OnRegionExit = new List<RegionAction>();

		void Awake()
		{
			gameObject.layer = Constants.Layers.IgnoreRaycast;

			Collider = gameObject.GetComponent<Collider>();
			if (Collider == null)
			{
				Debug.Log(Name + " collider is null and will not function properly.");
				return;
			}
			// set the collider to trigger just incase we forgot to set it in the inspector
			Collider.isTrigger = true;

			// terrain bounds override the collider
			if (Terrain != null)
			{
				BoxCollider box = Collider as BoxCollider;
				if (box != null)
				{
					box.size = Terrain.terrainData.size;
				}
			}

			NetworkCollider = gameObject.GetComponent<NetworkCollider>();
			NetworkCollider.OnEnterOnce += NetworkCollider_OnEnterOnce;
			NetworkCollider.OnStay += NetworkCollider_OnStay;
			NetworkCollider.OnExit += NetworkCollider_OnExit;
		}

#if UNITY_EDITOR
		public Color GizmoColor = Color.cyan;

		void OnDrawGizmos()
		{
			Collider collider = gameObject.GetComponent<Collider>();
			if (collider != null)
			{
				collider.DrawGizmo(GizmoColor);
			}
		}
#endif

		private bool NetworkCollider_OnEnterOnce(Collider other)
		{
			IPlayerCharacter character = other.GetComponent<IPlayerCharacter>();
			if (character == null ||
				base.PredictionManager.IsReconciling ||
				character.IsTeleporting)
			{
				return false;
			}
			// children take priority
			if (Children != null)
			{
				foreach (Region child in Children)
				{
					// does a child of this region already contain our character?
					if (child.Collider.bounds.Intersects(other.bounds))
					{
						return true;
					}
				}
			}
			if (OnRegionEnter != null)
			{
				Debug.Log($"{character.CharacterName} Entered {gameObject.name}");
				foreach (RegionAction action in OnRegionEnter)
				{
					action?.Invoke(character, this);
				}
			}
			return true;
		}

		private void NetworkCollider_OnStay(Collider other)
		{
			IPlayerCharacter character = other.GetComponent<IPlayerCharacter>();
			if (character == null ||
				base.PredictionManager.IsReconciling ||
				character.IsTeleporting)
			{
				return;
			}
			if (OnRegionStay != null)
			{
				foreach (RegionAction action in OnRegionStay)
				{
					action?.Invoke(character, this);
				}
			}
		}

		private void NetworkCollider_OnExit(Collider other)
		{
			IPlayerCharacter character = other.GetComponent<IPlayerCharacter>();
			if (character == null ||
				base.PredictionManager.IsReconciling ||
				character.IsTeleporting)
			{
				return;
			}
			if (Parent != null)
			{
				Parent.NetworkCollider_OnEnterOnce(other);
			}
			if (OnRegionExit != null)
			{
				Debug.Log($"{character.CharacterName} Exited {gameObject.name}");
				foreach (RegionAction action in OnRegionExit)
				{
					action?.Invoke(character, this);
				}
			}
		}
	}
}