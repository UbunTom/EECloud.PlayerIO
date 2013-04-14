#include "BigDB.hpp"

namespace EECloud
{
	BigDB::BigDB(HttpChannel* channel)
	{
		PlayerObjectsTableName = "PlayerObjects";
		_channel = channel;
	}
	
	DatabaseObject* BigDB::LoadMyPlayerObject()
	{
		LoadMyPlayerObjectOutput loadMyPlayerObjectOutput = _channel.Request<NoArgsOrOutput*, LoadMyPlayerObjectOutput*, PlayerIOError>(103, new NoArgsOrOutput());
		loadMyPlayerObjectOutput.PlayerObject.Table = PlayerObjectsTableName;
		return loadMyPlayerObjectOutput.PlayerObject;
	}
}
