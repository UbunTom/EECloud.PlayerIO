#ifndef PLAYERIOERROR_H
#define PLAYERIOERROR_H

#include <string>
#include "ErrorCode.hpp"
using namespace std;

namespace EECloud
{
    /// <summary>
    /// The base class for catching and reporting errors related to the Player.IO client.
    /// </summary>
    class PlayerIOError: public exception
    {
        public: ErrorCode errorCode;
        
        public: string message;
        
        //public: const char* what(){return message.c_str();}
        virtual const char * what() const throw () {return message.c_str(); }
        
        public: ~PlayerIOError() throw() {}

        /// <summary>
        /// Creates a new instance of PlayerIOError.
        /// </summary>
        /// <param name="errorCode">The code of the error that happened.</param>
        /// <param name="message">The error explained by words.</param>
        public: PlayerIOError(ErrorCode _errorCode, string _message) : message(_message)
        {
            errorCode = _errorCode;
        }
    };
}

#endif
