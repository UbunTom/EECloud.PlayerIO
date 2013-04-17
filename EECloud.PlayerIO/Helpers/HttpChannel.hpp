#include <curl/curl.h>
#include <string>
#include <sstream>
#include <map>
using namespace std;

namespace EECloud
{
	class CURLRequest
	{
		private: CURL* handle;
		public: struct curl_slist *headerlist;

		public: CURLRequest();
		public: ~CURLRequest();

		public: CURL* handle(){return handle;}

	}

	size_t write_data(void* ptr, size_t size, size_t nmemb, void* stream);
	
	class HttpChannel
	{
		private: const string EndpointUri;
		private: map<string, string> _headers;
		public: HttpChannel();

		public:
		template<class TRequest, class TResponse, class TError>
		TResponse Request(int method, TRequest args)// where TError : Exception
        	{
			TResponse r = TResponse();//default(TResponse);
			CURLRequest request = GetRequest(method);

			stringstream protobufStream;//Prepare data to send
			args->SerializeToOstream(&protobufStream);
			string protobufString = protobufStream.str();
			curl_easy_setopt(request.handle(), CURLOPT_POSTFIELDS, protobufString);
       			curl_easy_setopt(request.handle(), CURLOPT_POSTFIELDSIZE, protobufString.length());
       			
       			std::stringstream response;//Prepare to recieve data
       			std::stringstream headers;
       			curl_easy_setopt(request.handle(), CURLOPT_WRITEFUNCTION, write_data);
    			curl_easy_setopt(request.handle(), CURLOPT_WRITEDATA, &response);
    			curl_easy_setopt(curl, CURLOPT_WRITEHEADER, &headers);

			try
			{
				res = curl_easy_perform(curl);	

				if (res!=0)
				{
					stringstream errstream;
					errstream << res;
					throw PlayerIOError(ErrorCode.GeneralError, "A cURL error occured: " + errstream.str());
				}

				if (!r.ParseFromIstream(&response)) {
					throw PlayerIOError(ErrorCode.GeneralError, "Failed to parse web response");
				}
				
				if (ReadHeader(response))
				{
					r->ParseFromIStream(response)
				}
				else
				{
					throw GetError<TError>(responseStream);
				}
			}
			catch (PlayerIOError err)
			{
			/*	if (webException.Response == null)
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
			    }*/
			}

			return r;
		}
		
		private: CURLRequest GetRequest(int method);
		
		private: bool ReadHeader(Stream responseStream);
		
		public: static TError GetError<TError>(Stream errorStream)// where TError : Exception
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
		
		public: void SetToken(string token);
		
	}
}
		
		
