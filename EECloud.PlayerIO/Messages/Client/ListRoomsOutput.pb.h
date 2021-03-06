// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ListRoomsOutput.proto

#ifndef PROTOBUF_ListRoomsOutput_2eproto__INCLUDED
#define PROTOBUF_ListRoomsOutput_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "../../Helpers/RoomInfo.pb.h"
// @@protoc_insertion_point(includes)

namespace EECloud {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ListRoomsOutput_2eproto();
void protobuf_AssignDesc_ListRoomsOutput_2eproto();
void protobuf_ShutdownFile_ListRoomsOutput_2eproto();

class ListRoomsOutput;

// ===================================================================

class ListRoomsOutput : public ::google::protobuf::Message {
 public:
  ListRoomsOutput();
  virtual ~ListRoomsOutput();
  
  ListRoomsOutput(const ListRoomsOutput& from);
  
  inline ListRoomsOutput& operator=(const ListRoomsOutput& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ListRoomsOutput& default_instance();
  
  void Swap(ListRoomsOutput* other);
  
  // implements Message ----------------------------------------------
  
  ListRoomsOutput* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ListRoomsOutput& from);
  void MergeFrom(const ListRoomsOutput& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // repeated .EECloud.RoomInfo RoomInfo = 1;
  inline int roominfo_size() const;
  inline void clear_roominfo();
  static const int kRoomInfoFieldNumber = 1;
  inline const ::EECloud::RoomInfo& roominfo(int index) const;
  inline ::EECloud::RoomInfo* mutable_roominfo(int index);
  inline ::EECloud::RoomInfo* add_roominfo();
  inline const ::google::protobuf::RepeatedPtrField< ::EECloud::RoomInfo >&
      roominfo() const;
  inline ::google::protobuf::RepeatedPtrField< ::EECloud::RoomInfo >*
      mutable_roominfo();
  
  // @@protoc_insertion_point(class_scope:EECloud.ListRoomsOutput)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::EECloud::RoomInfo > roominfo_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_ListRoomsOutput_2eproto();
  friend void protobuf_AssignDesc_ListRoomsOutput_2eproto();
  friend void protobuf_ShutdownFile_ListRoomsOutput_2eproto();
  
  void InitAsDefaultInstance();
  static ListRoomsOutput* default_instance_;
};
// ===================================================================


// ===================================================================

// ListRoomsOutput

// repeated .EECloud.RoomInfo RoomInfo = 1;
inline int ListRoomsOutput::roominfo_size() const {
  return roominfo_.size();
}
inline void ListRoomsOutput::clear_roominfo() {
  roominfo_.Clear();
}
inline const ::EECloud::RoomInfo& ListRoomsOutput::roominfo(int index) const {
  return roominfo_.Get(index);
}
inline ::EECloud::RoomInfo* ListRoomsOutput::mutable_roominfo(int index) {
  return roominfo_.Mutable(index);
}
inline ::EECloud::RoomInfo* ListRoomsOutput::add_roominfo() {
  return roominfo_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::EECloud::RoomInfo >&
ListRoomsOutput::roominfo() const {
  return roominfo_;
}
inline ::google::protobuf::RepeatedPtrField< ::EECloud::RoomInfo >*
ListRoomsOutput::mutable_roominfo() {
  return &roominfo_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace EECloud

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ListRoomsOutput_2eproto__INCLUDED
