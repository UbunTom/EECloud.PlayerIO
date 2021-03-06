// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ConnectOutput.proto

#ifndef PROTOBUF_ConnectOutput_2eproto__INCLUDED
#define PROTOBUF_ConnectOutput_2eproto__INCLUDED

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
void  protobuf_AddDesc_ConnectOutput_2eproto();
void protobuf_AssignDesc_ConnectOutput_2eproto();
void protobuf_ShutdownFile_ConnectOutput_2eproto();

class ConnectOutput;

// ===================================================================

class ConnectOutput : public ::google::protobuf::Message {
 public:
  ConnectOutput();
  virtual ~ConnectOutput();
  
  ConnectOutput(const ConnectOutput& from);
  
  inline ConnectOutput& operator=(const ConnectOutput& from) {
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
  static const ConnectOutput& default_instance();
  
  void Swap(ConnectOutput* other);
  
  // implements Message ----------------------------------------------
  
  ConnectOutput* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ConnectOutput& from);
  void MergeFrom(const ConnectOutput& from);
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
  
  // optional string Token = 1;
  inline bool has_token() const;
  inline void clear_token();
  static const int kTokenFieldNumber = 1;
  inline const ::std::string& token() const;
  inline void set_token(const ::std::string& value);
  inline void set_token(const char* value);
  inline void set_token(const char* value, size_t size);
  inline ::std::string* mutable_token();
  inline ::std::string* release_token();
  
  // optional string UserId = 2;
  inline bool has_userid() const;
  inline void clear_userid();
  static const int kUserIdFieldNumber = 2;
  inline const ::std::string& userid() const;
  inline void set_userid(const ::std::string& value);
  inline void set_userid(const char* value);
  inline void set_userid(const char* value, size_t size);
  inline ::std::string* mutable_userid();
  inline ::std::string* release_userid();
  
  // optional bool ShowBranding = 3;
  inline bool has_showbranding() const;
  inline void clear_showbranding();
  static const int kShowBrandingFieldNumber = 3;
  inline bool showbranding() const;
  inline void set_showbranding(bool value);
  
  // optional string GameFSRedirectMap = 4;
  inline bool has_gamefsredirectmap() const;
  inline void clear_gamefsredirectmap();
  static const int kGameFSRedirectMapFieldNumber = 4;
  inline const ::std::string& gamefsredirectmap() const;
  inline void set_gamefsredirectmap(const ::std::string& value);
  inline void set_gamefsredirectmap(const char* value);
  inline void set_gamefsredirectmap(const char* value, size_t size);
  inline ::std::string* mutable_gamefsredirectmap();
  inline ::std::string* release_gamefsredirectmap();
  
  // @@protoc_insertion_point(class_scope:EECloud.ConnectOutput)
 private:
  inline void set_has_token();
  inline void clear_has_token();
  inline void set_has_userid();
  inline void clear_has_userid();
  inline void set_has_showbranding();
  inline void clear_has_showbranding();
  inline void set_has_gamefsredirectmap();
  inline void clear_has_gamefsredirectmap();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* token_;
  ::std::string* userid_;
  ::std::string* gamefsredirectmap_;
  bool showbranding_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_ConnectOutput_2eproto();
  friend void protobuf_AssignDesc_ConnectOutput_2eproto();
  friend void protobuf_ShutdownFile_ConnectOutput_2eproto();
  
  void InitAsDefaultInstance();
  static ConnectOutput* default_instance_;
};
// ===================================================================


// ===================================================================

// ConnectOutput

// optional string Token = 1;
inline bool ConnectOutput::has_token() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ConnectOutput::set_has_token() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ConnectOutput::clear_has_token() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ConnectOutput::clear_token() {
  if (token_ != &::google::protobuf::internal::kEmptyString) {
    token_->clear();
  }
  clear_has_token();
}
inline const ::std::string& ConnectOutput::token() const {
  return *token_;
}
inline void ConnectOutput::set_token(const ::std::string& value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  token_->assign(value);
}
inline void ConnectOutput::set_token(const char* value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  token_->assign(value);
}
inline void ConnectOutput::set_token(const char* value, size_t size) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  token_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ConnectOutput::mutable_token() {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  return token_;
}
inline ::std::string* ConnectOutput::release_token() {
  clear_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = token_;
    token_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string UserId = 2;
inline bool ConnectOutput::has_userid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ConnectOutput::set_has_userid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ConnectOutput::clear_has_userid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ConnectOutput::clear_userid() {
  if (userid_ != &::google::protobuf::internal::kEmptyString) {
    userid_->clear();
  }
  clear_has_userid();
}
inline const ::std::string& ConnectOutput::userid() const {
  return *userid_;
}
inline void ConnectOutput::set_userid(const ::std::string& value) {
  set_has_userid();
  if (userid_ == &::google::protobuf::internal::kEmptyString) {
    userid_ = new ::std::string;
  }
  userid_->assign(value);
}
inline void ConnectOutput::set_userid(const char* value) {
  set_has_userid();
  if (userid_ == &::google::protobuf::internal::kEmptyString) {
    userid_ = new ::std::string;
  }
  userid_->assign(value);
}
inline void ConnectOutput::set_userid(const char* value, size_t size) {
  set_has_userid();
  if (userid_ == &::google::protobuf::internal::kEmptyString) {
    userid_ = new ::std::string;
  }
  userid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ConnectOutput::mutable_userid() {
  set_has_userid();
  if (userid_ == &::google::protobuf::internal::kEmptyString) {
    userid_ = new ::std::string;
  }
  return userid_;
}
inline ::std::string* ConnectOutput::release_userid() {
  clear_has_userid();
  if (userid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = userid_;
    userid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional bool ShowBranding = 3;
inline bool ConnectOutput::has_showbranding() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ConnectOutput::set_has_showbranding() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ConnectOutput::clear_has_showbranding() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ConnectOutput::clear_showbranding() {
  showbranding_ = false;
  clear_has_showbranding();
}
inline bool ConnectOutput::showbranding() const {
  return showbranding_;
}
inline void ConnectOutput::set_showbranding(bool value) {
  set_has_showbranding();
  showbranding_ = value;
}

// optional string GameFSRedirectMap = 4;
inline bool ConnectOutput::has_gamefsredirectmap() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ConnectOutput::set_has_gamefsredirectmap() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ConnectOutput::clear_has_gamefsredirectmap() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ConnectOutput::clear_gamefsredirectmap() {
  if (gamefsredirectmap_ != &::google::protobuf::internal::kEmptyString) {
    gamefsredirectmap_->clear();
  }
  clear_has_gamefsredirectmap();
}
inline const ::std::string& ConnectOutput::gamefsredirectmap() const {
  return *gamefsredirectmap_;
}
inline void ConnectOutput::set_gamefsredirectmap(const ::std::string& value) {
  set_has_gamefsredirectmap();
  if (gamefsredirectmap_ == &::google::protobuf::internal::kEmptyString) {
    gamefsredirectmap_ = new ::std::string;
  }
  gamefsredirectmap_->assign(value);
}
inline void ConnectOutput::set_gamefsredirectmap(const char* value) {
  set_has_gamefsredirectmap();
  if (gamefsredirectmap_ == &::google::protobuf::internal::kEmptyString) {
    gamefsredirectmap_ = new ::std::string;
  }
  gamefsredirectmap_->assign(value);
}
inline void ConnectOutput::set_gamefsredirectmap(const char* value, size_t size) {
  set_has_gamefsredirectmap();
  if (gamefsredirectmap_ == &::google::protobuf::internal::kEmptyString) {
    gamefsredirectmap_ = new ::std::string;
  }
  gamefsredirectmap_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ConnectOutput::mutable_gamefsredirectmap() {
  set_has_gamefsredirectmap();
  if (gamefsredirectmap_ == &::google::protobuf::internal::kEmptyString) {
    gamefsredirectmap_ = new ::std::string;
  }
  return gamefsredirectmap_;
}
inline ::std::string* ConnectOutput::release_gamefsredirectmap() {
  clear_has_gamefsredirectmap();
  if (gamefsredirectmap_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = gamefsredirectmap_;
    gamefsredirectmap_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
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

#endif  // PROTOBUF_ConnectOutput_2eproto__INCLUDED
