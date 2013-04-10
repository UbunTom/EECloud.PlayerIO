using EECloud.PlayerIO.Messages;
#include <time.h>
#include <sstream>
#include "PlayerIO.h"
#include "Cryptography/HMAC_SHA1.h"

namespace EECloud.PlayerIO
{
	QuickConnect* PlayerIO::QuickConnect()
	{
		if (_quickConnect.size==0)_quickconnect.push_back(new QuickConnect(Channel))	
		return _quickConnect[0];
	}

	Client* PlayerIO::Connect(string gameId, string connectionId, string userId, string auth)
	{
		ConnectArgs* connectArg = new ConnectArgs;
		connectArg.GameId=gameId;
		connectArg.ConnectionId=connectionId;
		connectArg.userId=userId;
		connectArg.Auth=auth;

		ConnectOutput connectOutput = Channel.Request<ConnectArgs, ConnectOutput, PlayerIOError>(10, connectArg);
		return new Client(Channel, connectOutput.Token, connectOutput.UserId);
	}
	
	string PlayerIO::CalcAuth(string userId, string sharedSecret)
	{
		BYTE digest[20]; //HMAC output

		int unixtimeint = (int)time(NULL);

		stringstream timeStream; //convert unixtimeint to a string
		timeStream << unixtimeint;
		string unixtime = timeStream.str();
    
		string text = unixTime + ":" + userId;

		CHMAC_SHA1 HMAC_SHA1;
		HMAC_SHA1.HMAC_SHA1((BYTE*)text.str(), text.size(), (BYTE*)sharedSecret.str(), sharedSecret.size(), digest) ;

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
