//Fix includes
using System.Collections.Generic;
using ProtoBuf;
include <map>
include <string>
using namespace std;

namespace EECloud.PlayerIO
{
	//[ProtoContract]
	class RoomInfo
	{
		//[ProtoMember(1)]
		private: string Id; //{ get; private set; }
		public: string getId(){return Id;}
		
		//[ProtoMember(2)]
		private: string RoomType; //{ get; private set; }
		public: string getRoomType(){return RoomType;}
		
		//[ProtoMember(3)]
		private: int OnlineUsers; //{ get; private set; }
		public: int getOnlineUsers(){return OnlineUsers;}	
		
		/// <summary>
		/// The current room data for the room.
		/// </summary>
		//[ProtoMember(4)]
		private map<string, string> RoomData; //{ get; private set; }
		public: map<string, string> getRoomData(){return RoomData;}
		
		void RoomInfo(string id, string roomType, int onlineUsers, map<string, string> roomData)
		{
		    Id = id;
		    RoomType = roomType;
		    OnlineUsers = onlineUsers;
		    RoomData = roomData;//In C++ a map can't be null (roomData != null ? roomData : new map<string, string>());
		}
	}
}
