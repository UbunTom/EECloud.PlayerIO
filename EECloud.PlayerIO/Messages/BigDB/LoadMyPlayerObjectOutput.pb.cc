// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "LoadMyPlayerObjectOutput.pb.h"

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

const ::google::protobuf::Descriptor* LoadMyPlayerObjectOutput_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LoadMyPlayerObjectOutput_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_LoadMyPlayerObjectOutput_2eproto() {
  protobuf_AddDesc_LoadMyPlayerObjectOutput_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "LoadMyPlayerObjectOutput.proto");
  GOOGLE_CHECK(file != NULL);
  LoadMyPlayerObjectOutput_descriptor_ = file->message_type(0);
  static const int LoadMyPlayerObjectOutput_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoadMyPlayerObjectOutput, playerobject_),
  };
  LoadMyPlayerObjectOutput_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LoadMyPlayerObjectOutput_descriptor_,
      LoadMyPlayerObjectOutput::default_instance_,
      LoadMyPlayerObjectOutput_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoadMyPlayerObjectOutput, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoadMyPlayerObjectOutput, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LoadMyPlayerObjectOutput));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_LoadMyPlayerObjectOutput_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LoadMyPlayerObjectOutput_descriptor_, &LoadMyPlayerObjectOutput::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_LoadMyPlayerObjectOutput_2eproto() {
  delete LoadMyPlayerObjectOutput::default_instance_;
  delete LoadMyPlayerObjectOutput_reflection_;
}

void protobuf_AddDesc_LoadMyPlayerObjectOutput_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::EECloud::protobuf_AddDesc_DatabaseObject_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\036LoadMyPlayerObjectOutput.proto\022\007EEClou"
    "d\032\024DatabaseObject.proto\"I\n\030LoadMyPlayerO"
    "bjectOutput\022-\n\014PlayerObject\030\001 \001(\0132\027.EECl"
    "oud.DatabaseObject", 138);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "LoadMyPlayerObjectOutput.proto", &protobuf_RegisterTypes);
  LoadMyPlayerObjectOutput::default_instance_ = new LoadMyPlayerObjectOutput();
  LoadMyPlayerObjectOutput::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_LoadMyPlayerObjectOutput_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_LoadMyPlayerObjectOutput_2eproto {
  StaticDescriptorInitializer_LoadMyPlayerObjectOutput_2eproto() {
    protobuf_AddDesc_LoadMyPlayerObjectOutput_2eproto();
  }
} static_descriptor_initializer_LoadMyPlayerObjectOutput_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int LoadMyPlayerObjectOutput::kPlayerObjectFieldNumber;
#endif  // !_MSC_VER

LoadMyPlayerObjectOutput::LoadMyPlayerObjectOutput()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void LoadMyPlayerObjectOutput::InitAsDefaultInstance() {
  playerobject_ = const_cast< ::EECloud::DatabaseObject*>(&::EECloud::DatabaseObject::default_instance());
}

LoadMyPlayerObjectOutput::LoadMyPlayerObjectOutput(const LoadMyPlayerObjectOutput& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void LoadMyPlayerObjectOutput::SharedCtor() {
  _cached_size_ = 0;
  playerobject_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LoadMyPlayerObjectOutput::~LoadMyPlayerObjectOutput() {
  SharedDtor();
}

void LoadMyPlayerObjectOutput::SharedDtor() {
  if (this != default_instance_) {
    delete playerobject_;
  }
}

void LoadMyPlayerObjectOutput::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LoadMyPlayerObjectOutput::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LoadMyPlayerObjectOutput_descriptor_;
}

const LoadMyPlayerObjectOutput& LoadMyPlayerObjectOutput::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_LoadMyPlayerObjectOutput_2eproto();  return *default_instance_;
}

LoadMyPlayerObjectOutput* LoadMyPlayerObjectOutput::default_instance_ = NULL;

LoadMyPlayerObjectOutput* LoadMyPlayerObjectOutput::New() const {
  return new LoadMyPlayerObjectOutput;
}

void LoadMyPlayerObjectOutput::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_playerobject()) {
      if (playerobject_ != NULL) playerobject_->::EECloud::DatabaseObject::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LoadMyPlayerObjectOutput::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .EECloud.DatabaseObject PlayerObject = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_playerobject()));
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

void LoadMyPlayerObjectOutput::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .EECloud.DatabaseObject PlayerObject = 1;
  if (has_playerobject()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->playerobject(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* LoadMyPlayerObjectOutput::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional .EECloud.DatabaseObject PlayerObject = 1;
  if (has_playerobject()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->playerobject(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int LoadMyPlayerObjectOutput::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .EECloud.DatabaseObject PlayerObject = 1;
    if (has_playerobject()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->playerobject());
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

void LoadMyPlayerObjectOutput::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LoadMyPlayerObjectOutput* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LoadMyPlayerObjectOutput*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LoadMyPlayerObjectOutput::MergeFrom(const LoadMyPlayerObjectOutput& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_playerobject()) {
      mutable_playerobject()->::EECloud::DatabaseObject::MergeFrom(from.playerobject());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LoadMyPlayerObjectOutput::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoadMyPlayerObjectOutput::CopyFrom(const LoadMyPlayerObjectOutput& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoadMyPlayerObjectOutput::IsInitialized() const {
  
  return true;
}

void LoadMyPlayerObjectOutput::Swap(LoadMyPlayerObjectOutput* other) {
  if (other != this) {
    std::swap(playerobject_, other->playerobject_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LoadMyPlayerObjectOutput::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LoadMyPlayerObjectOutput_descriptor_;
  metadata.reflection = LoadMyPlayerObjectOutput_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace EECloud

// @@protoc_insertion_point(global_scope)