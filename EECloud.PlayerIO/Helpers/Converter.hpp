#include <vector>
using namespace std;

class KeyValuePair;

namespace EECloud
{
    class Converter
    {
        public: static vector<KeyValuePair> Convert(map<string, string> dict)
        {
            vector<KeyValuePair> keyValuePairs;
            
			for (auto iter = dict.begin(); iter != dict.end(); ++iter)
			{
				KeyValuePair kvp;
				kvp.set_key(iter->first);
				kvp.set_value(iter->second);
				keyValuePairs.push_back(kvp);
			}
                

            return keyValuePairs;
        }
        
        public: static map<string, string> Convert(vector<KeyValuePair> kvp)
        {
            map<string, string> dic;

			int n=kvp.size();
			for (int i=0;i<n;i++)
			{
				dic[kvp[i].key()] = kvp[i].value();
			}

            return dic;
        }
        
        public: static map<string, DbObjValue> Convert(vector<KeyValuePairSD> kvp)
        {
            map<string, DbObjValue> dic;

			int n=kvp.size();
			for (int i=0;i<n;i++)
			{
				dic[kvp[i].key()] = kvp[i].value();
			}

            return dic;
        }

        static ServerEndpoint* Convert(const ServerEndpoint& serverEndpoint)
        {
            return new ServerEndpoint(serverEndpoint);
        }
    };
}
