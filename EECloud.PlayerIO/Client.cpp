#include "Client.hpp"
#include "Connection.hpp"
#include "Helpers/Converter.hpp"
using namespace std;

namespace EECloud
{
	Client::Client(HttpChannel* channel, string token, string connectUserId)
	{
	    channel->SetToken(token);
	    _channel = channel;
	    _token = token;
	    _connectUserId = connectUserId;
	    bigDB = new BigDB(channel);
	}


	Connection* Client::CreateJoinRoom(string roomId, string serverType, map<string, string> roomData, map<string, string> joinData, bool visible)
	{
		CreateJoinRoomArgs* createJoinRoomArg = new CreateJoinRoomArgs;
		createJoinRoomArg->set_roomid(roomId);
		createJoinRoomArg->set_servertype(serverType);
		createJoinRoomArg->set_visible(visible);
		vector_RoomData<CreateJoinRoomArgs*>(createJoinRoomArg,Converter::Convert(roomData));
		vector_JoinData<CreateJoinRoomArgs*>(createJoinRoomArg,Converter::Convert(joinData));
		createJoinRoomArg->set_isdevroom(DevelopmentServer != NULL);

		CreateJoinRoomOutput* createJoinRoomOutput = _channel->Request<CreateJoinRoomArgs*, CreateJoinRoomOutput*, PlayerIOError*>(27, createJoinRoomArg);
		delete createJoinRoomArg;
		
		ServerEndpoint* serverEndpoint;
		if (DevelopmentServer == NULL) serverEndpoint = Converter::Convert(createJoinRoomOutput->endpoints(0));
		else serverEndpoint = DevelopmentServer;
		
		return new Connection(serverEndpoint, createJoinRoomOutput->joinkey());
	}

	Connection* Client::JoinRoom(string roomId, map<string, string> joinData)
	{
		JoinRoomArgs* joinRoomArg = new JoinRoomArgs;
		
		joinRoomArg->set_roomid(roomId);
		vector_JoinData<JoinRoomArgs*>(joinRoomArg,Converter::Convert(joinData));
		joinRoomArg->set_isdevroom(DevelopmentServer != NULL);
		
		JoinRoomOutput* joinRoomOutput = _channel->Request<JoinRoomArgs*, JoinRoomOutput*, PlayerIOError*>(24, joinRoomArg);
		delete joinRoomArg;
		
		ServerEndpoint* serverEndpoint;
		if (DevelopmentServer == NULL) serverEndpoint = Converter::Convert(joinRoomOutput->endpoints(0));
		else serverEndpoint = DevelopmentServer;
		
		return new Connection(serverEndpoint, joinRoomOutput->joinkey());
	}
	
	
	vector<RoomInfo> Client::ListRooms(string roomType, map<string, string> searchCriteria, int resultLimit, int resultOffset, bool onlyDevRooms)
	{
		ListRoomsArgs* listRoomsArg = new ListRoomsArgs;
		
		listRoomsArg->set_roomtype(roomType);
		vector_SearchCriteria<ListRoomsArgs*>(listRoomsArg,Converter::Convert(searchCriteria));
		listRoomsArg->set_resultlimit(resultLimit);
		listRoomsArg->set_resultoffset(resultOffset);
		listRoomsArg->set_onlydevrooms(onlyDevRooms);
		
		ListRoomsOutput* listRoomsOutput = _channel->Request<ListRoomsArgs*, ListRoomsOutput*, PlayerIOError*>(30, listRoomsArg);
		
		vector<RoomInfo> roomvector;
		save_RoomInfo<ListRoomsOutput*>(listRoomsOutput,roomvector);
		return roomvector;
	}
	
}
