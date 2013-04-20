#include <iostream>
#include "PlayerIO.hpp"
#include "Helpers/Converter.hpp"
using namespace std;

namespace EECloud
{

	int go()
	{
		PlayerIO playerIO;
		
		Client* client = PlayerIO::Connect("test-szf4hpjepkayftx3jm5wxa", "public", "testuser", "");
		DatabaseObject test = client->bigDB->LoadMyPlayerObject();
		vector <KeyValuePairSD> kvp;
		save_Properties<DatabaseObject*>(&test,kvp);
		map<string, DbObjValue> kvpMap= Converter::Convert(kvp);
		
		/*for (map<string, string>::iterator iter = kvpMap.begin(); iter != kvpMap.end(); ++iter) {
			cout << iter->first << " = " << iter->second << endl;
        }*/

		cout << " Done!" << endl;
		cout << "Token: " + client->Token() << endl;
	}
}


int main()
{
	EECloud::go();
}
