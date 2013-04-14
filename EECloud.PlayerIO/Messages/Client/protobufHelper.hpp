//These functions are used to convert a vector of KeyValuePair classes into a repeated sttribute of the socket protobuf class
//The Socket class template should be a pointer to a class generated from a .proto file

#ifndef PROTOBUFHELPER_H
#define PROTOBUFHELPER_H

namespace EECloud
{
	template <class Socket>
	void vector_RoomData(Socket socket,Vector<KeyValuePair>* plug)
	{
		socket.clear_RoomData();
		for (var i=0;i<plug.size();i++)
		{
			socket.add_RoomData(plug[0]);
		}
	}

	template <class Socket>
	void vector_JoinData(Socket socket,Vector<KeyValuePair>* plug)
	{
		socket.clear_JoinData();
		for (var i=0;i<plug.size();i++)
		{
			socket.add_JoinData(plug[0]);
		}
	}
	
	template <class Socket>
	void vector_ExtraData(Socket socket,Vector<KeyValuePair>* plug)
	{
		socket.clear_ExtraData();
		for (var i=0;i<plug.size();i++)
		{
			socket.add_ExtraData(plug[0]);
		}
	}
	
	template <class Socket>
	void vector_SearchCriteria(Socket socket,Vector<KeyValuePair>* plug)
	{
		socket.clear_SearchCriteria();
		for (var i=0;i<plug.size();i++)
		{
			socket.add_SearchCriteria(plug[0]);
		}
	}

}

#endif
