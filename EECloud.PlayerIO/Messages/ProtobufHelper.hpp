//These functions are used to convert a vector of KeyValuePair classes into a repeated sttribute of the socket protobuf class
//The Socket class template should be a pointer to a class generated from a .proto file
//It also includes all the .proto compiled files.

#ifndef PROTOBUFHELPER_H
#define PROTOBUFHELPER_H

#include <vector>

#include "Client/ConnectArgs.pb.h"
#include "Client/ConnectOutput.pb.h"
#include "Client/CreateJoinRoomArgs.pb.h"
#include "Client/CreateJoinRoomOutput.pb.h"
#include "Client/JoinRoomArgs.pb.h"
#include "Client/JoinRoomOutput.pb.h"
#include "Client/ListRoomsArgs.pb.h"
#include "Client/ListRoomsOutput.pb.h"
#include "KeyValuePair.pb.h"
#include "NoArgsOrOutput.pb.h"
#include "ServerEndpoint.pb.h"
#include "Error/Error.pb.h"
#include "Error/RegistrationError.pb.h"

using namespace std;



namespace EECloud
{
	template <class Socket>
	void vector_RoomData(Socket socket,vector<KeyValuePair>* plug)
	{
		socket->clear_RoomData();
		for (int i=0;i<plug->size();i++)
		{
			socket->add_RoomData(plug[0]);
		}
	}
	
	template <class Socket>
	void vector_JoinData(Socket socket,vector<KeyValuePair>* plug)
	{
		socket->clear_JoinData();
		for (int i=0;i<plug->size();i++)
		{
			socket->add_JoinData(plug[0]);
		}
	}
	
	template <class Socket>
	void vector_ExtraData(Socket socket,vector<KeyValuePair>* plug)
	{
		socket->clear_ExtraData();
		for (int i=0;i<plug->size();i++)
		{
			socket->add_ExtraData(plug[0]);
		}
	}
	
	template <class Socket>
	void vector_SearchCriteria(Socket socket,vector<KeyValuePair>* plug)
	{
		socket->clear_SearchCriteria();
		for (int i=0;i<plug->size();i++)
		{
			socket->add_SearchCriteria(plug[0]);
		}
	}

}

#endif
