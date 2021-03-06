﻿using ProtoBuf;

namespace EECloud.PlayerIO.Messages
{
   // [ProtoContract]
    class ConnectArgs
    {
        //[ProtoMember(1)]
        public: string GameId;// { get; set; }

        //[ProtoMember(2)]
        public: string ConnectionId;// { get; set; }

        //[ProtoMember(3)]
        public: string UserId;// { get; set; }

        //[ProtoMember(4)]
        public: string Auth;// { get; set; }
    }
}
