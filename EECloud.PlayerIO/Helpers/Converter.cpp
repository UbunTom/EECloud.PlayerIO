/*namespace EECloud
{
    class Converter
    {
        public: static Vector<KeyValuePair> Convert(map<string, string> dict)
        {
            Vector<KeyValuePair> keyValuePairs;
            if (dict != null)
            {
                for (iter = dict.begin(); iter != dict.end(); ++iter)
                {
                    KeyValuePair kvp;
                    kvp.Key=iter->first;
                    kvp.Value=iter->second;
                    keyValuePairs.push_back(kvp);
                }
                
            }
            return keyValuePairs;
        }
        
        public: static map<string, string> Convert(KeyValuePair[] keyValuePair)
        {
            var dic = new map<string, string>();
            if (keyValuePair != null)
            {
                foreach (var valuePair in keyValuePair)
                {
                    dic[valuePair.Key] = valuePair.Value;
                }
            }
            return dic;
        }

        static ServerEndpoint* Convert(ServerEndpoint &serverEndpoint)
        {
            return new ServerEndpoint(serverEndpoint->Address, serverEndpoint->Port);
        }
    }
}
*/
