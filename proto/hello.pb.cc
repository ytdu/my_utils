// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/hello.proto

#include "proto/hello.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace hello {
class HelloInputDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<HelloInput>
      _instance;
} _HelloInput_default_instance_;
class HelloOutputDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<HelloOutput>
      _instance;
} _HelloOutput_default_instance_;
}  // namespace hello
namespace protobuf_proto_2fhello_2eproto {
void InitDefaultsHelloInputImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::hello::_HelloInput_default_instance_;
    new (ptr) ::hello::HelloInput();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::hello::HelloInput::InitAsDefaultInstance();
}

void InitDefaultsHelloInput() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsHelloInputImpl);
}

void InitDefaultsHelloOutputImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::hello::_HelloOutput_default_instance_;
    new (ptr) ::hello::HelloOutput();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::hello::HelloOutput::InitAsDefaultInstance();
}

void InitDefaultsHelloOutput() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsHelloOutputImpl);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::hello::HelloInput, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::hello::HelloInput, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::hello::HelloInput, repeat_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::hello::HelloOutput, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::hello::HelloOutput, hello_message_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::hello::HelloInput)},
  { 7, -1, sizeof(::hello::HelloOutput)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::hello::_HelloInput_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::hello::_HelloOutput_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "proto/hello.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\021proto/hello.proto\022\005hello\"*\n\nHelloInput"
      "\022\014\n\004name\030\001 \001(\t\022\016\n\006repeat\030\002 \001(\005\"$\n\013HelloO"
      "utput\022\025\n\rhello_message\030\001 \001(\t27\n\005Hello\022.\n"
      "\005Hello\022\021.hello.HelloInput\032\022.hello.HelloO"
      "utputB\003Z\001pb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 178);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/hello.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_proto_2fhello_2eproto
namespace hello {

// ===================================================================

void HelloInput::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int HelloInput::kNameFieldNumber;
const int HelloInput::kRepeatFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HelloInput::HelloInput()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_proto_2fhello_2eproto::InitDefaultsHelloInput();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:hello.HelloInput)
}
HelloInput::HelloInput(const HelloInput& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  repeat_ = from.repeat_;
  // @@protoc_insertion_point(copy_constructor:hello.HelloInput)
}

void HelloInput::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  repeat_ = 0;
  _cached_size_ = 0;
}

HelloInput::~HelloInput() {
  // @@protoc_insertion_point(destructor:hello.HelloInput)
  SharedDtor();
}

void HelloInput::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void HelloInput::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HelloInput::descriptor() {
  ::protobuf_proto_2fhello_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2fhello_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const HelloInput& HelloInput::default_instance() {
  ::protobuf_proto_2fhello_2eproto::InitDefaultsHelloInput();
  return *internal_default_instance();
}

HelloInput* HelloInput::New(::google::protobuf::Arena* arena) const {
  HelloInput* n = new HelloInput;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HelloInput::Clear() {
// @@protoc_insertion_point(message_clear_start:hello.HelloInput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  repeat_ = 0;
  _internal_metadata_.Clear();
}

bool HelloInput::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:hello.HelloInput)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "hello.HelloInput.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 repeat = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &repeat_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:hello.HelloInput)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:hello.HelloInput)
  return false;
#undef DO_
}

void HelloInput::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:hello.HelloInput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "hello.HelloInput.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // int32 repeat = 2;
  if (this->repeat() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->repeat(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:hello.HelloInput)
}

::google::protobuf::uint8* HelloInput::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:hello.HelloInput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "hello.HelloInput.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // int32 repeat = 2;
  if (this->repeat() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->repeat(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:hello.HelloInput)
  return target;
}

size_t HelloInput::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hello.HelloInput)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // int32 repeat = 2;
  if (this->repeat() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->repeat());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HelloInput::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:hello.HelloInput)
  GOOGLE_DCHECK_NE(&from, this);
  const HelloInput* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const HelloInput>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:hello.HelloInput)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:hello.HelloInput)
    MergeFrom(*source);
  }
}

void HelloInput::MergeFrom(const HelloInput& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:hello.HelloInput)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.repeat() != 0) {
    set_repeat(from.repeat());
  }
}

void HelloInput::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:hello.HelloInput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HelloInput::CopyFrom(const HelloInput& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hello.HelloInput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HelloInput::IsInitialized() const {
  return true;
}

void HelloInput::Swap(HelloInput* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HelloInput::InternalSwap(HelloInput* other) {
  using std::swap;
  name_.Swap(&other->name_);
  swap(repeat_, other->repeat_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata HelloInput::GetMetadata() const {
  protobuf_proto_2fhello_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2fhello_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void HelloOutput::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int HelloOutput::kHelloMessageFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HelloOutput::HelloOutput()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_proto_2fhello_2eproto::InitDefaultsHelloOutput();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:hello.HelloOutput)
}
HelloOutput::HelloOutput(const HelloOutput& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  hello_message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.hello_message().size() > 0) {
    hello_message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.hello_message_);
  }
  // @@protoc_insertion_point(copy_constructor:hello.HelloOutput)
}

void HelloOutput::SharedCtor() {
  hello_message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

HelloOutput::~HelloOutput() {
  // @@protoc_insertion_point(destructor:hello.HelloOutput)
  SharedDtor();
}

void HelloOutput::SharedDtor() {
  hello_message_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void HelloOutput::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HelloOutput::descriptor() {
  ::protobuf_proto_2fhello_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2fhello_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const HelloOutput& HelloOutput::default_instance() {
  ::protobuf_proto_2fhello_2eproto::InitDefaultsHelloOutput();
  return *internal_default_instance();
}

HelloOutput* HelloOutput::New(::google::protobuf::Arena* arena) const {
  HelloOutput* n = new HelloOutput;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HelloOutput::Clear() {
// @@protoc_insertion_point(message_clear_start:hello.HelloOutput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  hello_message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool HelloOutput::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:hello.HelloOutput)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string hello_message = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_hello_message()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->hello_message().data(), static_cast<int>(this->hello_message().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "hello.HelloOutput.hello_message"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:hello.HelloOutput)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:hello.HelloOutput)
  return false;
#undef DO_
}

void HelloOutput::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:hello.HelloOutput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string hello_message = 1;
  if (this->hello_message().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->hello_message().data(), static_cast<int>(this->hello_message().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "hello.HelloOutput.hello_message");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->hello_message(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:hello.HelloOutput)
}

::google::protobuf::uint8* HelloOutput::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:hello.HelloOutput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string hello_message = 1;
  if (this->hello_message().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->hello_message().data(), static_cast<int>(this->hello_message().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "hello.HelloOutput.hello_message");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->hello_message(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:hello.HelloOutput)
  return target;
}

size_t HelloOutput::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hello.HelloOutput)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string hello_message = 1;
  if (this->hello_message().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->hello_message());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HelloOutput::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:hello.HelloOutput)
  GOOGLE_DCHECK_NE(&from, this);
  const HelloOutput* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const HelloOutput>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:hello.HelloOutput)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:hello.HelloOutput)
    MergeFrom(*source);
  }
}

void HelloOutput::MergeFrom(const HelloOutput& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:hello.HelloOutput)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.hello_message().size() > 0) {

    hello_message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.hello_message_);
  }
}

void HelloOutput::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:hello.HelloOutput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HelloOutput::CopyFrom(const HelloOutput& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hello.HelloOutput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HelloOutput::IsInitialized() const {
  return true;
}

void HelloOutput::Swap(HelloOutput* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HelloOutput::InternalSwap(HelloOutput* other) {
  using std::swap;
  hello_message_.Swap(&other->hello_message_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata HelloOutput::GetMetadata() const {
  protobuf_proto_2fhello_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_2fhello_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace hello

// @@protoc_insertion_point(global_scope)
