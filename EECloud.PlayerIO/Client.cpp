#include "Client.hpp"

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


	Connection* Client::CreateJoinRoom(string roomId, string serverType, bool visible = true, map<string, string> roomData = null, map<string, string> joinData = null)
	{
		CreateJoinRoomArgs createJoinRoomArg = new CreateJoinRoomArgs;
		createJoinRoomArg->set_RoomId(roomId);
		createJoinRoomArg->set_ServerType(serverType);
		createJoinRoomArg->set_Visible(visible);
		vector_RoomData<CreateJoinRoomArgs*>(createJoinRoomArg,Converter.Convert(roomData));
		vector_JoinData<CreateJoinRoomArgs*>(createJoinRoomArg,Converter.Convert(joinData));
		createJoinRoomArg->set_IsDevRoom(DevelopmentServer != NULL);

		CreateJoinRoomOutput* createJoinRoomOutput = _channel.Request<CreateJoinRoomArgs*, CreateJoinRoomOutput*, PlayerIOError*>(27, createJoinRoomArg);
		delete createJoinRoomArg;
		
		ServerEndpoint* serverEndpoint;
		if (DevelopmentServer == NULL) serverEndpoint = Converter.Convert(createJoinRoomOutput.Endpoints[0]);
		else serverEndpoint = DevelopmentServer;
		
		return new Connection(serverEndpoint, createJoinRoomOutput.JoinKey);
	}

	Connection* Client::JoinRoom(string roomId, map<string, string> joinData = null)
	{
		JoinRoomArgs* joinRoomArg = new JoinRoomArgs;
		
		joinRoomArg->set_RoomId(roomId);
		vector_JoinData<JoinRoomArgs*>(joinRoomArg,Converter.Convert(joinData));
		joinRoomArg->set_IsDevRoom(DevelopmentServer != NULL);
		
		JoinRoomOutput* joinRoomOutput = _channel.Request<JoinRoomArgs*, JoinRoomOutput*, PlayerIOError*>(24, joinRoomArg);
		delete joinRoomArg;
		
		ServerEndpoint* serverEndpoint;
		if (DevelopmentServer == NULL) serverEndpoint = Converter.Convert(createJoinRoomOutput.Endpoints[0]);
		else serverEndpoint = DevelopmentServer;
		
		return new Connection(serverEndpoint, joinRoomOutput.JoinKey);
	}
	
	
	public Vector<RoomInfo> ListRooms(string roomType, map<string, string> searchCriteria = null, int resultLimit = 0, int resultOffset = 0, bool onlyDevRooms = false)
	{
		ListRoomsArgs* listRoomsArg = new ListRoomsArgs
		
		listRoomsArg->set_RoomType(roomType);
		vector_JoinData<ListRoomsArgs*>(listRoomArg,Converter.Convert(searchCriteria));
		listRoomsArg->set_ResultLimit(resultLimit);
		listRoomsArg->set_ResultOffset(resultOffset);
		listRoomsArg->set_OnlyDevRooms(onlyDevRooms);
		
		var listRoomsOutput = _channel.Request<ListRoomsArgs, ListRoomsOutput, PlayerIOError>(30, listRoomsArg);
		return listRoomsOutput.RoomInfo ?? new RoomInfo[0];
	}
