// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CreateJoinRoomOutput.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace EECloud {

namespace {

const ::google::protobuf::Descriptor* CreateJoinRoomOutput_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CreateJoinRoomOutput_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CreateJoinRoomOutput_2eproto() {
  protobuf_AddDesc_CreateJoinRoomOutput_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CreateJoinRoomOutput.proto");
  GOOGLE_CHECK(file != NULL);
  CreateJoinRoomOutput_descriptor_ = file->message_type(0);
  static const int CreateJoinRoomOutput_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CreateJoinRoomOutput, roomid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CreateJoinRoomOutput, joinkey_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CreateJoinRoomOutput, endpoints_),
  };
  CreateJoinRoomOutput_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CreateJoinRoomOutput_descriptor_,
      CreateJoinRoomOutput::default_instance_,
      CreateJoinRoomOutput_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CreateJoinRoomOutput, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CreateJoinRoomOutput, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CreateJoinRoomOutput));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CreateJoinRoomOutput_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CreateJoinRoomOutput_descriptor_, &CreateJoinRoomOutput::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CreateJoinRoomOutput_2eproto() {
  delete CreateJoinRoomOutput::default_instance_;
  delete CreateJoinRoomOutput_reflection_;
}

void protobuf_AddDesc_CreateJoinRoomOutput_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::EECloud::protobuf_AddDesc_ServerEndpoint_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032CreateJoinRoomOutput.proto\022\007EECloud\032\024S"
    "erverEndpoint.proto\"c\n\024CreateJoinRoomOut"
    "put\022\016\n\006RoomId\030\001 \001(\t\022\017\n\007JoinKey\030\002 \001(\t\022*\n\t"
    "Endpoints\030\003 \003(\0132\027.EECloud.ServerEndpoint", 160);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CreateJoinRoomOutput.proto", &protobuf_RegisterTypes);
  CreateJoinRoomOutput::default_instance_ = new CreateJoinRoomOutput();
  CreateJoinRoomOutput::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CreateJoinRoomOutput_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CreateJoinRoomOutput_2eproto {
  StaticDescriptorInitializer_CreateJoinRoomOutput_2eproto() {
    protobuf_AddDesc_CreateJoinRoomOutput_2eproto();
  }
} static_descriptor_initializer_CreateJoinRoomOutput_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int CreateJoinRoomOutput::kRoomIdFieldNumber;
const int CreateJoinRoomOutput::kJoinKeyFieldNumber;
const int CreateJoinRoomOutput::kEndpointsFieldNumber;
#endif  // !_MSC_VER

CreateJoinRoomOutput::CreateJoinRoomOutput()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CreateJoinRoomOutput::InitAsDefaultInstance() {
}

CreateJoinRoomOutput::CreateJoinRoomOutput(const CreateJoinRoomOutput& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CreateJoinRoomOutput::SharedCtor() {
  _cached_size_ = 0;
  roomid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  joinkey_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CreateJoinRoomOutput::~CreateJoinRoomOutput() {
  SharedDtor();
}

void CreateJoinRoomOutput::SharedDtor() {
  if (roomid_ != &::google::protobuf::internal::kEmptyString) {
    delete roomid_;
  }
  if (joinkey_ != &::google::protobuf::internal::kEmptyString) {
    delete joinkey_;
  }
  if (this != default_instance_) {
  }
}

void CreateJoinRoomOutput::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CreateJoinRoomOutput::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CreateJoinRoomOutput_descriptor_;
}

const CreateJoinRoomOutput& CreateJoinRoomOutput::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CreateJoinRoomOutput_2eproto();  return *default_instance_;
}

CreateJoinRoomOutput* CreateJoinRoomOutput::default_instance_ = NULL;

CreateJoinRoomOutput* CreateJoinRoomOutput::New() const {
  return new CreateJoinRoomOutput;
}

void CreateJoinRoomOutput::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_roomid()) {
      if (roomid_ != &::google::protobuf::internal::kEmptyString) {
        roomid_->clear();
      }
    }
    if (has_joinkey()) {
      if (joinkey_ != &::google::protobuf::internal::kEmptyString) {
        joinkey_->clear();
      }
    }
  }
  endpoints_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CreateJoinRoomOutput::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string RoomId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_roomid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->roomid().data(), this->roomid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_JoinKey;
        break;
      }
      
      // optional string JoinKey = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_JoinKey:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_joinkey()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->joinkey().data(), this->joinkey().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_Endpoints;
        break;
      }
      
      // repeated .EECloud.ServerEndpoint Endpoints = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Endpoints:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_endpoints()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_Endpoints;
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

void CreateJoinRoomOutput::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string RoomId = 1;
  if (has_roomid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->roomid().data(), this->roomid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->roomid(), output);
  }
  
  // optional string JoinKey = 2;
  if (has_joinkey()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->joinkey().data(), this->joinkey().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->joinkey(), output);
  }
  
  // repeated .EECloud.ServerEndpoint Endpoints = 3;
  for (int i = 0; i < this->endpoints_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->endpoints(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CreateJoinRoomOutput::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string RoomId = 1;
  if (has_roomid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->roomid().data(), this->roomid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->roomid(), target);
  }
  
  // optional string JoinKey = 2;
  if (has_joinkey()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->joinkey().data(), this->joinkey().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->joinkey(), target);
  }
  
  // repeated .EECloud.ServerEndpoint Endpoints = 3;
  for (int i = 0; i < this->endpoints_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->endpoints(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CreateJoinRoomOutput::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string RoomId = 1;
    if (has_roomid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->roomid());
    }
    
    // optional string JoinKey = 2;
    if (has_joinkey()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->joinkey());
    }
    
  }
  // repeated .EECloud.ServerEndpoint Endpoints = 3;
  total_size += 1 * this->endpoints_size();
  for (int i = 0; i < this->endpoints_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->endpoints(i));
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

void CreateJoinRoomOutput::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CreateJoinRoomOutput* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CreateJoinRoomOutput*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CreateJoinRoomOutput::MergeFrom(const CreateJoinRoomOutput& from) {
  GOOGLE_CHECK_NE(&from, this);
  endpoints_.MergeFrom(from.endpoints_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_roomid()) {
      set_roomid(from.roomid());
    }
    if (from.has_joinkey()) {
      set_joinkey(from.joinkey());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CreateJoinRoomOutput::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CreateJoinRoomOutput::CopyFrom(const CreateJoinRoomOutput& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CreateJoinRoomOutput::IsInitialized() const {
  
  return true;
}

void CreateJoinRoomOutput::Swap(CreateJoinRoomOutput* other) {
  if (other != this) {
    std::swap(roomid_, other->roomid_);
    std::swap(joinkey_, other->joinkey_);
    endpoints_.Swap(&other->endpoints_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CreateJoinRoomOutput::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CreateJoinRoomOutput_descriptor_;
  metadata.reflection = CreateJoinRoomOutput_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace EECloud

// @@protoc_insertion_point(global_scope)