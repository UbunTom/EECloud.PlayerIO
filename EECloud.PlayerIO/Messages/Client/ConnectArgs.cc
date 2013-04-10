// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "in.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace EECloud {
namespace PlayerIO {
namespace Messages {

namespace {

const ::google::protobuf::Descriptor* ConnectArgs_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ConnectArgs_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_in_2eproto() {
  protobuf_AddDesc_in_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "in.proto");
  GOOGLE_CHECK(file != NULL);
  ConnectArgs_descriptor_ = file->message_type(0);
  static const int ConnectArgs_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectArgs, gameid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectArgs, connectionid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectArgs, userid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectArgs, auth_),
  };
  ConnectArgs_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ConnectArgs_descriptor_,
      ConnectArgs::default_instance_,
      ConnectArgs_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectArgs, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ConnectArgs, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ConnectArgs));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_in_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ConnectArgs_descriptor_, &ConnectArgs::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_in_2eproto() {
  delete ConnectArgs::default_instance_;
  delete ConnectArgs_reflection_;
}

void protobuf_AddDesc_in_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\010in.proto\022\031EECloud.PlayerIO.Messages\"Q\n"
    "\013ConnectArgs\022\016\n\006GameId\030\001 \001(\t\022\024\n\014Connecti"
    "onId\030\002 \001(\t\022\016\n\006UserId\030\003 \001(\t\022\014\n\004Auth\030\004 \001(\t", 120);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "in.proto", &protobuf_RegisterTypes);
  ConnectArgs::default_instance_ = new ConnectArgs();
  ConnectArgs::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_in_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_in_2eproto {
  StaticDescriptorInitializer_in_2eproto() {
    protobuf_AddDesc_in_2eproto();
  }
} static_descriptor_initializer_in_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int ConnectArgs::kGameIdFieldNumber;
const int ConnectArgs::kConnectionIdFieldNumber;
const int ConnectArgs::kUserIdFieldNumber;
const int ConnectArgs::kAuthFieldNumber;
#endif  // !_MSC_VER

ConnectArgs::ConnectArgs()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ConnectArgs::InitAsDefaultInstance() {
}

ConnectArgs::ConnectArgs(const ConnectArgs& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ConnectArgs::SharedCtor() {
  _cached_size_ = 0;
  gameid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  connectionid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  userid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  auth_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ConnectArgs::~ConnectArgs() {
  SharedDtor();
}

void ConnectArgs::SharedDtor() {
  if (gameid_ != &::google::protobuf::internal::kEmptyString) {
    delete gameid_;
  }
  if (connectionid_ != &::google::protobuf::internal::kEmptyString) {
    delete connectionid_;
  }
  if (userid_ != &::google::protobuf::internal::kEmptyString) {
    delete userid_;
  }
  if (auth_ != &::google::protobuf::internal::kEmptyString) {
    delete auth_;
  }
  if (this != default_instance_) {
  }
}

void ConnectArgs::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ConnectArgs::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ConnectArgs_descriptor_;
}

const ConnectArgs& ConnectArgs::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_in_2eproto();  return *default_instance_;
}

ConnectArgs* ConnectArgs::default_instance_ = NULL;

ConnectArgs* ConnectArgs::New() const {
  return new ConnectArgs;
}

void ConnectArgs::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_gameid()) {
      if (gameid_ != &::google::protobuf::internal::kEmptyString) {
        gameid_->clear();
      }
    }
    if (has_connectionid()) {
      if (connectionid_ != &::google::protobuf::internal::kEmptyString) {
        connectionid_->clear();
      }
    }
    if (has_userid()) {
      if (userid_ != &::google::protobuf::internal::kEmptyString) {
        userid_->clear();
      }
    }
    if (has_auth()) {
      if (auth_ != &::google::protobuf::internal::kEmptyString) {
        auth_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ConnectArgs::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string GameId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_gameid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->gameid().data(), this->gameid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_ConnectionId;
        break;
      }
      
      // optional string ConnectionId = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_ConnectionId:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_connectionid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->connectionid().data(), this->connectionid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_UserId;
        break;
      }
      
      // optional string UserId = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_UserId:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_userid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->userid().data(), this->userid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_Auth;
        break;
      }
      
      // optional string Auth = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Auth:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_auth()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->auth().data(), this->auth().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ConnectArgs::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string GameId = 1;
  if (has_gameid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->gameid().data(), this->gameid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->gameid(), output);
  }
  
  // optional string ConnectionId = 2;
  if (has_connectionid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->connectionid().data(), this->connectionid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->connectionid(), output);
  }
  
  // optional string UserId = 3;
  if (has_userid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->userid().data(), this->userid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->userid(), output);
  }
  
  // optional string Auth = 4;
  if (has_auth()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->auth().data(), this->auth().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->auth(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ConnectArgs::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string GameId = 1;
  if (has_gameid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->gameid().data(), this->gameid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->gameid(), target);
  }
  
  // optional string ConnectionId = 2;
  if (has_connectionid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->connectionid().data(), this->connectionid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->connectionid(), target);
  }
  
  // optional string UserId = 3;
  if (has_userid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->userid().data(), this->userid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->userid(), target);
  }
  
  // optional string Auth = 4;
  if (has_auth()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->auth().data(), this->auth().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->auth(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ConnectArgs::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string GameId = 1;
    if (has_gameid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->gameid());
    }
    
    // optional string ConnectionId = 2;
    if (has_connectionid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->connectionid());
    }
    
    // optional string UserId = 3;
    if (has_userid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->userid());
    }
    
    // optional string Auth = 4;
    if (has_auth()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->auth());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ConnectArgs::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ConnectArgs* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ConnectArgs*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ConnectArgs::MergeFrom(const ConnectArgs& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_gameid()) {
      set_gameid(from.gameid());
    }
    if (from.has_connectionid()) {
      set_connectionid(from.connectionid());
    }
    if (from.has_userid()) {
      set_userid(from.userid());
    }
    if (from.has_auth()) {
      set_auth(from.auth());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ConnectArgs::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ConnectArgs::CopyFrom(const ConnectArgs& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConnectArgs::IsInitialized() const {
  
  return true;
}

void ConnectArgs::Swap(ConnectArgs* other) {
  if (other != this) {
    std::swap(gameid_, other->gameid_);
    std::swap(connectionid_, other->connectionid_);
    std::swap(userid_, other->userid_);
    std::swap(auth_, other->auth_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ConnectArgs::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ConnectArgs_descriptor_;
  metadata.reflection = ConnectArgs_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Messages
}  // namespace PlayerIO
}  // namespace EECloud

// @@protoc_insertion_point(global_scope)