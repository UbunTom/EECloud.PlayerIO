#include <string>
#include "Helpers/HttpChannel.hpp"
#include "Messages/ProtobufHelper.hpp"
using namespace std;

#ifndef BIGDB_H
#define BIGDB_H

namespace EECloud
{
    class BigDB
    {
        private: const string PlayerObjectsTableName;

        private: HttpChannel* _channel; //Readonly

        public: BigDB(HttpChannel* channel);//Constructor

        public: DatabaseObject LoadMyPlayerObject();
    };
}

#endif
