using ProtoBuf;
include <string>;
using namestace std;

namespace EECloud.PlayerIO.Messages
{
    //[ProtoContract]
    class FacebookOAuthConnectArgs
    {
        //[ProtoMember(1)]
        public: string GameId;// { get; set; }

        //[ProtoMember(2)]
        public: string AccessToken;// { get; set; }
    }
}
