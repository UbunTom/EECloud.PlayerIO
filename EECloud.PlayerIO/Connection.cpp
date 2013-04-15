namespace EECloud
{
        Connection::Connection(ServerEndpoint endpoint, string joinKey)
        {
            //...
            Connected = true;
        }

        void Connection::Disconnect()
        {
            Connected = false;
        }
    }
}
