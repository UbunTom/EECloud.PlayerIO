#ifndef PLAYERIOREGISTRATIONERROR_H
#define PLAYERIOREGISTRATIONERROR_H

#include "PlayerIOError.hpp"

namespace EECloud
{
    /// <summary>
    /// If there are any errors when using the SimpleRegister method of QuickConnect, you'll get back an error object of this type that holds more details about the cause of the error. You can use this information to provide better help for your users when they are filling out your registration form.
    /// </summary>
    class PlayerIORegistrationError : public PlayerIOError
    {
        public: string CaptchaError;
        public: string EmailError;
        public: string PasswordError;
        public: string UsernameError;

		public: ~PlayerIORegistrationError() throw() {}

        public: PlayerIORegistrationError(ErrorCode errorCode, string message, string usernameError, string passwordError, string emailError, string captchaError) : PlayerIOError(errorCode, message)
        {
            UsernameError = usernameError;
            PasswordError = passwordError;
            EmailError = emailError;
            CaptchaError = captchaError;
        }
    };
}

#endif
