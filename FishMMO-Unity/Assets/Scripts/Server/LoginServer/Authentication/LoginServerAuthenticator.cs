﻿using FishNet.Authenticating;
using FishNet.Connection;
using FishNet.Managing;
using FishNet.Transporting;
using FishMMO.Database;
using System;
using System.Text.RegularExpressions;
using FishMMO.Server.DatabaseServices;
using FishMMO.Shared;

namespace FishMMO.Server
{
	// Login Server Authenticator that allows Clients to connect with basic password authentication.
	public class LoginServerAuthenticator : Authenticator
	{
		/// <summary>
		/// Server Authentication event. Subscribe to this if you want something to happen immediately after client authentication success.
		/// </summary>
		public override event Action<NetworkConnection, bool> OnAuthenticationResult;
		public event Action<NetworkConnection, bool> OnClientAuthenticationResult;

		public ServerDbContextFactory DBContextFactory;

		public const int AccountNameMinLength = 3;
		public const int AccountNameMaxLength = 32;

		public virtual bool IsAllowedUsername(string accountName)
		{
			return !string.IsNullOrWhiteSpace(accountName) && 
				   accountName.Length >= AccountNameMinLength &&
				   accountName.Length <= AccountNameMaxLength &&
				   Regex.IsMatch(accountName, @"^[a-zA-Z0-9_]+$");
		}

		public override void InitializeOnce(NetworkManager networkManager)
		{
			base.InitializeOnce(networkManager);

			networkManager.ServerManager.OnRemoteConnectionState += ServerManager_OnRemoteConnectionState;

			// Listen for broadcast from clients.
			networkManager.ServerManager.RegisterBroadcast<SRPVerifyBroadcast>(OnServerSRPVerifyBroadcastReceived, false);
			networkManager.ServerManager.RegisterBroadcast<SRPProofBroadcast>(OnServerSRPProofBroadcastReceived, false);
			networkManager.ServerManager.RegisterBroadcast<SRPSuccess>(OnServerSRPSuccessBroadcastReceived, false);
		}

		/// <summary>
		/// Received on server when a Client sends the SRPVerify broadcast message.
		/// </summary>
		internal void OnServerSRPVerifyBroadcastReceived(NetworkConnection conn, SRPVerifyBroadcast msg)
		{
			/* If client is already authenticated this could be an attack. Connections
			 * are removed when a client disconnects so there is no reason they should
			 * already be considered authenticated. */
			if (conn.Authenticated)
			{
				conn.Disconnect(true);
				return;
			}
			ClientAuthenticationResult result;

			// if the database is unavailable
			if (DBContextFactory == null)
			{
				result = ClientAuthenticationResult.ServerFull;
			}
			else
			{
				using var dbContext = DBContextFactory.CreateDbContext();

				// check if any characters are online already
				if (CharacterService.TryGetOnline(dbContext, msg.s))
				{
					result = ClientAuthenticationResult.AlreadyOnline;
				}
				else
				{
					// get account salt and verifier if no one is online
					result = AccountService.Get(dbContext, msg.s, out string salt, out string verifier, out AccessLevel accessLevel);
					if (result == ClientAuthenticationResult.SrpVerify)
					{
						// prepare account
						AccountManager.AddConnectionAccount(conn, msg.s, msg.publicEphemeral, salt, verifier, accessLevel);

						// verify SrpState equals SRPVerify and then send account public data
						if (AccountManager.TryUpdateSrpState(conn, SrpState.SRPVerify, SrpState.SRPVerify, (a) =>
							{
								//UnityEngine.Debug.Log("SRPVerify");

								SRPVerifyBroadcast srpVerify = new SRPVerifyBroadcast()
								{
									s = a.SrpData.Salt,
									publicEphemeral = a.SrpData.ServerEphemeral.Public,
								};
								conn.Broadcast(srpVerify, false);
								return true;
							}))
						{
							return;
						}
					}
				}
			}
			ClientAuthResultBroadcast authResult = new ClientAuthResultBroadcast()
			{
				result = result,
			};
			conn.Broadcast(authResult, false);
		}

		/// <summary>
		/// Received on server when a Client sends the SRPProof broadcast message.
		/// </summary>
		internal void OnServerSRPProofBroadcastReceived(NetworkConnection conn, SRPProofBroadcast msg)
		{
			/* If client is already authenticated this could be an attack. Connections
			 * are removed when a client disconnects so there is no reason they should
			 * already be considered authenticated. */
			if (conn.Authenticated ||
				!AccountManager.TryUpdateSrpState(conn, SrpState.SRPVerify, SrpState.SRPProof, (a) =>
				{
					if (a.SrpData.GetProof(msg.proof, out string serverProof))
					{
						//UnityEngine.Debug.Log("SRPProof");

						// update SRP State
						a.SrpData.State = SrpState.SRPProof;

						SRPProofBroadcast msg2 = new SRPProofBroadcast()
						{
							proof = serverProof,
						};
						conn.Broadcast(msg2, false);
						return true;
					}
					return false;
				}))
			{
				conn.Disconnect(true);
				return;
			}
		}

		/// <summary>
		/// Received on server when a Client sends the SRPSuccess broadcast message.
		/// </summary>
		internal void OnServerSRPSuccessBroadcastReceived(NetworkConnection conn, SRPSuccess msg)
		{
			/* If client is already authenticated this could be an attack. Connections
			 * are removed when a client disconnects so there is no reason they should
			 * already be considered authenticated. */
			if (conn.Authenticated ||
				!AccountManager.TryUpdateSrpState(conn, SrpState.SRPProof, SrpState.SRPSuccess, (a) =>
				{
					using var dbContext = DBContextFactory.CreateDbContext();
					// attempt to complete login authentication and return a result broadcast
					ClientAuthenticationResult result = TryLogin(dbContext, ClientAuthenticationResult.LoginSuccess, a.SrpData.UserName);

					bool authenticated = result != ClientAuthenticationResult.InvalidUsernameOrPassword &&
										 result != ClientAuthenticationResult.ServerFull;

					// tell the connecting client the result of the authentication
					ClientAuthResultBroadcast authResult = new ClientAuthResultBroadcast()
					{
						result = result,
					};
					conn.Broadcast(authResult, false);

					//UnityEngine.Debug.Log("Authorized: " + authResult);

					/* Invoke result. This is handled internally to complete the connection authentication or kick client.
					 * It's important to call this after sending the broadcast so that the broadcast
					 * makes it out to the client before the kick. */
					OnAuthentication(conn, authenticated);
					OnClientAuthenticationResult?.Invoke(conn, authenticated);
					return true;
				}))
			{
				conn.Disconnect(true);
				return;
			}
		}

		public virtual void OnAuthentication(NetworkConnection conn, bool authenticated)
		{
			OnAuthenticationResult?.Invoke(conn, authenticated);
		}

		/// <summary>
		/// Login Server TryLogin function.
		/// </summary>
		internal virtual ClientAuthenticationResult TryLogin(ServerDbContext dbContext, ClientAuthenticationResult result, string username)
		{
			return ClientAuthenticationResult.LoginSuccess;
		}

		// remove the connection from the AccountManager
		private void ServerManager_OnRemoteConnectionState(NetworkConnection conn, RemoteConnectionStateArgs args)
		{
			if (args.ConnectionState == RemoteConnectionState.Stopped)
			{
				AccountManager.RemoveConnectionAccount(conn);
			}
		}
	}
}