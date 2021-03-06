﻿using EECloud.PlayerIO.Helpers;
using ProtoBuf;

namespace EECloud.PlayerIO.Messages
{
    [ProtoContract]
    public class LoadMyPlayerObjectOutput
    {
        [ProtoMember(1)]
        public DatabaseObject PlayerObject { get; set; }
    }
}
