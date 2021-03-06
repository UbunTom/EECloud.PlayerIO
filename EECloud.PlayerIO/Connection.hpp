#include <string>
using namespace std;



namespace EECloud
{
	class ServerEndpoint;
	
    //Not sure if this events system is even working
    
    /// <summary>
    /// Used to add a message handler to the OnMessage event of an instance of Connection.
    /// </summary>
    //public delegate void MessageReceivedEventHandler(object sender, Message e);

    /// <summary>
    /// Used to add a disconnect handler to the OnDisconnect event of an instance of Connection.
    /// </summary>
    /// <param name="message">The reason of disconnecting explained by words.</param>
    //public delegate void DisconnectEventHandler(object sender, string message);

    /// <summary>
    /// A connection to a running Player.IO multiplayer room.
    /// </summary>
    class Connection
    {
        /// <summary>
        /// Determines if the connection is currently connected to a remote host or not.
        /// </summary>
        public: bool Connected;

        /// <summary>
        /// Event fired everytime a message is received.
        /// </summary>
        //public event MessageReceivedEventHandler OnMessage;
        /// <summary>
        /// Event fired when the connection gets disconnected.
        /// </summary>
        //public event DisconnectEventHandler OnDisconnect;

        public: Connection(ServerEndpoint* endpoint, string joinKey);

        public: void Disconnect();

    };
}
