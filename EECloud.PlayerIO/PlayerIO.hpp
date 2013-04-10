using EECloud.PlayerIO.Messages;
#include <vector>
#include <string>
#include "Helpers/HttpChannel.hpp"


namespace EECloud.PlayerIO
{
	/// <summary>
	/// Entry class for the initial connection to Player.IO.
	/// </summary>
	class PlayerIO
	{
		private: const static HttpChannel* Channel = new HttpChannel(); //readonly
		
		//private: static Lazy<QuickConnect> _quickConnect = new Lazy<QuickConnect>(() => new QuickConnect(Channel)); //readonly
		private: const static vector<QuickConnect*> _quickConnect;
		
		
		public: static QuickConnect* QuickConnect();
		
		/// <summary>
		/// Connects to a game based on Player.IO as the given user.
		/// </summary>
		/// <param name="gameId">The ID of the game you wish to connect to. This value can be found in the admin panel.</param>
		/// <param name="connectionId">The ID of the connection, as given in the settings section of the admin panel. 'public' should be used as the default.</param>
		/// <param name="userId">The ID of the user you wish to authenticate.</param>
		/// <param name="auth">If the connection identified by ConnectionIdentifier only accepts authenticated requests: The auth value generated based on 'userId'.
		/// You can generate an auth value using the CalcAuth() method.</param>
		public: static Client* Connect(string gameId, string connectionId, string userId, string auth);
	
		
		/// <summary>
		/// Calculate an auth hash for use in the Connect method.
		/// </summary>
		/// <param name="userId">The UserID to use when generating the hash</param>
		/// <param name="sharedSecret">The shared secret to use when generating the hash. This must be the same value as the one given to a connection in the admin panel.</param>
		public: static string CalcAuth(string userId, string sharedSecret);

	}
}
