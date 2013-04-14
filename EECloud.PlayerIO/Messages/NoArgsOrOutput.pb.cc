// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "NoArgsOrOutput.pb.h"

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

const ::google::protobuf::Descriptor* NoArgsOrOutput_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  NoArgsOrOutput_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_NoArgsOrOutput_2eproto() {
  protobuf_AddDesc_NoArgsOrOutput_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "NoArgsOrOutput.proto");
  GOOGLE_CHECK(file != NULL);
  NoArgsOrOutput_descriptor_ = file->message_type(0);
  static const int NoArgsOrOutput_offsets_[1] = {
  };
  NoArgsOrOutput_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      NoArgsOrOutput_descriptor_,
      NoArgsOrOutput::default_instance_,
      NoArgsOrOutput_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NoArgsOrOutput, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NoArgsOrOutput, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(NoArgsOrOutput));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_NoArgsOrOutput_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    NoArgsOrOutput_descriptor_, &NoArgsOrOutput::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_NoArgsOrOutput_2eproto() {
  delete NoArgsOrOutput::default_instance_;
  delete NoArgsOrOutput_reflection_;
}

void protobuf_AddDesc_NoArgsOrOutput_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024NoArgsOrOutput.proto\022\007EECloud\"\020\n\016NoArg"
    "sOrOutput", 49);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "NoArgsOrOutput.proto", &protobuf_RegisterTypes);
  NoArgsOrOutput::default_instance_ = new NoArgsOrOutput();
  NoArgsOrOutput::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_NoArgsOrOutput_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_NoArgsOrOutput_2eproto {
  StaticDescriptorInitializer_NoArgsOrOutput_2eproto() {
    protobuf_AddDesc_NoArgsOrOutput_2eproto();
  }
} static_descriptor_initializer_NoArgsOrOutput_2eproto_;


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

NoArgsOrOutput::NoArgsOrOutput()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void NoArgsOrOutput::InitAsDefaultInstance() {
}

NoArgsOrOutput::NoArgsOrOutput(const NoArgsOrOutput& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void NoArgsOrOutput::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

NoArgsOrOutput::~NoArgsOrOutput() {
  SharedDtor();
}

void NoArgsOrOutput::SharedDtor() {
  if (this != default_instance_) {
  }
}

void NoArgsOrOutput::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* NoArgsOrOutput::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return NoArgsOrOutput_descriptor_;
}

const NoArgsOrOutput& NoArgsOrOutput::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_NoArgsOrOutput_2eproto();  return *default_instance_;
}

NoArgsOrOutput* NoArgsOrOutput::default_instance_ = NULL;

NoArgsOrOutput* NoArgsOrOutput::New() const {
  return new NoArgsOrOutput;
}

void NoArgsOrOutput::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool NoArgsOrOutput::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
  return true;
#undef DO_
}

void NoArgsOrOutput::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* NoArgsOrOutput::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int NoArgsOrOutput::ByteSize() const {
  int total_size = 0;
  
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

void NoArgsOrOutput::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const NoArgsOrOutput* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const NoArgsOrOutput*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void NoArgsOrOutput::MergeFrom(const NoArgsOrOutput& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void NoArgsOrOutput::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NoArgsOrOutput::CopyFrom(const NoArgsOrOutput& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NoArgsOrOutput::IsInitialized() const {
  
  return true;
}

void NoArgsOrOutput::Swap(NoArgsOrOutput* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata NoArgsOrOutput::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = NoArgsOrOutput_descriptor_;
  metadata.reflection = NoArgsOrOutput_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace EECloud

// @@protoc_insertion_point(global_scope)
