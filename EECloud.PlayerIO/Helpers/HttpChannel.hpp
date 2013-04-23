#ifndef HTTPCHANNEL_H
#define HTTPCHANNEL_H

#include <curl/curl.h>
#include <string>
#include <sstream>
#include <map>
#include <typeinfo>
#include <iostream>
#include <cstdlib>
#include <type_traits>
#include "../Messages/ProtobufHelper.hpp"
#include "../Error/ErrorCode.hpp"
#include "../Error/PlayerIOError.hpp"
#include "../Error/PlayerIORegistrationError.hpp"
using namespace std;

namespace EECloud
{
	
	
	
	class CURLRequest
	{
		private: CURL* handle;
		public: struct curl_slist *headerlist;

		public: CURLRequest();
		public: ~CURLRequest();

		public: CURL* get_handle(){return handle;}

	};

	size_t write_data(void* ptr, size_t size, size_t nmemb, void* stream);
	
	class HttpChannel
	{
		private: const string EndpointUri;
		private: map<string, string> _headers;
		public: HttpChannel();

		private: CURLRequest GetRequest(int method);
		
		private: bool ReadHeader(stringstream &responseStream);

		template< class T > struct remove_pointer {typedef T type;};


		public:
		template<typename TRequest, typename TResponse, typename TError>
		TResponse* Request(int method, TRequest* args)// where TError : Exception
        {
			//cout << typeid(TResponse).name() << endl;
			//typename std::remove_pointer<TResponse>::type Typ;
			//cout << typeid(Typ).name() << endl;
			
			//std::remove_pointer<TResponse>::type x;
			
			/*ConnectArgs* argss = new ConnectArgs;
			argss->set_gameid("Hellogameid");
			argss->set_connectionid("connnn");
			argss->set_userid("USR");
			argss->set_auth("Authentic");
			
			stringstream output;
			stringstream output2;
			argss->SerializeToOstream(&output);
			output2 << "\n\x0BHellogameidconnnnUSR\"	Authentic";
			
			
			string out = output.str();
			string out2 = output2.str();
			
			stringstream outhex,outhex2;
			outhex << hex;
			outhex2 << hex;
			
			cout << endl << "O1: ";
			for (int i=0;i<out.size();i++)outhex << int(out[i]);
			cout << outhex.str() << endl << "O2: ";
			for (int i=0;i<out2.size();i++)outhex2 << int(out2[i]);
			cout << outhex2.str() << endl;
			
			cout << "A: " << output.str() << " " << output.str().size() << endl;
			cout << "B: " << output2.str() << " " << output2.str().size() << endl;
			
			
			cout << "String comp: " << (output.str()==output2.str()) << endl;
			output.str(output2.str());
			cout << "String comp: " << (output.str()==output2.str()) << endl;
			
			cout << "X" << output.str() << "X" << endl;
			
			ConnectArgs* arg2 = new ConnectArgs;
			arg2->ParseFromIstream(&output2);
			cout << arg2->gameid() << " " << arg2->connectionid() << " " << arg2->userid() << " " << arg2->auth() << endl;*/
			
			/*ConnectOutput* co = new ConnectOutput;
			co->set_token("Mytojeeeeen");
			co->set_userid("Me my userid");
			co->set_showbranding(true);
			co->set_gamefsredirectmap("map map map");
			stringstream output;
			co->SerializeToOstream(&output);
			
			//ConnectOutput* s = new ConnectOutput;*/
			
			TResponse* r = new TResponse;
			CURLRequest request = GetRequest(method);

			stringstream protobufStream;//Prepare data to send
			args->SerializeToOstream(&protobufStream);
			string protobufString = protobufStream.str();
			curl_easy_setopt(request.get_handle(), CURLOPT_POSTFIELDS, protobufString.c_str());
			curl_easy_setopt(request.get_handle(), CURLOPT_POSTFIELDSIZE, protobufString.length());
			
			std::stringstream response;//Prepare to recieve data
			std::stringstream headers;
			curl_easy_setopt(request.get_handle(), CURLOPT_WRITEFUNCTION, write_data);
			curl_easy_setopt(request.get_handle(), CURLOPT_WRITEDATA, &response);
			curl_easy_setopt(request.get_handle(), CURLOPT_WRITEHEADER, &headers);

			try
			{
				CURLcode res = curl_easy_perform(request.get_handle());	

				if (res!=0)
				{
					stringstream errstream;
					errstream << res;
					throw PlayerIOError(GeneralError, "A cURL error occured: " + errstream.str());
				}

				/*if (!r->ParseFromIstream(&response)) {
					throw PlayerIOError(GeneralError, "Failed to parse web response");
				}*/
				
				if (ReadHeader(response))
				{
					r->ParseFromIstream(&response);
				}
				else
				{
					throw GetError<TError>(response);
				}
			}
			catch (PlayerIOError* err)
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
		
		
		
		public: 
		template<class TError>
		static TError* GetError(stringstream &errorStream)// where TError : Exception
		{
			if (typeid(TError) != typeid(PlayerIOError))
			{
				if (typeid(TError) != typeid(PlayerIORegistrationError))
				{
					//ApplicationException regError;
					string error = typeid(TError).name();
					cout << "Unexpected error type: " + error << endl;
					exit(1);
					void* v;
					return (TError*)v;
				}
				RegistrationError regError;
				regError.ParseFromIstream(&errorStream);
				PlayerIORegistrationError* ret = new PlayerIORegistrationError((ErrorCode)regError.errorcode(), regError.message(), regError.usernameerror(), regError.passworderror(), regError.emailerror(), regError.captchaerror());
				return (TError*)ret;
			}
			Error err;
			err.ParseFromIstream(&errorStream);
			PlayerIOError* ret = new PlayerIOError((ErrorCode)err.errorcode(), err.message());
			return (TError*)ret;
		}
		
		public: void SetToken(string token);
		
	};
}
		
#endif
