#include <string>

namespace EECloud.PlayerIO
{
    enum MessageType
    {
        Integer = 0,
		UInteger = 1,
		Long = 2,
		ULong = 3,
		Double = 4,
		Float = 5,
		String = 6,
		ByteArray = 7,
		Boolean = 8
    }
    
    class MessageObject
    {
    	int _MessageType
    };
    
    class _Integer: public MessageObject
    {int data;};
     class _UInteger: public MessageObject
    {undigen int data;};
     class _Long: public MessageObject
    {long data;};
     class _ULong: public MessageObject
    {unsigned long data;};
     class _Double: public MessageObject
    {double data;};
     class _Float: public MessageObject
    {float data;};
     class _String: public MessageObject
    {string data;};
     class _ByteArray: public MessageObject
    {unsigned int size; unsigned char* data;};
     class _Boolean: public MessageObject
    {bool data;};

}
