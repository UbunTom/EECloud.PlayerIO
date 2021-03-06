// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ConnectArgs.proto

#ifndef PROTOBUF_ConnectArgs_2eproto__INCLUDED
#define PROTOBUF_ConnectArgs_2eproto__INCLUDED

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
void  protobuf_AddDesc_ConnectArgs_2eproto();
void protobuf_AssignDesc_ConnectArgs_2eproto();
void protobuf_ShutdownFile_ConnectArgs_2eproto();

class ConnectArgs;

// ===================================================================

class ConnectArgs : public ::google::protobuf::Message {
 public:
  ConnectArgs();
  virtual ~ConnectArgs();
  
  ConnectArgs(const ConnectArgs& from);
  
  inline ConnectArgs& operator=(const ConnectArgs& from) {
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
  static const ConnectArgs& default_instance();
  
  void Swap(ConnectArgs* other);
  
  // implements Message ----------------------------------------------
  
  ConnectArgs* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ConnectArgs& from);
  void MergeFrom(const ConnectArgs& from);
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
  
  // optional string GameId = 1;
  inline bool has_gameid() const;
  inline void clear_gameid();
  static const int kGameIdFieldNumber = 1;
  inline const ::std::string& gameid() const;
  inline void set_gameid(const ::std::string& value);
  inline void set_gameid(const char* value);
  inline void set_gameid(const char* value, size_t size);
  inline ::std::string* mutable_gameid();
  inline ::std::string* release_gameid();
  
  // optional string ConnectionId = 2;
  inline bool has_connectionid() const;
  inline void clear_connectionid();
  static const int kConnectionIdFieldNumber = 2;
  inline const ::std::string& connectionid() const;
  inline void set_connectionid(const ::std::string& value);
  inline void set_connectionid(const char* value);
  inline void set_connectionid(const char* value, size_t size);
  inline ::std::string* mutable_connectionid();
  inline ::std::string* release_connectionid();
  
  // optional string UserId = 3;
  inline bool has_userid() const;
  inline void clear_userid();
  static const int kUserIdFieldNumber = 3;
  inline const ::std::string& userid() const;
  inline void set_userid(const ::std::string& value);
  inline void set_userid(const char* value);
  inline void set_userid(const char* value, size_t size);
  inline ::std::string* mutable_userid();
  inline ::std::string* release_userid();
  
  // optional string Auth = 4;
  inline bool has_auth() const;
  inline void clear_auth();
  static const int kAuthFieldNumber = 4;
  inline const ::std::string& auth() const;
  inline void set_auth(const ::std::string& value);
  inline void set_auth(const char* value);
  inline void set_auth(const char* value, size_t size);
  inline ::std::string* mutable_auth();
  inline ::std::string* release_auth();
  
  // @@protoc_insertion_point(class_scope:EECloud.ConnectArgs)
 private:
  inline void set_has_gameid();
  inline void clear_has_gameid();
  inline void set_has_connectionid();
  inline void clear_has_connectionid();
  inline void set_has_userid();
  inline void clear_has_userid();
  inline void set_has_auth();
  inline void clear_has_auth();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* gameid_;
  ::std::string* connectionid_;
  ::std::string* userid_;
  ::std::string* auth_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_ConnectArgs_2eproto();
  friend void protobuf_AssignDesc_ConnectArgs_2eproto();
  friend void protobuf_ShutdownFile_ConnectArgs_2eproto();
  
  void InitAsDefaultInstance();
  static ConnectArgs* default_instance_;
};
// ===================================================================


// ===================================================================

// ConnectArgs

// optional string GameId = 1;
inline bool ConnectArgs::has_gameid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ConnectArgs::set_has_gameid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ConnectArgs::clear_has_gameid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ConnectArgs::clear_gameid() {
  if (gameid_ != &::google::protobuf::internal::kEmptyString) {
    gameid_->clear();
  }
  clear_has_gameid();
}
inline const ::std::string& ConnectArgs::gameid() const {
  return *gameid_;
}
inline void ConnectArgs::set_gameid(const ::std::string& value) {
  set_has_gameid();
  if (gameid_ == &::google::protobuf::internal::kEmptyString) {
    gameid_ = new ::std::string;
  }
  gameid_->assign(value);
}
inline void ConnectArgs::set_gameid(const char* value) {
  set_has_gameid();
  if (gameid_ == &::google::protobuf::internal::kEmptyString) {
    gameid_ = new ::std::string;
  }
  gameid_->assign(value);
}
inline void ConnectArgs::set_gameid(const char* value, size_t size) {
  set_has_gameid();
  if (gameid_ == &::google::protobuf::internal::kEmptyString) {
    gameid_ = new ::std::string;
  }
  gameid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ConnectArgs::mutable_gameid() {
  set_has_gameid();
  if (gameid_ == &::google::protobuf::internal::kEmptyString) {
    gameid_ = new ::std::string;
  }
  return gameid_;
}
inline ::std::string* ConnectArgs::release_gameid() {
  clear_has_gameid();
  if (gameid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = gameid_;
    gameid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string ConnectionId = 2;
inline bool ConnectArgs::has_connectionid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ConnectArgs::set_has_connectionid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ConnectArgs::clear_has_connectionid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ConnectArgs::clear_connectionid() {
  if (connectionid_ != &::google::protobuf::internal::kEmptyString) {
    connectionid_->clear();
  }
  clear_has_connectionid();
}
inline const ::std::string& ConnectArgs::connectionid() const {
  return *connectionid_;
}
inline void ConnectArgs::set_connectionid(const ::std::string& value) {
  set_has_connectionid();
  if (connectionid_ == &::google::protobuf::internal::kEmptyString) {
    connectionid_ = new ::std::string;
  }
  connectionid_->assign(value);
}
inline void ConnectArgs::set_connectionid(const char* value) {
  set_has_connectionid();
  if (connectionid_ == &::google::protobuf::internal::kEmptyString) {
    connectionid_ = new ::std::string;
  }
  connectionid_->assign(value);
}
inline void ConnectArgs::set_connectionid(const char* value, size_t size) {
  set_has_connectionid();
  if (connectionid_ == &::google::protobuf::internal::kEmptyString) {
    connectionid_ = new ::std::string;
  }
  connectionid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ConnectArgs::mutable_connectionid() {
  set_has_connectionid();
  if (connectionid_ == &::google::protobuf::internal::kEmptyString) {
    connectionid_ = new ::std::string;
  }
  return connectionid_;
}
inline ::std::string* ConnectArgs::release_connectionid() {
  clear_has_connectionid();
  if (connectionid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = connectionid_;
    connectionid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string UserId = 3;
inline bool ConnectArgs::has_userid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ConnectArgs::set_has_userid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ConnectArgs::clear_has_userid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ConnectArgs::clear_userid() {
  if (userid_ != &::google::protobuf::internal::kEmptyString) {
    userid_->clear();
  }
  clear_has_userid();
}
inline const ::std::string& ConnectArgs::userid() const {
  return *userid_;
}
inline void ConnectArgs::set_userid(const ::std::string& value) {
  set_has_userid();
  if (userid_ == &::google::protobuf::internal::kEmptyString) {
    userid_ = new ::std::string;
  }
  userid_->assign(value);
}
inline void ConnectArgs::set_userid(const char* value) {
  set_has_userid();
  if (userid_ == &::google::protobuf::internal::kEmptyString) {
    userid_ = new ::std::string;
  }
  userid_->assign(value);
}
inline void ConnectArgs::set_userid(const char* value, size_t size) {
  set_has_userid();
  if (userid_ == &::google::protobuf::internal::kEmptyString) {
    userid_ = new ::std::string;
  }
  userid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ConnectArgs::mutable_userid() {
  set_has_userid();
  if (userid_ == &::google::protobuf::internal::kEmptyString) {
    userid_ = new ::std::string;
  }
  return userid_;
}
inline ::std::string* ConnectArgs::release_userid() {
  clear_has_userid();
  if (userid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = userid_;
    userid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string Auth = 4;
inline bool ConnectArgs::has_auth() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ConnectArgs::set_has_auth() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ConnectArgs::clear_has_auth() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ConnectArgs::clear_auth() {
  if (auth_ != &::google::protobuf::internal::kEmptyString) {
    auth_->clear();
  }
  clear_has_auth();
}
inline const ::std::string& ConnectArgs::auth() const {
  return *auth_;
}
inline void ConnectArgs::set_auth(const ::std::string& value) {
  set_has_auth();
  if (auth_ == &::google::protobuf::internal::kEmptyString) {
    auth_ = new ::std::string;
  }
  auth_->assign(value);
}
inline void ConnectArgs::set_auth(const char* value) {
  set_has_auth();
  if (auth_ == &::google::protobuf::internal::kEmptyString) {
    auth_ = new ::std::string;
  }
  auth_->assign(value);
}
inline void ConnectArgs::set_auth(const char* value, size_t size) {
  set_has_auth();
  if (auth_ == &::google::protobuf::internal::kEmptyString) {
    auth_ = new ::std::string;
  }
  auth_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ConnectArgs::mutable_auth() {
  set_has_auth();
  if (auth_ == &::google::protobuf::internal::kEmptyString) {
    auth_ = new ::std::string;
  }
  return auth_;
}
inline ::std::string* ConnectArgs::release_auth() {
  clear_has_auth();
  if (auth_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = auth_;
    auth_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
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

#endif  // PROTOBUF_ConnectArgs_2eproto__INCLUDED
