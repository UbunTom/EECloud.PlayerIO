﻿namespace EECloud.PlayerIO
{
    /// <summary>
    /// If there are any errors when using the SimpleRegister method of QuickConnect, you'll get back an error object of this type that holds more details about the cause of the error. You can use this information to provide better help for your users when they are filling out your registration form.
    /// </summary>
    public class PlayerIORegistrationError : public PlayerIOError
    {
        public string CaptchaError { get; private set; }
        public string EmailError { get; private set; }
        public string PasswordError { get; private set; }
        public string UsernameError { get; private set; }

        public PlayerIORegistrationError(ErrorCode errorCode, string message, string usernameError, string passwordError, string emailError, string captchaError) : PlayerIOError(errorCode, message)
        {
            UsernameError = usernameError;
            PasswordError = passwordError;
            EmailError = emailError;
            CaptchaError = captchaError;
        }
    }
}
