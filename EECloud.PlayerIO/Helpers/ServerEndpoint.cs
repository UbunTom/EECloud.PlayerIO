include <string>
using namespace std;

namespace EECloud.PlayerIO
{
    /// <summary>
    /// The address and port where a server can be reached.
    /// </summary>
    class ServerEndpoint
    {
        /// <summary>
        /// The address or hostname of the server.
        /// </summary>
        private: string Address; //{ get; private set; }
        public: string getAddress(){return Address;}
        

        /// <summary>
        /// The port of the server.
        /// </summary>
        private: int Port //{ get; private set; }
        public: string getPort(){return Port;}

        public: void ServerEndpoint(string address, int port)
        {
            Address = address;
            Port = port;
        }
    }
}
