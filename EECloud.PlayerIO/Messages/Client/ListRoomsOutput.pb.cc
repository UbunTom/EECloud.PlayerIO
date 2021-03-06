// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ListRoomsOutput.pb.h"

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

const ::google::protobuf::Descriptor* ListRoomsOutput_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ListRoomsOutput_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ListRoomsOutput_2eproto() {
  protobuf_AddDesc_ListRoomsOutput_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ListRoomsOutput.proto");
  GOOGLE_CHECK(file != NULL);
  ListRoomsOutput_descriptor_ = file->message_type(0);
  static const int ListRoomsOutput_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ListRoomsOutput, roominfo_),
  };
  ListRoomsOutput_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ListRoomsOutput_descriptor_,
      ListRoomsOutput::default_instance_,
      ListRoomsOutput_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ListRoomsOutput, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ListRoomsOutput, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ListRoomsOutput));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ListRoomsOutput_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ListRoomsOutput_descriptor_, &ListRoomsOutput::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ListRoomsOutput_2eproto() {
  delete ListRoomsOutput::default_instance_;
  delete ListRoomsOutput_reflection_;
}

void protobuf_AddDesc_ListRoomsOutput_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::EECloud::protobuf_AddDesc_RoomInfo_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025ListRoomsOutput.proto\022\007EECloud\032\016RoomIn"
    "fo.proto\"6\n\017ListRoomsOutput\022#\n\010RoomInfo\030"
    "\001 \003(\0132\021.EECloud.RoomInfo", 104);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ListRoomsOutput.proto", &protobuf_RegisterTypes);
  ListRoomsOutput::default_instance_ = new ListRoomsOutput();
  ListRoomsOutput::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ListRoomsOutput_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ListRoomsOutput_2eproto {
  StaticDescriptorInitializer_ListRoomsOutput_2eproto() {
    protobuf_AddDesc_ListRoomsOutput_2eproto();
  }
} static_descriptor_initializer_ListRoomsOutput_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int ListRoomsOutput::kRoomInfoFieldNumber;
#endif  // !_MSC_VER

ListRoomsOutput::ListRoomsOutput()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ListRoomsOutput::InitAsDefaultInstance() {
}

ListRoomsOutput::ListRoomsOutput(const ListRoomsOutput& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ListRoomsOutput::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ListRoomsOutput::~ListRoomsOutput() {
  SharedDtor();
}

void ListRoomsOutput::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ListRoomsOutput::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ListRoomsOutput::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ListRoomsOutput_descriptor_;
}

const ListRoomsOutput& ListRoomsOutput::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ListRoomsOutput_2eproto();  return *default_instance_;
}

ListRoomsOutput* ListRoomsOutput::default_instance_ = NULL;

ListRoomsOutput* ListRoomsOutput::New() const {
  return new ListRoomsOutput;
}

void ListRoomsOutput::Clear() {
  roominfo_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ListRoomsOutput::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .EECloud.RoomInfo RoomInfo = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_RoomInfo:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_roominfo()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_RoomInfo;
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

void ListRoomsOutput::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .EECloud.RoomInfo RoomInfo = 1;
  for (int i = 0; i < this->roominfo_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->roominfo(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ListRoomsOutput::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .EECloud.RoomInfo RoomInfo = 1;
  for (int i = 0; i < this->roominfo_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->roominfo(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ListRoomsOutput::ByteSize() const {
  int total_size = 0;
  
  // repeated .EECloud.RoomInfo RoomInfo = 1;
  total_size += 1 * this->roominfo_size();
  for (int i = 0; i < this->roominfo_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->roominfo(i));
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

void ListRoomsOutput::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ListRoomsOutput* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ListRoomsOutput*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ListRoomsOutput::MergeFrom(const ListRoomsOutput& from) {
  GOOGLE_CHECK_NE(&from, this);
  roominfo_.MergeFrom(from.roominfo_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ListRoomsOutput::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ListRoomsOutput::CopyFrom(const ListRoomsOutput& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ListRoomsOutput::IsInitialized() const {
  
  return true;
}

void ListRoomsOutput::Swap(ListRoomsOutput* other) {
  if (other != this) {
    roominfo_.Swap(&other->roominfo_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ListRoomsOutput::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ListRoomsOutput_descriptor_;
  metadata.reflection = ListRoomsOutput_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace EECloud

// @@protoc_insertion_point(global_scope)
