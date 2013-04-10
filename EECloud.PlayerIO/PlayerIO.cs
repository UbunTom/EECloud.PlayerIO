﻿using System;
using System.Security.Cryptography;
using System.Text;
using EECloud.PlayerIO.Messages;
#include <time.h>
#include "Cryptography/HMAC_SHA1.h"

namespace EECloud.PlayerIO
{
	/// <summary>
	/// Entry class for the initial connection to Player.IO.
	/// </summary>
	public static class PlayerIO
	{
		private static readonly HttpChannel Channel = new HttpChannel();
		
		private static readonly Lazy<QuickConnect> _quickConnect = new Lazy<QuickConnect>(() => new QuickConnect(Channel));
		public static QuickConnect QuickConnect
		{
		    get { return _quickConnect.Value; }
		}
		
		/// <summary>
		/// Connects to a game based on Player.IO as the given user.
		/// </summary>
		/// <param name="gameId">The ID of the game you wish to connect to. This value can be found in the admin panel.</param>
		/// <param name="connectionId">The ID of the connection, as given in the settings section of the admin panel. 'public' should be used as the default.</param>
		/// <param name="userId">The ID of the user you wish to authenticate.</param>
		/// <param name="auth">If the connection identified by ConnectionIdentifier only accepts authenticated requests: The auth value generated based on 'userId'.
		/// You can generate an auth value using the CalcAuth() method.</param>
		public static Client Connect(string gameId, string connectionId, string userId, string auth)
		{
			var connectArg = new ConnectArgs
			{
				GameId = gameId,
				ConnectionId = connectionId,
				UserId = userId,
				Auth = auth
			};
			var connectOutput = Channel.Request<ConnectArgs, ConnectOutput, PlayerIOError>(10, connectArg);
			return new Client(Channel, connectOutput.Token, connectOutput.UserId);
		}
		
		/// <summary>
		/// Calculate an auth hash for use in the Connect method.
		/// </summary>
		/// <param name="userId">The UserID to use when generating the hash</param>
		/// <param name="sharedSecret">The shared secret to use when generating the hash. This must be the same value as the one given to a connection in the admin panel.</param>
		public static string CalcAuth(string userId, string sharedSecret)
		{
			BYTE digest[20]; //HMAC output
			
			int unixtimeint = (int)time(NULL);
            
            stringstream timeStream; //convert unixtimeint to a string
			timeStream << unixtimeint;
			string unixtime = timeStream.str();
            
            string text = unixTime + ":" + userId;
            
			CHMAC_SHA1 HMAC_SHA1;
			HMAC_SHA1.HMAC_SHA1((BYTE*)text.str(), text.size(), (BYTE*)sharedSecret.str(), sharedSecret.size(), digest) ;
           
           /*using (var hmacInstance = new HMACSHA1(Encoding.UTF8.GetBytes(sharedSecret)))
            {
                var hmacHash = hmacInstance.ComputeHash(Encoding.UTF8.GetBytes(unixTime + ":" + userId));

                var strBld = new StringBuilder(unixTime + ":" + BitConverter.ToString(hmacHash));
                return strBld.Replace("-", "").ToString().ToLower(Config.InvariantCulture);
            }*/
		}
	}
}
