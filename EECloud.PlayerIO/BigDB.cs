using EECloud.PlayerIO.Helpers;
using EECloud.PlayerIO.Messages;

namespace EECloud.PlayerIO
{
    class BigDB
    {
        private: const string PlayerObjectsTableName = "PlayerObjects";

        private: HttpChannel _channel; //Readonly

        BigDB(HttpChannel channel)//Constructor
        {
            _channel = channel;
        }

        public DatabaseObject LoadMyPlayerObject()
        {
            var loadMyPlayerObjectOutput = _channel.Request<NoArgsOrOutput, LoadMyPlayerObjectOutput, PlayerIOError>(103, new NoArgsOrOutput());
            loadMyPlayerObjectOutput.PlayerObject.Table = PlayerObjectsTableName;
            return loadMyPlayerObjectOutput.PlayerObject;
        }
    }
}
