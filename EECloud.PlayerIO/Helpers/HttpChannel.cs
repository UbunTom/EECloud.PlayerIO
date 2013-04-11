using System;
using System.Collections.Generic;
using System.IO;
using System.Net;
using System.Text;
using EECloud.PlayerIO.Messages;
using ProtoBuf;
#include <curl/curl.h>
#include <string>
#include <map>

namespace EECloud.PlayerIO
{
	
	class CURLRequest
	{
		private: CURL* handle;
		public:struct curl_slist *headerlist;
		
		CURLRequest()
		{
			handle = curl_easy_init();
		}
		
		public: CURL* handle(){return handle;}
		
		public: size_t write_data(void *ptr, size_t size, size_t nmemb, void *stream)
		{
			std::string buf = std::string(static_cast<char *>(ptr), size * nmemb);
			std::stringstream *response = static_cast<std::stringstream *>(stream);
			response->write(buf.c_str(), (std::streamsize)buf.size());
			return size * nmemb;
		}
		
		~CURLRequest()
		{
			curl_slist_free_al(headerslist);
			curl_easy_cleanup(handle);
		}

	}
	
	
	
	class HttpChannel
	{
		private: const string EndpointUri = "http://api.playerio.com/api";
		private: map<string, string> _headers;
		
		public:
		template<class TRequest, class TResponse, class TError>
		TResponse Request(int method, TRequest args)// where TError : Exception
        {
			TResponse r = TResponse();//default(TResponse);
			CURLRequest request = GetRequest(method);
			
			stringstream protobufStream;//Prepare data to send
			args->SerializeToOstream(&protobufStream);
			string protobufStream = protobufStream.str();
			curl_easy_setopt(curl, CURLOPT_POSTFIELDS, protobufString);
       			curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, protobufString.length());
       			
       			std::stringstream response;//Prepare to recieve data
       			curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
    			curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
			
			try
			{
				res = curl_easy_perform(curl);
				
				
				using (var responseStream = request.GetResponse().GetResponseStream())
				{
					if (ReadHeader(responseStream))
					{
						r = Serializer.Deserialize<TResponse>(responseStream);
					}
					else
					{
						throw GetError<TError>(responseStream);
					}
				}
			}
			catch (WebException webException)
			{
				if (webException.Response == null)
				{
					throw new PlayerIOError(ErrorCode.GeneralError, "Connection to the Player.IO WebService has just been unexpectedly terminated.");
				}
			    
			    using (var stream = webException.Response.GetResponseStream())
			    {
			        if (stream != null)
			            using (var streamReader = new StreamReader(stream))
			            {
			                throw new PlayerIOError(ErrorCode.GeneralError, "Error communicating with the Player.IO WebService: " + streamReader.ReadToEnd());
			            }
			    }
			}

			return r;
		}

        private: CURLRequest GetRequest(int method)
        {
        	CURLRequest request;
		
		stringstream methodStream; //convert mothos to a string
		methodStream << method;
		string methodString = methodStream.str();
        	
		curl_easy_setopt(request.handle(), CURLOPT_URL, EndpointUri + "/" + methodString);
		curl_easy_setopt(request.handle(), CURLOPT_TIMEOUT, 15L);
		curl_easy_setopt(request.handle(), CURLOPT_POST, 1L);
        	
        	request.headerlist=NULL;
        	
        	if (_headers.size != 0)
		{
			/*lock (_headers) Is this using threads?
			{*/
			for (iter = _headers.begin(); iter != _headers.end(); ++iter)
			{	
				request.header_list = curl_slist_append(request.header_list, iter->first + ": " + iter->second);  
			}
			//}
		}
		
		curl_easy_setopt(request.handle(), CURLOPT_HTTPHEADER, slist);
		
		CURLRequest output;
		output.handle=curl;
		output.headerlist=slist;
		
		return output;
        }

        private bool ReadHeader(Stream responseStream)
        {
            if (responseStream.ReadByte() == 1)
            {
                var num = (ushort)(responseStream.ReadByte() << 8 | responseStream.ReadByte());
                var numArray = new byte[num];
                responseStream.Read(numArray, 0, numArray.Length);
                lock (_headers)
                {
                    _headers["playertoken"] = Encoding.UTF8.GetString(numArray, 0, numArray.Length);
                }
            }
            return responseStream.ReadByte() == 1;
        }

        public static TError GetError<TError>(Stream errorStream) where TError : Exception
        {
            if (typeof(TError) != typeof(PlayerIOError))
            {
                if (typeof(TError) != typeof(PlayerIORegistrationError))
                {
                    return new ApplicationException("Unexpected error type: " + typeof(TError).FullName) as TError;
                }
                var regError = Serializer.Deserialize<RegistrationError>(errorStream);
                return new PlayerIORegistrationError(regError.ErrorCode, regError.Message, regError.UsernameError, regError.PasswordError, regError.EmailError, regError.CaptchaError) as TError;
            }
            var err = Serializer.Deserialize<Error>(errorStream);
            return new PlayerIOError(err.ErrorCode, err.Message) as TError;
        }

        public void SetToken(string token)
        {
            var strs = new Dictionary<string, string>();
            strs["playertoken"] = token;
            _headers = strs;
        }
    }
}
