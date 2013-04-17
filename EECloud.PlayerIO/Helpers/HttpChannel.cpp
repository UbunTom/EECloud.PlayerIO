#include "HttpChannel.hpp"

namespace EECloud.PlayerIO
{

		
	CurlRequest::CURLRequest()
	{
		handle = curl_easy_init();
	}	
		
	CurlRequest::~CURLRequest()
	{
		curl_slist_free_al(headerslist);
		curl_easy_cleanup(handle);
	}

	}
	
	size_t write_data(void *ptr, size_t size, size_t nmemb, void *stream)
	{
		std::string buf = std::string(static_cast<char *>(ptr), size * nmemb);
		std::stringstream *response = static_cast<std::stringstream *>(stream);
		response->write(buf.c_str(), (std::streamsize)buf.size());
		return size * nmemb;
	}
	
	HttpChannel::HttpChannel()
	{
		EndpointUri = "http://api.playerio.com/api";
	}

        CURLRequest HttpChannel::GetRequest(int method)
        {
        	CURLRequest request;
		
		stringstream methodStream; //convert method to a string
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
			for (auto iter = _headers.begin(); iter != _headers.end(); ++iter)
			{	
				request.header_list = curl_slist_append(request.headerlist, iter->first + ": " + iter->second);  
			}
			//}
		}
		
		curl_easy_setopt(request.handle(), CURLOPT_HTTPHEADER, request.headerlist);

		
		return request;
        }

	bool HttpChannel::ReadHeader(stream responseStream)
	{
		char c,c1;
		responseStream.read(&c,1)
		if (c == 1)
		{
			responseStream.read(&c,1);
			responseStream.read(&c1,1)
			unsigned short num = (unsigned short)(c << 8 | c1);
			char* numArray = new char[num];
			responseStream.Read(numArray, 0, num);
			_headers["playertoken"] = Encoding.UTF8.GetString(numArray, 0, numArray.Length);
		}
		responseStream.read(&c,1);
		return c == 1;
	}

	void HttpChannel::SetToken(string token)
	{
		var strs = new Dictionary<string, string>();
		strs["playertoken"] = token;
		_headers = strs;
	}
    }
}
