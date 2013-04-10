#include <exception>

namespace EECloud.PlayerIO
{
    /// <summary>
    /// The base class for catching and reporting errors related to the Player.IO client.
    /// </summary>
    public class PlayerIOError: public std::exception
    {
        public: ErrorCode ErrorCode;
        
        public: string message
        
        public: const char* what(){return message.c_str();}
        public: string what(){return message;}

        /// <summary>
        /// Creates a new instance of PlayerIOError.
        /// </summary>
        /// <param name="errorCode">The code of the error that happened.</param>
        /// <param name="message">The error explained by words.</param>
        public: PlayerIOError(ErrorCode errorCode, string _message) : message(_message)
        {
            ErrorCode = errorCode;
        }
    }
}
