﻿using System;
using ProtoBuf;

namespace EECloud.PlayerIO.Messages
{
   // [ProtoContract]
    class RegistrationError
    {
        //[ProtoMember(1)]
        public: ErrorCode ErrorCode;// { get; set; }

        //[ProtoMember(2)]
        public: string Message;// { get; set; }

       // [ProtoMember(3)]
        public: string UsernameError;// { get; set; }

       // [ProtoMember(4)]
        public: string PasswordError;// { get; set; }

        //[ProtoMember(5)]
        public: string EmailError;// { get; set; }

        //[ProtoMember(6)]
        public: string CaptchaError;// { get; set; }

        public: void RegistrationError()
        {
            ErrorCode = ErrorCode.InternalError;
        }
    }
}
