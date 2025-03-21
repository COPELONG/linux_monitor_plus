// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: net_info.proto

#include "net_info.pb.h"

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
namespace monitor {
namespace proto {
class NetInfoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<NetInfo> _instance;
} _NetInfo_default_instance_;
}  // namespace proto
}  // namespace monitor
static void InitDefaultsscc_info_NetInfo_net_5finfo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::monitor::proto::_NetInfo_default_instance_;
    new (ptr) ::monitor::proto::NetInfo();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_NetInfo_net_5finfo_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_NetInfo_net_5finfo_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_net_5finfo_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_net_5finfo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_net_5finfo_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_net_5finfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::monitor::proto::NetInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::monitor::proto::NetInfo, name_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::NetInfo, send_rate_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::NetInfo, rcv_rate_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::NetInfo, send_packets_rate_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::NetInfo, rcv_packets_rate_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::monitor::proto::NetInfo)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::monitor::proto::_NetInfo_default_instance_),
};

const char descriptor_table_protodef_net_5finfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016net_info.proto\022\rmonitor.proto\"q\n\007NetIn"
  "fo\022\014\n\004name\030\001 \001(\t\022\021\n\tsend_rate\030\002 \001(\002\022\020\n\010r"
  "cv_rate\030\003 \001(\002\022\031\n\021send_packets_rate\030\004 \001(\002"
  "\022\030\n\020rcv_packets_rate\030\005 \001(\002B\003\200\001\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_net_5finfo_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_net_5finfo_2eproto_sccs[1] = {
  &scc_info_NetInfo_net_5finfo_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_net_5finfo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_net_5finfo_2eproto = {
  false, false, descriptor_table_protodef_net_5finfo_2eproto, "net_info.proto", 159,
  &descriptor_table_net_5finfo_2eproto_once, descriptor_table_net_5finfo_2eproto_sccs, descriptor_table_net_5finfo_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_net_5finfo_2eproto::offsets,
  file_level_metadata_net_5finfo_2eproto, 1, file_level_enum_descriptors_net_5finfo_2eproto, file_level_service_descriptors_net_5finfo_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_net_5finfo_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_net_5finfo_2eproto)), true);
namespace monitor {
namespace proto {

// ===================================================================

class NetInfo::_Internal {
 public:
};

NetInfo::NetInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:monitor.proto.NetInfo)
}
NetInfo::NetInfo(const NetInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(), 
      GetArena());
  }
  ::memcpy(&send_rate_, &from.send_rate_,
    static_cast<size_t>(reinterpret_cast<char*>(&rcv_packets_rate_) -
    reinterpret_cast<char*>(&send_rate_)) + sizeof(rcv_packets_rate_));
  // @@protoc_insertion_point(copy_constructor:monitor.proto.NetInfo)
}

void NetInfo::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_NetInfo_net_5finfo_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&send_rate_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&rcv_packets_rate_) -
      reinterpret_cast<char*>(&send_rate_)) + sizeof(rcv_packets_rate_));
}

NetInfo::~NetInfo() {
  // @@protoc_insertion_point(destructor:monitor.proto.NetInfo)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void NetInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void NetInfo::ArenaDtor(void* object) {
  NetInfo* _this = reinterpret_cast< NetInfo* >(object);
  (void)_this;
}
void NetInfo::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void NetInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const NetInfo& NetInfo::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_NetInfo_net_5finfo_2eproto.base);
  return *internal_default_instance();
}


void NetInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:monitor.proto.NetInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmpty();
  ::memset(&send_rate_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&rcv_packets_rate_) -
      reinterpret_cast<char*>(&send_rate_)) + sizeof(rcv_packets_rate_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* NetInfo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "monitor.proto.NetInfo.name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // float send_rate = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          send_rate_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float rcv_rate = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29)) {
          rcv_rate_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float send_packets_rate = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 37)) {
          send_packets_rate_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float rcv_packets_rate = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 45)) {
          rcv_packets_rate_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
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

::PROTOBUF_NAMESPACE_ID::uint8* NetInfo::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:monitor.proto.NetInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "monitor.proto.NetInfo.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // float send_rate = 2;
  if (!(this->send_rate() <= 0 && this->send_rate() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_send_rate(), target);
  }

  // float rcv_rate = 3;
  if (!(this->rcv_rate() <= 0 && this->rcv_rate() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->_internal_rcv_rate(), target);
  }

  // float send_packets_rate = 4;
  if (!(this->send_packets_rate() <= 0 && this->send_packets_rate() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(4, this->_internal_send_packets_rate(), target);
  }

  // float rcv_packets_rate = 5;
  if (!(this->rcv_packets_rate() <= 0 && this->rcv_packets_rate() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(5, this->_internal_rcv_packets_rate(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:monitor.proto.NetInfo)
  return target;
}

size_t NetInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:monitor.proto.NetInfo)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // float send_rate = 2;
  if (!(this->send_rate() <= 0 && this->send_rate() >= 0)) {
    total_size += 1 + 4;
  }

  // float rcv_rate = 3;
  if (!(this->rcv_rate() <= 0 && this->rcv_rate() >= 0)) {
    total_size += 1 + 4;
  }

  // float send_packets_rate = 4;
  if (!(this->send_packets_rate() <= 0 && this->send_packets_rate() >= 0)) {
    total_size += 1 + 4;
  }

  // float rcv_packets_rate = 5;
  if (!(this->rcv_packets_rate() <= 0 && this->rcv_packets_rate() >= 0)) {
    total_size += 1 + 4;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void NetInfo::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:monitor.proto.NetInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const NetInfo* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<NetInfo>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:monitor.proto.NetInfo)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:monitor.proto.NetInfo)
    MergeFrom(*source);
  }
}

void NetInfo::MergeFrom(const NetInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:monitor.proto.NetInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {
    _internal_set_name(from._internal_name());
  }
  if (!(from.send_rate() <= 0 && from.send_rate() >= 0)) {
    _internal_set_send_rate(from._internal_send_rate());
  }
  if (!(from.rcv_rate() <= 0 && from.rcv_rate() >= 0)) {
    _internal_set_rcv_rate(from._internal_rcv_rate());
  }
  if (!(from.send_packets_rate() <= 0 && from.send_packets_rate() >= 0)) {
    _internal_set_send_packets_rate(from._internal_send_packets_rate());
  }
  if (!(from.rcv_packets_rate() <= 0 && from.rcv_packets_rate() >= 0)) {
    _internal_set_rcv_packets_rate(from._internal_rcv_packets_rate());
  }
}

void NetInfo::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:monitor.proto.NetInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NetInfo::CopyFrom(const NetInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:monitor.proto.NetInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NetInfo::IsInitialized() const {
  return true;
}

void NetInfo::InternalSwap(NetInfo* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(NetInfo, rcv_packets_rate_)
      + sizeof(NetInfo::rcv_packets_rate_)
      - PROTOBUF_FIELD_OFFSET(NetInfo, send_rate_)>(
          reinterpret_cast<char*>(&send_rate_),
          reinterpret_cast<char*>(&other->send_rate_));
}

::PROTOBUF_NAMESPACE_ID::Metadata NetInfo::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace monitor
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::monitor::proto::NetInfo* Arena::CreateMaybeMessage< ::monitor::proto::NetInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::monitor::proto::NetInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
