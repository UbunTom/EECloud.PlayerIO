#include "HttpChannel.hpp"

namespace EECloud
{

		
	CURLRequest::CURLRequest()
	{
		handle = curl_easy_init();
	}	
		
	CURLRequest::~CURLRequest()
	{
		curl_slist_free_all(headerlist);
		curl_easy_cleanup(handle);
	}
	
	size_t write_data(void *ptr, size_t size, size_t nmemb, void *stream)
	{
		std::string buf = std::string(static_cast<char *>(ptr), size * nmemb);
		std::stringstream *response = static_cast<std::stringstream *>(stream);
		response->write(buf.c_str(), (std::streamsize)buf.size());
		return size * nmemb;
	}
	
	HttpChannel::HttpChannel():EndpointUri("http://api.playerio.com/api")
	{
	}

	CURLRequest HttpChannel::GetRequest(int method)
	{
		CURLRequest request;
	
		stringstream methodStream; //convert method to a string
		methodStream << method;
		string methodString = methodStream.str();
			
		string url = EndpointUri + "/" + methodString;
		curl_easy_setopt(request.get_handle(), CURLOPT_URL, url.c_str());
		curl_easy_setopt(request.get_handle(), CURLOPT_TIMEOUT, 15L);
		curl_easy_setopt(request.get_handle(), CURLOPT_POST, 1L);
			
		request.headerlist=NULL;
		
		if (_headers.size() != 0)
		{
			/*lock (_headers) Is this using threads?
			{*/
			for (auto iter = _headers.begin(); iter != _headers.end(); ++iter)
			{
				string headerentry = iter->first + ": " + iter->second;
				request.headerlist = curl_slist_append(request.headerlist, headerentry.c_str());  
			}
			//}
		}
		
		curl_easy_setopt(request.get_handle(), CURLOPT_HTTPHEADER, request.headerlist);

		
	return request;
	}

	bool HttpChannel::ReadHeader(stringstream& responseStream)
	{
		char c,c1;
		responseStream.read(&c,1);
		if (c == 1)
		{
			responseStream.read(&c,1);
			responseStream.read(&c1,1);
			unsigned short num = (unsigned short)(c << 8 | c1);
			char* numArray = new char[num];
			responseStream.read(numArray, num);
			string token = numArray;
			_headers["playertoken"] = token;//Encoding.UTF8.GetString(numArray, 0, numArray.Length);
		}
		responseStream.read(&c,1);
		return c == 1;
	}

	void HttpChannel::SetToken(string token)
	{
		map<string, string> strs;
		strs["playertoken"] = token;
		_headers = strs;
	}
}
