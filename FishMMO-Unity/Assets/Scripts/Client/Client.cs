﻿using FishNet.Broadcast;
using FishNet.Managing;
using FishNet.Transporting;
using FishNet.Managing.Scened;
using FishMMO.Shared;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.CompilerServices;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;
#if UNITY_EDITOR
using UnityEditor;
#endif
using KinematicCharacterController;

namespace FishMMO.Client
{
	/// <summary>
	/// Client controls connecting to servers, 
	/// </summary>
	public class Client : MonoBehaviour
	{
		private enum ServerConnectionType : byte
		{
			None,
			Login,
			ConnectingToWorld,
			World,
			Scene,
		}

		private LocalConnectionState clientState = LocalConnectionState.Stopped;
		private Dictionary<string, Scene> serverLoadedScenes = new Dictionary<string, Scene>();

		private byte reconnectsAttempted = 0;
		private float nextReconnect = 0;
		private bool forceDisconnect = false;

		private string lastWorldAddress = "";
		private ushort lastWorldPort = 0;

		private ServerConnectionType currentConnectionType = ServerConnectionType.None;
		public byte ReconnectAttempts = 10;
		public float ReconnectAttemptWaitTime = 5f;

		public List<ServerAddress> LoginServerAddresses;
		public Configuration Configuration = null;

		public event Action OnConnectionSuccessful;
		public event Action<byte, byte> OnReconnectAttempt;
		public event Action OnReconnectFailed;
		public event Action OnQuitToLogin;

		public bool CanReconnect { get { return currentConnectionType == ServerConnectionType.World ||
												currentConnectionType == ServerConnectionType.Scene; } }

		private static NetworkManager _networkManager;
		public NetworkManager NetworkManager;
		public ClientLoginAuthenticator LoginAuthenticator;

		void Awake()
		{
			if (NetworkManager == null)
			{
				NetworkManager = FindObjectOfType<NetworkManager>();
				if (NetworkManager == null)
				{
					Debug.LogError("Client: NetworkManager not found.");
					Quit();
					return;
				}
			}

			// set our static NM reference... this is used for easier client broadcasts
			_networkManager = NetworkManager;

			if (LoginAuthenticator == null)
			{
				LoginAuthenticator = FindObjectOfType<ClientLoginAuthenticator>();
				if (LoginAuthenticator == null)
				{
					Debug.LogError("Client: LoginAuthenticator not found.");
					Quit();
					return;
				}
			}

			Application.logMessageReceived += this.Application_logMessageReceived;

			// set the UIManager Client
			UIManager.SetClient(this);

			// initialize naming service
			ClientNamingSystem.InitializeOnce(this);

			// assign the client to the Login Authenticator
			LoginAuthenticator.SetClient(this);

			string path = Client.GetWorkingDirectory();

			// load configuration
			Configuration = new Configuration(path);
			if (!Configuration.Load(Configuration.DEFAULT_FILENAME + Configuration.EXTENSION))
			{
				// if we failed to load the file.. save a new one
				Configuration.Set("Resolution Width", 1280);
				Configuration.Set("Resolution Height", 800);
				Configuration.Set("Refresh Rate", (uint)60);
				Configuration.Set("Fullscreen", false);
#if !UNITY_EDITOR
				Configuration.Save();
#endif
			}

			if (Configuration.TryGetInt("Resolution Width", out int width) &&
				Configuration.TryGetInt("Resolution Height", out int height) &&
				Configuration.TryGetUInt("Refresh Rate", out uint refreshRate) &&
				Configuration.TryGetBool("Fullscreen", out bool fullscreen))
			{
#if !UNITY_WEBGL
				Screen.SetResolution(width, height, fullscreen ? FullScreenMode.ExclusiveFullScreen : FullScreenMode.Windowed, new RefreshRate()
				{
					numerator = refreshRate,
					denominator = 1,
				});
#endif
			}

			// Ensure the KCC System is created.
			KinematicCharacterSystem.EnsureCreation();
			KinematicCharacterSystem.Settings.AutoSimulation = false;

			UnityEngine.SceneManagement.SceneManager.sceneLoaded += UnitySceneManager_OnSceneLoaded;
			UnityEngine.SceneManagement.SceneManager.sceneUnloaded += UnitySceneManager_OnSceneUnloaded;
			NetworkManager.ClientManager.OnClientConnectionState += ClientManager_OnClientConnectionState;
			NetworkManager.SceneManager.OnLoadStart += SceneManager_OnLoadStart;
			NetworkManager.SceneManager.OnLoadPercentChange += SceneManager_OnLoadPercentChange;
			NetworkManager.SceneManager.OnLoadEnd += SceneManager_OnLoadEnd;
			NetworkManager.SceneManager.OnUnloadStart += SceneManager_OnUnloadStart;
			NetworkManager.SceneManager.OnUnloadEnd += SceneManager_OnUnloadEnd;
			LoginAuthenticator.OnClientAuthenticationResult += Authenticator_OnClientAuthenticationResult;

			ICharacter.OnReadPayload += Character_OnReadPayload;
			ICharacter.OnStartLocalClient += Character_OnStartLocalClient;
			ICharacter.OnStopLocalClient += Character_OnStopLocalClient;
			IGuildController.OnReadPayload += GuildController_OnReadPayload;

			RegionDisplayNameAction.OnDisplay2DLabel += RegionDisplayNameAction_OnDisplay2DLabel;
		}

		private void Update()
		{
			if (forceDisconnect ||
				reconnectsAttempted > ReconnectAttempts ||
				clientState != LocalConnectionState.Stopped)
			{
				return;
			}

			if (nextReconnect > 0)
			{
				nextReconnect -= Time.deltaTime;

				if (nextReconnect <= 0)
				{
					OnTryReconnect();
				}
			}
		}

		private void Application_logMessageReceived(string condition, string stackTrace, LogType type)
		{
			if (type == LogType.Exception)
			{
				Debug.LogError($"{stackTrace}");

				ForceDisconnect();
			}
		}

		public static string GetWorkingDirectory()
		{
#if UNITY_EDITOR
			return Directory.GetParent(Directory.GetParent(Application.dataPath).FullName).FullName;
#else
			return AppDomain.CurrentDomain.BaseDirectory;
#endif
		}

		public void OnDestroy()
		{
#if UNITY_EDITOR
			InputManager.MouseMode = true;
#endif

			ICharacter.OnReadPayload -= Character_OnReadPayload;
			ICharacter.OnStartLocalClient -= Character_OnStartLocalClient;
			ICharacter.OnStopLocalClient -= Character_OnStopLocalClient;
			IGuildController.OnReadPayload -= GuildController_OnReadPayload;

			RegionDisplayNameAction.OnDisplay2DLabel -= RegionDisplayNameAction_OnDisplay2DLabel;

			ClientNamingSystem.Destroy();

			Application.logMessageReceived -= this.Application_logMessageReceived;
		}

		public void Quit()
		{
#if UNITY_EDITOR
			EditorApplication.ExitPlaymode();
#else
			Application.Quit();
#endif
		}

		public void QuitToLogin(bool forceDisconnect = true)
		{
			if (forceDisconnect)
			{
				ForceDisconnect();
			}

			reconnectsAttempted = 0;
			nextReconnect = -1;
			currentConnectionType = ServerConnectionType.None;
			lastWorldAddress = "";
			lastWorldPort = 0;

			OnQuitToLogin?.Invoke();

#if UNITY_EDITOR
			InputManager.MouseMode = true;
#endif

			UnloadServerLoadedScenes();
		}

		/// <summary>
		/// Checks if the current connection is valid and started. Optional authentication check (Default True).
		/// </summary>
		public bool IsConnectionReady()
		{
			return IsConnectionReady(LocalConnectionState.Started, true);
		}
		/// <summary>
		/// Checks if the current connection is valid and started. Optional authentication check (Default True).
		/// </summary>
		public bool IsConnectionReady(bool requireAuthentication)
		{
			return IsConnectionReady(LocalConnectionState.Started, requireAuthentication);
		}
		/// <summary>
		/// Checks if the current connection is valid and started. Optional authentication check (Default True).
		/// </summary>
		public bool IsConnectionReady(LocalConnectionState clientState = LocalConnectionState.Started)
		{
			return IsConnectionReady(clientState, false);
		}
		/// <summary>
		/// Checks if the current connection is valid and started. Optional authentication check (Default True).
		/// </summary>
		public bool IsConnectionReady(LocalConnectionState clientState, bool requireAuthentication)
		{
			if (LoginAuthenticator == null ||
				NetworkManager == null ||
				this.clientState != clientState)
			{
				return false;
			}

			if (requireAuthentication &&
				(!NetworkManager.ClientManager.Connection.IsValid ||
				!NetworkManager.ClientManager.Connection.IsAuthenticated))
			{
				return false;
			}

			return true;
		}

		private void ClientManager_OnClientConnectionState(ClientConnectionStateArgs obj)
		{
			clientState = obj.ConnectionState;

			switch (clientState)
			{
				case LocalConnectionState.Stopped:
					if (currentConnectionType == ServerConnectionType.Login)
					{
						QuitToLogin();
					}
					else if (!forceDisconnect)
					{
						// we can reconnect to the world server and scene servers
						if (CanReconnect)
						{
							// wait until we can reconnect again
							nextReconnect = ReconnectAttemptWaitTime;

							// show the reconnect screen?
							OnReconnectAttempt?.Invoke(reconnectsAttempted, ReconnectAttempts);
						}
					}
					currentConnectionType = ServerConnectionType.None;
					break;
				case LocalConnectionState.Started:
					OnConnectionSuccessful?.Invoke();
					reconnectsAttempted = 0;
					nextReconnect = -1;
					forceDisconnect = false;
					break;
			}
		}

		private void Authenticator_OnClientAuthenticationResult(ClientAuthenticationResult result)
		{
			switch (result)
			{
				case ClientAuthenticationResult.AccountCreated:
					break;
				case ClientAuthenticationResult.InvalidUsernameOrPassword:
					break;
				case ClientAuthenticationResult.AlreadyOnline:
					break;
				case ClientAuthenticationResult.Banned:
					break;
				case ClientAuthenticationResult.LoginSuccess:
					currentConnectionType = ServerConnectionType.Login;
					break;
				case ClientAuthenticationResult.WorldLoginSuccess:
					currentConnectionType = ServerConnectionType.World;
					break;
				case ClientAuthenticationResult.SceneLoginSuccess:
					currentConnectionType = ServerConnectionType.Scene;
					break;
				case ClientAuthenticationResult.ServerFull:
					break;
				default:
					break;
			}
		}

		public void ConnectToServer(string address, ushort port, bool isWorldServer = false)
		{
			if (isWorldServer)
			{
				currentConnectionType = ServerConnectionType.ConnectingToWorld;
			}

			// stop current connection if any
			NetworkManager.ClientManager.StopConnection();

			// connect to the server
			StartCoroutine(OnAwaitingConnectionReady(address, port, isWorldServer));
		}

		public void OnTryReconnect()
		{
			if (nextReconnect < 0)
			{
				nextReconnect = ReconnectAttemptWaitTime;
			}
			if (reconnectsAttempted < ReconnectAttempts)
			{
				if (IsAddressValid(lastWorldAddress) && lastWorldPort != 0)
				{
					++reconnectsAttempted;
					OnReconnectAttempt?.Invoke(reconnectsAttempted, ReconnectAttempts);
					ConnectToServer(lastWorldAddress, lastWorldPort);
				}
			}
			else
			{
				reconnectsAttempted = 0;
				nextReconnect = -1;
				OnReconnectFailed?.Invoke();
			}
		}

		IEnumerator OnAwaitingConnectionReady(string address, ushort port, bool isWorldServer)
		{
			// wait for the connection to the current server to stop
			while (clientState != LocalConnectionState.Stopped)
			{
				yield return new WaitForSeconds(0.2f);
			}

			if (forceDisconnect)
			{
				forceDisconnect = false;
				yield return null;
			}

			if (isWorldServer)
			{
				lastWorldAddress = address;
				lastWorldPort = port;
			}

			// connect to the next server
			NetworkManager.ClientManager.StartConnection(address, port);

			yield return null;
		}

		public void ReconnectCancel()
		{
			OnReconnectFailed?.Invoke();
			ForceDisconnect();
		}

		public void ForceDisconnect()
		{
			forceDisconnect = true;

			// stop current connection if any
			NetworkManager.ClientManager.StopConnection();
		}

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public static void Broadcast<T>(T broadcast, Channel channel = Channel.Reliable) where T : struct, IBroadcast
		{
			Debug.Log($"[Broadcast] Sending: " + typeof(T));
			_networkManager.ClientManager.Broadcast(broadcast, channel);
		}

		public bool TryGetRandomLoginServerAddress(out ServerAddress serverAddress)
		{
			if (LoginServerAddresses != null && LoginServerAddresses.Count > 0)
			{
				// pick a random login server
				serverAddress = LoginServerAddresses.GetRandom();
				return true;
			}
			serverAddress = default;
			return false;
		}

		/// <summary>
		/// IPv4 Regex, can we get IPv6 support???
		/// </summary>
		public bool IsAddressValid(string address)
		{
			const string ValidIpAddressRegex = "^(([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])\\.){3}([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])$";
			Match match = Regex.Match(address, ValidIpAddressRegex);
			return match.Success;
		}

		private void UnitySceneManager_OnSceneLoaded(Scene scene, LoadSceneMode mode)
		{
			// ClientBootstrap overrides active scene if it is ever loaded.
			if (scene.name.Contains("ClientBootstrap"))
			{
				UnityEngine.SceneManagement.SceneManager.SetActiveScene(scene);
			}
		}

		private void UnitySceneManager_OnSceneUnloaded(Scene scene)
		{
		}

		private void SceneManager_OnLoadStart(SceneLoadStartEventArgs args)
		{
			// unload previous scene
			UnloadServerLoadedScenes();
		}

		private void UnloadServerLoadedScenes()
		{
			foreach (Scene scene in serverLoadedScenes.Values)
			{
				UnityEngine.SceneManagement.SceneManager.UnloadSceneAsync(scene);
			}
			serverLoadedScenes.Clear();
		}

		private void SceneManager_OnLoadPercentChange(SceneLoadPercentEventArgs args)
		{
		}

		private void SceneManager_OnLoadEnd(SceneLoadEndEventArgs args)
		{
			// add loaded scenes to list
			if (args.LoadedScenes != null)
			{
				foreach (Scene scene in args.LoadedScenes)
				{
					serverLoadedScenes[scene.name] = scene;
				}
			}
		}

		private void SceneManager_OnUnloadStart(SceneUnloadStartEventArgs args)
		{
		}

		private void SceneManager_OnUnloadEnd(SceneUnloadEndEventArgs args)
		{
		}

		/// <summary>
		/// This function is called when the local Character reads a payload.
		/// </summary>
		public void Character_OnReadPayload(Character character)
		{
			// load the characters name from disk or request it from the server
			ClientNamingSystem.SetName(NamingSystemType.CharacterName, character.ID, (n) =>
			{
				character.gameObject.name = n;
				character.CharacterName = n;
				character.CharacterNameLower = n.ToLower();

				if (character.CharacterNameLabel != null)
					character.CharacterNameLabel.text = n;
			});
		}

		/// <summary>
		/// This function is called when the local Character connection is started. This generally happens when the character is successfully spawned in the scene.
		/// </summary>
		public void Character_OnStartLocalClient(Character character)
		{
			// Assign UI Character
			UIManager.SetCharacter(character);

			LocalInputController localInputController = character.gameObject.GetComponent<LocalInputController>();
			if (localInputController == null)
			{
				localInputController = character.gameObject.AddComponent<LocalInputController>();
			}
			localInputController.Initialize(character);

			// Disable Mouse Mode by default, the character should be controllable as soon as we enter the scene.
			InputManager.MouseMode = false;
		}

		/// <summary>
		/// This function is called when the local Character connection is stopped. This generally happens when the character is despawned or disconnected.
		/// </summary>
		public void Character_OnStopLocalClient(Character character)
		{
			// Enable the mouse
			InputManager.MouseMode = true;

			LocalInputController localInputController = character.gameObject.GetComponent<LocalInputController>();
			if (localInputController != null)
			{
				localInputController.Deinitialize();
			}

			// Clear the UI Character
			UIManager.UnsetCharacter();
		}

		public static void GuildController_OnReadPayload(long ID, Character character)
		{
			if (ID != 0)
			{
				// load the characters guild from disk or request it from the server
				ClientNamingSystem.SetName(NamingSystemType.GuildName, ID, (s) =>
				{
					character.SetGuildName(s);
				});
			}
		}

		public UIAdvancedLabel RegionNameLabel = null;

		public IReference RegionDisplayNameAction_OnDisplay2DLabel(string text, FontStyle style, Font font, int fontSize, Color color, float lifeTime, bool fadeColor, bool increaseY, Vector2 pixelOffset)
		{
			if (RegionNameLabel != null)
			{
				RegionNameLabel.Setup(text, style, font, fontSize, color, lifeTime, fadeColor, increaseY, pixelOffset);
			}
			else
			{
				RegionNameLabel = UIAdvancedLabel.Create(text, style, font, fontSize, color, lifeTime, fadeColor, increaseY, pixelOffset) as UIAdvancedLabel;
			}
			return RegionNameLabel;
		}
	}
}