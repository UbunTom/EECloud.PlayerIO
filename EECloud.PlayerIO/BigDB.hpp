using EECloud.PlayerIO.Helpers;
using EECloud.PlayerIO.Messages;

namespace EECloud
{
    class BigDB
    {
        private: const string PlayerObjectsTableName;

        private: HttpChannel* _channel; //Readonly

        BigDB(HttpChannel* channel);//Constructor

        public: DatabaseObject* LoadMyPlayerObject();
    }
}
