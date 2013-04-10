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
    
    class Object
    {
    	int _MessageType
    };
    
    class _Integer: public Object
    {int data;};
     class _UInteger: public Object
    {undigen int data;};
     class _Long: public Object
    {long data;};
     class _ULong: public Object
    {unsigned long data;};
     class _Double: public Object
    {double data;};
     class _Float: public Object
    {float data;};
     class _String: public Object
    {string data;};
     class _ByteArray: public Object
    {unsigned int size; unsigned char* data;};
     class _Boolean: public Object
    {bool data;};

}
