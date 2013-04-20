#include "BigDB.hpp"

namespace EECloud
{
	BigDB::BigDB(HttpChannel* channel)
	{
		string PlayerObjectsTableName = "PlayerObjects";
		_channel = channel;
	}
	
	DatabaseObject BigDB::LoadMyPlayerObject()
	{
		LoadMyPlayerObjectOutput* loadMyPlayerObjectOutput = _channel->Request<NoArgsOrOutput*, LoadMyPlayerObjectOutput*, PlayerIOError*>(103, new NoArgsOrOutput());
		DatabaseObject output = loadMyPlayerObjectOutput->playerobject();
		output.set_table(PlayerObjectsTableName);
		delete loadMyPlayerObjectOutput;
		return output;
	}
}
