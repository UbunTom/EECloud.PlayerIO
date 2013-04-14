namespace EECloud
{
	Client::Client(HttpChannel* channel, string token, string connectUserId)
	{
	    channel.SetToken(token);
	    _channel = channel;
	    _token = token;
	    _connectUserId = connectUserId;
	    BigDB = new BigDB(channel);
	}


	Connection* Client::CreateJoinRoom(string roomId, string serverType, bool visible = true, Dictionary<string, string> roomData = null, Dictionary<string, string> joinData = null)
	{
		var createJoinRoomArg = new CreateJoinRoomArgs;
		createJoinRoomArg.set_RoomId(roomId);
		createJoinRoomArg.set_ServerType(serverType);
		createJoinRoomArg.set_Visible(visible);
		createJoinRoomArg.set_RoomData(Converter.Convert(roomData));
		createJoinRoomArg.set_JoinData(Converter.Convert(joinData));
		createJoinRoomArg.set_IsDevRoom(DevelopmentServer != null);

		var createJoinRoomOutput = _channel.Request<CreateJoinRoomArgs*, CreateJoinRoomOutput*, PlayerIOError*>(27, createJoinRoomArg);
		
		auto serverEndpoint;
		if (DevelopmentServer == NULL) serverEndpoint = Converter.Convert(createJoinRoomOutput.Endpoints[0]);
		else serverEndpoint = Converter.Convert(createJoinRoomOutput.Endpoints[0]);
		return new Connection(serverEndpoint, createJoinRoomOutput.JoinKey);
	}

	Connection* Client::JoinRoom(string roomId, Dictionary<string, string> joinData = null)
	{
		var joinRoomArg = new JoinRoomArgs
		{
			RoomId = roomId,
			JoinData = Converter.Convert(joinData),
			IsDevRoom = DevelopmentServer != null
		};
		var joinRoomOutput = _channel.Request<JoinRoomArgs, JoinRoomOutput, PlayerIOError>(24, joinRoomArg);
		var serverEndpoint = DevelopmentServer ?? Converter.Convert(joinRoomOutput.Endpoints[0]);
		return new Connection(serverEndpoint, joinRoomOutput.JoinKey);
	}
