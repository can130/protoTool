// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#include "test.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_test_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_mytag_test_2eproto;
class mytagDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<mytag> _instance;
} _mytag_default_instance_;
class mymsgDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<mymsg> _instance;
} _mymsg_default_instance_;
static void InitDefaultsscc_info_mymsg_test_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_mymsg_default_instance_;
    new (ptr) ::mymsg();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mymsg::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_mymsg_test_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_mymsg_test_2eproto}, {
      &scc_info_mytag_test_2eproto.base,}};

static void InitDefaultsscc_info_mytag_test_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_mytag_default_instance_;
    new (ptr) ::mytag();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mytag::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_mytag_test_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_mytag_test_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_test_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_test_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_test_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_test_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mytag, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mytag, tag_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mymsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mymsg, len_),
  PROTOBUF_FIELD_OFFSET(::mymsg, type_),
  PROTOBUF_FIELD_OFFSET(::mymsg, tag_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::mytag)},
  { 6, -1, sizeof(::mymsg)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_mytag_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_mymsg_default_instance_),
};

const char descriptor_table_protodef_test_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\ntest.proto\"\024\n\005mytag\022\013\n\003tag\030\001 \001(\005\"7\n\005my"
  "msg\022\013\n\003len\030\001 \001(\005\022\014\n\004type\030\002 \003(\005\022\023\n\003tag\030\003 "
  "\001(\0132\006.mytagb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_test_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_test_2eproto_sccs[2] = {
  &scc_info_mymsg_test_2eproto.base,
  &scc_info_mytag_test_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_test_2eproto_once;
static bool descriptor_table_test_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_test_2eproto = {
  &descriptor_table_test_2eproto_initialized, descriptor_table_protodef_test_2eproto, "test.proto", 99,
  &descriptor_table_test_2eproto_once, descriptor_table_test_2eproto_sccs, descriptor_table_test_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_test_2eproto::offsets,
  file_level_metadata_test_2eproto, 2, file_level_enum_descriptors_test_2eproto, file_level_service_descriptors_test_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_test_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_test_2eproto), true);

// ===================================================================

void mytag::InitAsDefaultInstance() {
}
class mytag::_Internal {
 public:
};

mytag::mytag()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mytag)
}
mytag::mytag(const mytag& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  tag_ = from.tag_;
  // @@protoc_insertion_point(copy_constructor:mytag)
}

void mytag::SharedCtor() {
  tag_ = 0;
}

mytag::~mytag() {
  // @@protoc_insertion_point(destructor:mytag)
  SharedDtor();
}

void mytag::SharedDtor() {
}

void mytag::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const mytag& mytag::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_mytag_test_2eproto.base);
  return *internal_default_instance();
}


void mytag::Clear() {
// @@protoc_insertion_point(message_clear_start:mytag)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  tag_ = 0;
  _internal_metadata_.Clear();
}

const char* mytag::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 tag = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          tag_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* mytag::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mytag)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 tag = 1;
  if (this->tag() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_tag(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mytag)
  return target;
}

size_t mytag::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mytag)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 tag = 1;
  if (this->tag() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_tag());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void mytag::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mytag)
  GOOGLE_DCHECK_NE(&from, this);
  const mytag* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<mytag>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mytag)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mytag)
    MergeFrom(*source);
  }
}

void mytag::MergeFrom(const mytag& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mytag)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.tag() != 0) {
    _internal_set_tag(from._internal_tag());
  }
}

void mytag::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mytag)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void mytag::CopyFrom(const mytag& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mytag)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool mytag::IsInitialized() const {
  return true;
}

void mytag::InternalSwap(mytag* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(tag_, other->tag_);
}

::PROTOBUF_NAMESPACE_ID::Metadata mytag::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void mymsg::InitAsDefaultInstance() {
  ::_mymsg_default_instance_._instance.get_mutable()->tag_ = const_cast< ::mytag*>(
      ::mytag::internal_default_instance());
}
class mymsg::_Internal {
 public:
  static const ::mytag& tag(const mymsg* msg);
};

const ::mytag&
mymsg::_Internal::tag(const mymsg* msg) {
  return *msg->tag_;
}
mymsg::mymsg()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mymsg)
}
mymsg::mymsg(const mymsg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      type_(from.type_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_tag()) {
    tag_ = new ::mytag(*from.tag_);
  } else {
    tag_ = nullptr;
  }
  len_ = from.len_;
  // @@protoc_insertion_point(copy_constructor:mymsg)
}

void mymsg::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_mymsg_test_2eproto.base);
  ::memset(&tag_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&len_) -
      reinterpret_cast<char*>(&tag_)) + sizeof(len_));
}

mymsg::~mymsg() {
  // @@protoc_insertion_point(destructor:mymsg)
  SharedDtor();
}

void mymsg::SharedDtor() {
  if (this != internal_default_instance()) delete tag_;
}

void mymsg::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const mymsg& mymsg::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_mymsg_test_2eproto.base);
  return *internal_default_instance();
}


void mymsg::Clear() {
// @@protoc_insertion_point(message_clear_start:mymsg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  type_.Clear();
  if (GetArenaNoVirtual() == nullptr && tag_ != nullptr) {
    delete tag_;
  }
  tag_ = nullptr;
  len_ = 0;
  _internal_metadata_.Clear();
}

const char* mymsg::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 len = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          len_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated int32 type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_type(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16) {
          _internal_add_type(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .mytag tag = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_tag(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* mymsg::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mymsg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 len = 1;
  if (this->len() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_len(), target);
  }

  // repeated int32 type = 2;
  {
    int byte_size = _type_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          2, _internal_type(), byte_size, target);
    }
  }

  // .mytag tag = 3;
  if (this->has_tag()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::tag(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mymsg)
  return target;
}

size_t mymsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mymsg)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 type = 2;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      Int32Size(this->type_);
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _type_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // .mytag tag = 3;
  if (this->has_tag()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *tag_);
  }

  // int32 len = 1;
  if (this->len() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_len());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void mymsg::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mymsg)
  GOOGLE_DCHECK_NE(&from, this);
  const mymsg* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<mymsg>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mymsg)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mymsg)
    MergeFrom(*source);
  }
}

void mymsg::MergeFrom(const mymsg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mymsg)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  type_.MergeFrom(from.type_);
  if (from.has_tag()) {
    _internal_mutable_tag()->::mytag::MergeFrom(from._internal_tag());
  }
  if (from.len() != 0) {
    _internal_set_len(from._internal_len());
  }
}

void mymsg::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mymsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void mymsg::CopyFrom(const mymsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mymsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool mymsg::IsInitialized() const {
  return true;
}

void mymsg::InternalSwap(mymsg* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  type_.InternalSwap(&other->type_);
  swap(tag_, other->tag_);
  swap(len_, other->len_);
}

::PROTOBUF_NAMESPACE_ID::Metadata mymsg::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mytag* Arena::CreateMaybeMessage< ::mytag >(Arena* arena) {
  return Arena::CreateInternal< ::mytag >(arena);
}
template<> PROTOBUF_NOINLINE ::mymsg* Arena::CreateMaybeMessage< ::mymsg >(Arena* arena) {
  return Arena::CreateInternal< ::mymsg >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>