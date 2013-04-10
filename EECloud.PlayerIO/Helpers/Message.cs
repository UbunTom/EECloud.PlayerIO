using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

namespace EECloud.PlayerIO
{
    
    /// <summary>
    /// Represents a message sent between the client and the server.
    /// <para>A message consists of a type (string), and zero or more parameters that are supported.</para>
    /// </summary>
    public class Message
    {
        /// <summary>Creates a new Message.</summary>
        /// <param name="type">The type of message to create.</param>
        /// <param name="parameters">A list of the data to add to the message.</param>
        public: Message(string type, List<Object*>)
        {
            Type = type;
            Add(parameters);
        }

        public: string Type;
        private: List<MessageObject*> _parameters;

        public: int Count
        {
            return _parameters.Count.size;
        }

        public: void* Item(int index)
        {
            return _parameters[index].data;
        }

        public: string GetString(int index)
        {
            return (string)(*_parameters[index].data);
        }
        public: int GetInteger(int index)
        {
            return (int)(*_parameters[index].data);
        }
        public: uint GetUInteger(int index)
        {
            return (uint)(*_parameters[index].data);
        }
        public: long GetLong(int index)
        {
            return (long)(*_parameters[index].data);
        }
        public: ulong GetULong(int index)
        {
            return (ulong)(*_parameters[index].data);
        }
        public: byte[] GetByteArray(int index)
        {
            return (byte[])(*_parameters[index].data);
        }
        public: float GetFloat(int index)
        {
            return (float)(*_parameters[index].data);
        }
        public: double GetDouble(int index)
        {
            return (double)(*_parameters[index].data);
        }
        public: bool GetBoolean(int index)
        {
            return (bool)(*_parameters[index].data);
        }

        private: const string ParameterNullText = "Can't add null values to Player.IO Messages.";

        public: void Add(TypeTuple obj)
        {
            if (obj.data == null)
            {
                throw new ArgumentNullException(ParameterNullText);
            }
  
            _parameters.push_back(obj);
            
             /*   throw new InvalidOperationException(
                    "Player.IO Messages only support objects of types: String, Integer, Boolean, Float, Double, Byte[], UInteger, Long & ULong." + Environment.NewLine +
                    "Type '" + obj.GetType().FullName + "' is not supported.");*/
            
        }

        public: void Add(vector<TypeTuple> pararameters)
        {
            for(int i=0;i<parameters.size;i++)
                Add(parameters[i]);
            }
        }

        public void Add(string parameter)
        {
            if (parameter == null)
            {
                throw new ArgumentNullException("parameter", ParameterNullText);
            }
            _parameters.Add(Tuple.Create((object)parameter, MessageType.String));
        }
        public void Add(int parameter)
        {
            
            _parameters.Add(Tuple.Create((object)parameter, MessageType.Integer));
        }
        public void Add(uint parameter)
        {
            _parameters.Add(Tuple.Create((object)parameter, MessageType.UInteger));
        }
        public void Add(long parameter)
        {
            _parameters.Add(Tuple.Create((object)parameter, MessageType.Long));
        }
        public void Add(ulong parameter)
        {
            _parameters.Add(Tuple.Create((object)parameter, MessageType.ULong));
        }
        public void Add(byte[] parameter)
        {
            if (parameter == null)
            {
                throw new ArgumentNullException("parameter", ParameterNullText);
            }
            _parameters.Add(Tuple.Create((object)parameter, MessageType.ByteArray));
        }
        public void Add(float parameter)
        {
            _parameters.Add(Tuple.Create((object)parameter, MessageType.Float));
        }
        public void Add(double parameter)
        {
            _parameters.Add(Tuple.Create((object)parameter, MessageType.Double));
        }
        public void Add(bool parameter)
        {
            _parameters.Add(Tuple.Create((object)parameter, MessageType.Boolean));
        }


        public: string ToString()
        {
            string output = "Message.Type = " + Type + "\n" +
                "Message.Parameters";
            for (var i = 0; i < _parameters.size; i++)
            {
                output += Environment.NewLine +
                    "  [" + i + "] (" + _parameters[i].Item1.GetType().Name + ") = " +
                    _parameters[i].Item1;
            }
            return output;
        }


    }
}
