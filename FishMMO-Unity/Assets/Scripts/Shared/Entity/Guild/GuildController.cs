﻿using UnityEngine;
using FishNet.Object;
using FishNet.Object.Synchronizing;
using FishNet.Transporting;
using System.Collections.Generic;
using System.Linq;
#if !UNITY_SERVER
using FishMMO.Client;
#endif

namespace FishMMO.Shared
{
	/// <summary>
	/// Character guild controller.
	/// </summary>
	[RequireComponent(typeof(Character))]
	public class GuildController : NetworkBehaviour
	{
		public Character Character;

		[SyncVar(SendRate = 0.0f, Channel = Channel.Reliable, ReadPermissions = ReadPermission.Observers, WritePermissions = WritePermission.ServerOnly, OnChange = nameof(OnGuildIDChanged))]
		public long ID;
		private void OnGuildIDChanged(long prev, long next, bool asServer)
		{
#if !UNITY_SERVER
			if (prev != next)
			{
				if (next == 0)
				{
					Character.SetGuildName("");
				}
				else
				{
					ClientNamingSystem.SetName(NamingSystemType.GuildName, next, (s) =>
					{
						Character.SetGuildName(s);
					});
				}
			}
#endif
		}
		public GuildRank Rank = GuildRank.None;

#if !UNITY_SERVER
		public override void OnStartClient()
		{
			base.OnStartClient();

			if (base.IsOwner)
			{
				ClientManager.RegisterBroadcast<GuildInviteBroadcast>(OnClientGuildInviteBroadcastReceived);
				ClientManager.RegisterBroadcast<GuildAddBroadcast>(OnClientGuildAddBroadcastReceived);
				ClientManager.RegisterBroadcast<GuildLeaveBroadcast>(OnClientGuildLeaveBroadcastReceived);
				ClientManager.RegisterBroadcast<GuildAddMultipleBroadcast>(OnClientGuildAddMultipleBroadcastReceived);
				ClientManager.RegisterBroadcast<GuildRemoveBroadcast>(OnClientGuildRemoveBroadcastReceived);
			}
		}

		public override void OnStopClient()
		{
			base.OnStopClient();

			if (base.IsOwner)
			{
				ClientManager.UnregisterBroadcast<GuildInviteBroadcast>(OnClientGuildInviteBroadcastReceived);
				ClientManager.UnregisterBroadcast<GuildAddBroadcast>(OnClientGuildAddBroadcastReceived);
				ClientManager.UnregisterBroadcast<GuildLeaveBroadcast>(OnClientGuildLeaveBroadcastReceived);
				ClientManager.UnregisterBroadcast<GuildAddMultipleBroadcast>(OnClientGuildAddMultipleBroadcastReceived);
				ClientManager.UnregisterBroadcast<GuildRemoveBroadcast>(OnClientGuildRemoveBroadcastReceived);
			}
		}

		/// <summary>
		/// When the character receives an invitation to join a guild.
		/// *Note* msg.targetClientID should be our own ClientId but it doesn't matter if it changes. Server has authority.
		/// </summary>
		public void OnClientGuildInviteBroadcastReceived(GuildInviteBroadcast msg)
		{
			ClientNamingSystem.SetName(NamingSystemType.CharacterName, msg.inviterCharacterID, (n) =>
			{
				if (UIManager.TryGet("UIConfirmationTooltip", out UIConfirmationTooltip uiTooltip))
				{
					uiTooltip.Open("You have been invited to join " + n + "'s guild. Would you like to join?",
					() =>
					{
						Debug.Log("Accept");
						ClientManager.Broadcast(new GuildAcceptInviteBroadcast(), Channel.Reliable);
					},
					() =>
					{
						Debug.Log("Decline");
						ClientManager.Broadcast(new GuildDeclineInviteBroadcast(), Channel.Reliable);
					});
				}
			});
		}

		/// <summary>
		/// When we add a new guild member to the guild.
		/// </summary>
		public void OnClientGuildAddBroadcastReceived(GuildAddBroadcast msg)
		{
			// update our Guild list with the new Guild member
			if (Character == null)
			{
				return;
			}

			if (!UIManager.TryGet("UIGuild", out UIGuild uiGuild))
			{
				return;
			}

			uiGuild.OnGuildAddMember(msg.characterID, msg.rank, msg.location);
			ClientNamingSystem.SetName(NamingSystemType.GuildName, msg.guildID, (s) =>
			{
				if (uiGuild.GuildLabel != null)
				{
					uiGuild.GuildLabel.text = s;
				}
			});
		}

		/// <summary>
		/// When our local client leaves the guild.
		/// </summary>
		public void OnClientGuildLeaveBroadcastReceived(GuildLeaveBroadcast msg)
		{
			if (UIManager.TryGet("UIGuild", out UIGuild uiGuild))
			{
				uiGuild.OnLeaveGuild();
			}
		}

		/// <summary>
		/// When we need to add guild members.
		/// </summary>
		public void OnClientGuildAddMultipleBroadcastReceived(GuildAddMultipleBroadcast msg)
		{
			if (!UIManager.TryGet("UIGuild", out UIGuild uiGuild))
			{
				return;
			}

			var newIds = msg.members.Select(x => x.characterID).ToHashSet();
			foreach (long id in new HashSet<long>(uiGuild.Members.Keys))
			{
				if (!newIds.Contains(id))
				{
					uiGuild.OnGuildRemoveMember(id);
				}
			}
			foreach (GuildAddBroadcast subMsg in msg.members)
			{
				OnClientGuildAddBroadcastReceived(subMsg);
			}
		}

		/// <summary>
		/// When we need to remove guild members.
		/// </summary>
		public void OnClientGuildRemoveBroadcastReceived(GuildRemoveBroadcast msg)
		{
			if (UIManager.TryGet("UIGuild", out UIGuild uiGuild))
			{
				foreach (long characterID in msg.members)
				{
					uiGuild.OnGuildRemoveMember(characterID);
				}
			}
		}
#endif
	}
}