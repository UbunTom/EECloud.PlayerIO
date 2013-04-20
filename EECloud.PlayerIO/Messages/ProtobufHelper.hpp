//These functions are used to convert a vector of KeyValuePair classes into a repeated sttribute of the proto protobuf class
//The Proto class template should be a pointer to a class generated from a .proto file
//It also includes all the .proto compiled files.

#ifndef PROTOBUFHELPER_H
#define PROTOBUFHELPER_H

#include <vector>

#include "Client/ConnectArgs.pb.h"
#include "Client/ConnectOutput.pb.h"
#include "Client/SimpleConnectArgs.pb.h"
#include "Client/CreateJoinRoomArgs.pb.h"
#include "Client/CreateJoinRoomOutput.pb.h"
#include "Client/SimpleRecoverPasswordArgs.pb.h"
#include "Client/SimpleRegisterArgs.pb.h"
#include "Client/JoinRoomArgs.pb.h"
#include "Client/JoinRoomOutput.pb.h"
#include "Client/ListRoomsArgs.pb.h"
#include "Client/ListRoomsOutput.pb.h"
#include "KeyValuePair.pb.h"
#include "NoArgsOrOutput.pb.h"
#include "ServerEndpoint.pb.h"
#include "Error/Error.pb.h"
#include "BigDB/LoadMyPlayerObjectOutput.pb.h"
#include "Error/RegistrationError.pb.h"
#include "../Helpers/DatabaseObject.pb.h"

using namespace std;



namespace EECloud
{
	template <class Proto>
	void vector_RoomData(Proto proto,vector<KeyValuePair> plug)
	{
		proto->clear_roomdata();
		KeyValuePair* added;
		for (int i=0;i<plug.size();i++)
		{
			added=proto->add_roomdata();
			added->set_key(plug[0].key());
			added->set_value(plug[0].value());
		}
	}
	
	template <class Proto>
	void vector_JoinData(Proto proto,vector<KeyValuePair> plug)
	{
		proto->clear_joindata();
		KeyValuePair* added;
		for (int i=0;i<plug.size();i++)
		{
			added=proto->add_joindata();
			added->set_key(plug[0].key());
			added->set_value(plug[0].value());
		}
	}
	
	template <class Proto>
	void vector_ExtraData(Proto proto,vector<KeyValuePair> plug)
	{
		proto->clear_extradata();
		KeyValuePair* added;
		for (int i=0;i<plug.size();i++)
		{
			added=proto->add_extradata();
			added->set_key(plug[0].key());
			added->set_value(plug[0].value());
		}
	}
	
	template <class Proto>
	void vector_SearchCriteria(Proto proto,vector<KeyValuePair> plug)
	{
		proto->clear_searchcriteria();
		KeyValuePair* added;
		for (int i=0;i<plug.size();i++)
		{
			added=proto->add_searchcriteria();
			added->set_key(plug[0].key());
			added->set_value(plug[0].value());
		}
	}
	
	//Convert a repeated RoomInfo field of a protobuf class to a vector
	template <class Proto>
	void save_RoomInfo(Proto proto,vector<RoomInfo>& info)
	{
		int n = proto->roominfo_size();
		info.reserve(n);
		for (int i=0;i<n;i++)
		{
			info.push_back(proto->roominfo(i));
		}
	}
	
	template <class Proto>
	void save_Properties(Proto proto,vector<KeyValuePairSD>& info)
	{
		int n = proto->properties_size();
		info.reserve(n);
		for (int i=0;i<n;i++)
		{
			info.push_back(proto->properties(i));
		}
	}

}

#endif
