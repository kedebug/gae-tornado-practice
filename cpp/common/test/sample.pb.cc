// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "sample.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace sample {

namespace {

const ::google::protobuf::Descriptor* Session_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
Session_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_sample_2eproto() {
  protobuf_AddDesc_sample_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "sample.proto");
  GOOGLE_CHECK(file != NULL);
  Session_descriptor_ = file->message_type(0);
  static const int Session_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Session, user_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Session, passwd_),
  };
  Session_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
    Session_descriptor_,
    Session::default_instance_,
    Session_offsets_,
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Session, _has_bits_[0]),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Session, _unknown_fields_),
    -1,
    ::google::protobuf::DescriptorPool::generated_pool(),
    ::google::protobuf::MessageFactory::generated_factory(),
    sizeof(Session));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                                     &protobuf_AssignDesc_sample_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Session_descriptor_, &Session::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_sample_2eproto() {
  delete Session::default_instance_;
  delete Session_reflection_;
}

void protobuf_AddDesc_sample_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014sample.proto\022\006sample\"\'\n\007Session\022\014\n\004use"
    "r\030\001 \001(\t\022\016\n\006passwd\030\002 \001(\t", 63);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "sample.proto", &protobuf_RegisterTypes);
  Session::default_instance_ = new Session();
  Session::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_sample_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_sample_2eproto {
  StaticDescriptorInitializer_sample_2eproto() {
    protobuf_AddDesc_sample_2eproto();
  }
} static_descriptor_initializer_sample_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int Session::kUserFieldNumber;
const int Session::kPasswdFieldNumber;
#endif  // !_MSC_VER

Session::Session()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Session::InitAsDefaultInstance() {
}

Session::Session(const Session& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Session::SharedCtor() {
  _cached_size_ = 0;
  user_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  passwd_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Session::~Session() {
  SharedDtor();
}

void Session::SharedDtor() {
  if (user_ != &::google::protobuf::internal::kEmptyString) {
    delete user_;
  }
  if (passwd_ != &::google::protobuf::internal::kEmptyString) {
    delete passwd_;
  }
  if (this != default_instance_) {
  }
}

void Session::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Session::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Session_descriptor_;
}

const Session& Session::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_sample_2eproto();
  return *default_instance_;
}

Session* Session::default_instance_ = NULL;

Session* Session::New() const {
  return new Session;
}

void Session::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_user()) {
      if (user_ != &::google::protobuf::internal::kEmptyString) {
        user_->clear();
      }
    }
    if (has_passwd()) {
      if (passwd_ != &::google::protobuf::internal::kEmptyString) {
        passwd_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Session::MergePartialFromCodedStream(
  ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
        // optional string user = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_user()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->user().data(), this->user().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_passwd;
        break;
      }

      // optional string passwd = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
        parse_passwd:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_passwd()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->passwd().data(), this->passwd().length(),
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

void Session::SerializeWithCachedSizes(
  ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string user = 1;
  if (has_user()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->user().data(), this->user().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->user(), output);
  }

  // optional string passwd = 2;
  if (has_passwd()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->passwd().data(), this->passwd().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->passwd(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
      unknown_fields(), output);
  }
}

::google::protobuf::uint8* Session::SerializeWithCachedSizesToArray(
  ::google::protobuf::uint8* target) const {
  // optional string user = 1;
  if (has_user()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->user().data(), this->user().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->user(), target);
  }

  // optional string passwd = 2;
  if (has_passwd()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->passwd().data(), this->passwd().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->passwd(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
               unknown_fields(), target);
  }
  return target;
}

int Session::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string user = 1;
    if (has_user()) {
      total_size += 1 +
                    ::google::protobuf::internal::WireFormatLite::StringSize(
                      this->user());
    }

    // optional string passwd = 2;
    if (has_passwd()) {
      total_size += 1 +
                    ::google::protobuf::internal::WireFormatLite::StringSize(
                      this->passwd());
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

void Session::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Session* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Session*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Session::MergeFrom(const Session& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_user()) {
      set_user(from.user());
    }
    if (from.has_passwd()) {
      set_passwd(from.passwd());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Session::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Session::CopyFrom(const Session& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Session::IsInitialized() const {

  return true;
}

void Session::Swap(Session* other) {
  if (other != this) {
    std::swap(user_, other->user_);
    std::swap(passwd_, other->passwd_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Session::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Session_descriptor_;
  metadata.reflection = Session_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sample

// @@protoc_insertion_point(global_scope)