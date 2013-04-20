#include <time.h>
#include <sstream>
#include "PlayerIO.hpp"
#include "Cryptography/HMAC_SHA1.h"

namespace EECloud
{
	
	HttpChannel* const PlayerIO::Channel = new HttpChannel();
	vector<QuickConnect*> PlayerIO::_quickConnect;
	
	QuickConnect* PlayerIO::quickConnect()
	{
		if (_quickConnect.size()==0)_quickConnect.push_back(new QuickConnect(Channel));
		return _quickConnect[0];
	}
	
	PlayerIO::PlayerIO()
	{}

	Client* PlayerIO::Connect(string gameId, string connectionId, string userId, string auth)
	{
		ConnectArgs* connectArg = new ConnectArgs;
		connectArg->set_gameid(gameId);
		connectArg->set_connectionid(connectionId);
		connectArg->set_userid(userId);
		if (auth!="")connectArg->set_auth(auth);

		ConnectOutput* connectOutput = Channel->Request<ConnectArgs*, ConnectOutput*, PlayerIOError*>(10, connectArg);
		string token,userid;
		token=connectOutput->token();
		userid=connectOutput->userid();
		delete connectOutput;
		return new Client(Channel, token, userid);
	}
	
	string PlayerIO::CalcAuth(string userId, string sharedSecret)
	{
		BYTE digest[20]; //HMAC output

		int unixtimeint = (int)time(NULL);

		stringstream timeStream; //convert unixtimeint to a string
		timeStream << unixtimeint;
		string unixTime = timeStream.str();
    
		string text = unixTime + ":" + userId;

		CHMAC_SHA1 HMAC_SHA1;
		HMAC_SHA1.HMAC_SHA1((BYTE*)text.c_str(), text.size(), (BYTE*)sharedSecret.c_str(), sharedSecret.size(), digest) ;

		stringstream outhex;
		outhex << hex;
		for (int i=0;i<20;i++)
		{
			outhex << (int)digest[i];
		}
		string output = outhex.str();

		return output;
	}
}
