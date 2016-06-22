// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "raft/local_file_meta.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* LocalFileMeta_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LocalFileMeta_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_raft_2flocal_5ffile_5fmeta_2eproto() {
  protobuf_AddDesc_raft_2flocal_5ffile_5fmeta_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "raft/local_file_meta.proto");
  GOOGLE_CHECK(file != NULL);
  LocalFileMeta_descriptor_ = file->message_type(0);
  static const int LocalFileMeta_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalFileMeta, tag_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalFileMeta, reference_),
  };
  LocalFileMeta_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LocalFileMeta_descriptor_,
      LocalFileMeta::default_instance_,
      LocalFileMeta_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalFileMeta, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalFileMeta, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LocalFileMeta));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_raft_2flocal_5ffile_5fmeta_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LocalFileMeta_descriptor_, &LocalFileMeta::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_raft_2flocal_5ffile_5fmeta_2eproto() {
  delete LocalFileMeta::default_instance_;
  delete LocalFileMeta_reflection_;
}

void protobuf_AddDesc_raft_2flocal_5ffile_5fmeta_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032raft/local_file_meta.proto\"/\n\rLocalFil"
    "eMeta\022\013\n\003tag\030\001 \001(\t\022\021\n\treference\030\002 \001(\t", 77);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "raft/local_file_meta.proto", &protobuf_RegisterTypes);
  LocalFileMeta::default_instance_ = new LocalFileMeta();
  LocalFileMeta::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_raft_2flocal_5ffile_5fmeta_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_raft_2flocal_5ffile_5fmeta_2eproto {
  StaticDescriptorInitializer_raft_2flocal_5ffile_5fmeta_2eproto() {
    protobuf_AddDesc_raft_2flocal_5ffile_5fmeta_2eproto();
  }
} static_descriptor_initializer_raft_2flocal_5ffile_5fmeta_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int LocalFileMeta::kTagFieldNumber;
const int LocalFileMeta::kReferenceFieldNumber;
#endif  // !_MSC_VER

LocalFileMeta::LocalFileMeta()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void LocalFileMeta::InitAsDefaultInstance() {
}

LocalFileMeta::LocalFileMeta(const LocalFileMeta& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void LocalFileMeta::SharedCtor() {
  _cached_size_ = 0;
  tag_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  reference_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LocalFileMeta::~LocalFileMeta() {
  SharedDtor();
}

void LocalFileMeta::SharedDtor() {
  if (tag_ != &::google::protobuf::internal::kEmptyString) {
    delete tag_;
  }
  if (reference_ != &::google::protobuf::internal::kEmptyString) {
    delete reference_;
  }
  if (this != default_instance_) {
  }
}

void LocalFileMeta::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LocalFileMeta::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LocalFileMeta_descriptor_;
}

const LocalFileMeta& LocalFileMeta::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_raft_2flocal_5ffile_5fmeta_2eproto();  return *default_instance_;
}

LocalFileMeta* LocalFileMeta::default_instance_ = NULL;

LocalFileMeta* LocalFileMeta::New() const {
  return new LocalFileMeta;
}

void LocalFileMeta::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_tag()) {
      if (tag_ != &::google::protobuf::internal::kEmptyString) {
        tag_->clear();
      }
    }
    if (has_reference()) {
      if (reference_ != &::google::protobuf::internal::kEmptyString) {
        reference_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LocalFileMeta::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string tag = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_tag()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->tag().data(), this->tag().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_reference;
        break;
      }
      
      // optional string reference = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_reference:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_reference()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->reference().data(), this->reference().length(),
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

void LocalFileMeta::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string tag = 1;
  if (has_tag()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->tag().data(), this->tag().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->tag(), output);
  }
  
  // optional string reference = 2;
  if (has_reference()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->reference().data(), this->reference().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->reference(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* LocalFileMeta::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string tag = 1;
  if (has_tag()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->tag().data(), this->tag().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->tag(), target);
  }
  
  // optional string reference = 2;
  if (has_reference()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->reference().data(), this->reference().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->reference(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int LocalFileMeta::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string tag = 1;
    if (has_tag()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->tag());
    }
    
    // optional string reference = 2;
    if (has_reference()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->reference());
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

void LocalFileMeta::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LocalFileMeta* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LocalFileMeta*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LocalFileMeta::MergeFrom(const LocalFileMeta& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_tag()) {
      set_tag(from.tag());
    }
    if (from.has_reference()) {
      set_reference(from.reference());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LocalFileMeta::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LocalFileMeta::CopyFrom(const LocalFileMeta& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LocalFileMeta::IsInitialized() const {
  
  return true;
}

void LocalFileMeta::Swap(LocalFileMeta* other) {
  if (other != this) {
    std::swap(tag_, other->tag_);
    std::swap(reference_, other->reference_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LocalFileMeta::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LocalFileMeta_descriptor_;
  metadata.reflection = LocalFileMeta_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
