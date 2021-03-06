// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ServerEndpoint.proto

#ifndef PROTOBUF_ServerEndpoint_2eproto__INCLUDED
#define PROTOBUF_ServerEndpoint_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace EECloud {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ServerEndpoint_2eproto();
void protobuf_AssignDesc_ServerEndpoint_2eproto();
void protobuf_ShutdownFile_ServerEndpoint_2eproto();

class ServerEndpoint;

// ===================================================================

class ServerEndpoint : public ::google::protobuf::Message {
 public:
  ServerEndpoint();
  virtual ~ServerEndpoint();
  
  ServerEndpoint(const ServerEndpoint& from);
  
  inline ServerEndpoint& operator=(const ServerEndpoint& from) {
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
  static const ServerEndpoint& default_instance();
  
  void Swap(ServerEndpoint* other);
  
  // implements Message ----------------------------------------------
  
  ServerEndpoint* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ServerEndpoint& from);
  void MergeFrom(const ServerEndpoint& from);
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
  
  // optional string Address = 1;
  inline bool has_address() const;
  inline void clear_address();
  static const int kAddressFieldNumber = 1;
  inline const ::std::string& address() const;
  inline void set_address(const ::std::string& value);
  inline void set_address(const char* value);
  inline void set_address(const char* value, size_t size);
  inline ::std::string* mutable_address();
  inline ::std::string* release_address();
  
  // optional int32 Port = 2;
  inline bool has_port() const;
  inline void clear_port();
  static const int kPortFieldNumber = 2;
  inline ::google::protobuf::int32 port() const;
  inline void set_port(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:EECloud.ServerEndpoint)
 private:
  inline void set_has_address();
  inline void clear_has_address();
  inline void set_has_port();
  inline void clear_has_port();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* address_;
  ::google::protobuf::int32 port_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_ServerEndpoint_2eproto();
  friend void protobuf_AssignDesc_ServerEndpoint_2eproto();
  friend void protobuf_ShutdownFile_ServerEndpoint_2eproto();
  
  void InitAsDefaultInstance();
  static ServerEndpoint* default_instance_;
};
// ===================================================================


// ===================================================================

// ServerEndpoint

// optional string Address = 1;
inline bool ServerEndpoint::has_address() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ServerEndpoint::set_has_address() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ServerEndpoint::clear_has_address() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ServerEndpoint::clear_address() {
  if (address_ != &::google::protobuf::internal::kEmptyString) {
    address_->clear();
  }
  clear_has_address();
}
inline const ::std::string& ServerEndpoint::address() const {
  return *address_;
}
inline void ServerEndpoint::set_address(const ::std::string& value) {
  set_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    address_ = new ::std::string;
  }
  address_->assign(value);
}
inline void ServerEndpoint::set_address(const char* value) {
  set_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    address_ = new ::std::string;
  }
  address_->assign(value);
}
inline void ServerEndpoint::set_address(const char* value, size_t size) {
  set_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    address_ = new ::std::string;
  }
  address_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ServerEndpoint::mutable_address() {
  set_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    address_ = new ::std::string;
  }
  return address_;
}
inline ::std::string* ServerEndpoint::release_address() {
  clear_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = address_;
    address_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional int32 Port = 2;
inline bool ServerEndpoint::has_port() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ServerEndpoint::set_has_port() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ServerEndpoint::clear_has_port() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ServerEndpoint::clear_port() {
  port_ = 0;
  clear_has_port();
}
inline ::google::protobuf::int32 ServerEndpoint::port() const {
  return port_;
}
inline void ServerEndpoint::set_port(::google::protobuf::int32 value) {
  set_has_port();
  port_ = value;
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

#endif  // PROTOBUF_ServerEndpoint_2eproto__INCLUDED
