// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mem_info.proto

#include "mem_info.pb.h"

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
class MemInfoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MemInfo> _instance;
} _MemInfo_default_instance_;
}  // namespace proto
}  // namespace monitor
static void InitDefaultsscc_info_MemInfo_mem_5finfo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::monitor::proto::_MemInfo_default_instance_;
    new (ptr) ::monitor::proto::MemInfo();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_MemInfo_mem_5finfo_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_MemInfo_mem_5finfo_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mem_5finfo_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mem_5finfo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mem_5finfo_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_mem_5finfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, total_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, free_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, avail_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, buffers_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, cached_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, swap_cached_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, active_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, inactive_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, active_anon_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, inactive_anon_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, active_file_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, inactive_file_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, dirty_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, writeback_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, anon_pages_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, mapped_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, kreclaimable_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, sreclaimable_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, sunreclaim_),
  PROTOBUF_FIELD_OFFSET(::monitor::proto::MemInfo, used_percent_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::monitor::proto::MemInfo)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::monitor::proto::_MemInfo_default_instance_),
};

const char descriptor_table_protodef_mem_5finfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016mem_info.proto\022\rmonitor.proto\"\201\003\n\007MemI"
  "nfo\022\r\n\005total\030\001 \001(\002\022\014\n\004free\030\002 \001(\002\022\r\n\005avai"
  "l\030\003 \001(\002\022\017\n\007buffers\030\004 \001(\002\022\016\n\006cached\030\005 \001(\002"
  "\022\023\n\013swap_cached\030\006 \001(\002\022\016\n\006active\030\007 \001(\002\022\020\n"
  "\010inactive\030\010 \001(\002\022\023\n\013active_anon\030\t \001(\002\022\025\n\r"
  "inactive_anon\030\n \001(\002\022\023\n\013active_file\030\013 \001(\002"
  "\022\025\n\rinactive_file\030\014 \001(\002\022\r\n\005dirty\030\r \001(\002\022\021"
  "\n\twriteback\030\016 \001(\002\022\022\n\nanon_pages\030\017 \001(\002\022\016\n"
  "\006mapped\030\020 \001(\002\022\024\n\014kReclaimable\030\021 \001(\002\022\024\n\014s"
  "Reclaimable\030\022 \001(\002\022\022\n\nsUnreclaim\030\023 \001(\002\022\024\n"
  "\014used_percent\030\037 \001(\002B\003\200\001\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_mem_5finfo_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_mem_5finfo_2eproto_sccs[1] = {
  &scc_info_MemInfo_mem_5finfo_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mem_5finfo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mem_5finfo_2eproto = {
  false, false, descriptor_table_protodef_mem_5finfo_2eproto, "mem_info.proto", 432,
  &descriptor_table_mem_5finfo_2eproto_once, descriptor_table_mem_5finfo_2eproto_sccs, descriptor_table_mem_5finfo_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_mem_5finfo_2eproto::offsets,
  file_level_metadata_mem_5finfo_2eproto, 1, file_level_enum_descriptors_mem_5finfo_2eproto, file_level_service_descriptors_mem_5finfo_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_mem_5finfo_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_mem_5finfo_2eproto)), true);
namespace monitor {
namespace proto {

// ===================================================================

class MemInfo::_Internal {
 public:
};

MemInfo::MemInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:monitor.proto.MemInfo)
}
MemInfo::MemInfo(const MemInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&total_, &from.total_,
    static_cast<size_t>(reinterpret_cast<char*>(&used_percent_) -
    reinterpret_cast<char*>(&total_)) + sizeof(used_percent_));
  // @@protoc_insertion_point(copy_constructor:monitor.proto.MemInfo)
}

void MemInfo::SharedCtor() {
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&total_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&used_percent_) -
      reinterpret_cast<char*>(&total_)) + sizeof(used_percent_));
}

MemInfo::~MemInfo() {
  // @@protoc_insertion_point(destructor:monitor.proto.MemInfo)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void MemInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void MemInfo::ArenaDtor(void* object) {
  MemInfo* _this = reinterpret_cast< MemInfo* >(object);
  (void)_this;
}
void MemInfo::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void MemInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MemInfo& MemInfo::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MemInfo_mem_5finfo_2eproto.base);
  return *internal_default_instance();
}


void MemInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:monitor.proto.MemInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&total_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&used_percent_) -
      reinterpret_cast<char*>(&total_)) + sizeof(used_percent_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MemInfo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // float total = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13)) {
          total_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float free = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          free_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float avail = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29)) {
          avail_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float buffers = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 37)) {
          buffers_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float cached = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 45)) {
          cached_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float swap_cached = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 53)) {
          swap_cached_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float active = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 61)) {
          active_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float inactive = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 69)) {
          inactive_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float active_anon = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 77)) {
          active_anon_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float inactive_anon = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 85)) {
          inactive_anon_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float active_file = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 93)) {
          active_file_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float inactive_file = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 101)) {
          inactive_file_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float dirty = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 109)) {
          dirty_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float writeback = 14;
      case 14:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 117)) {
          writeback_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float anon_pages = 15;
      case 15:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 125)) {
          anon_pages_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float mapped = 16;
      case 16:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 133)) {
          mapped_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float kReclaimable = 17;
      case 17:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 141)) {
          kreclaimable_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float sReclaimable = 18;
      case 18:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 149)) {
          sreclaimable_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float sUnreclaim = 19;
      case 19:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 157)) {
          sunreclaim_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float used_percent = 31;
      case 31:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 253)) {
          used_percent_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* MemInfo::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:monitor.proto.MemInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float total = 1;
  if (!(this->total() <= 0 && this->total() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(1, this->_internal_total(), target);
  }

  // float free = 2;
  if (!(this->free() <= 0 && this->free() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_free(), target);
  }

  // float avail = 3;
  if (!(this->avail() <= 0 && this->avail() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->_internal_avail(), target);
  }

  // float buffers = 4;
  if (!(this->buffers() <= 0 && this->buffers() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(4, this->_internal_buffers(), target);
  }

  // float cached = 5;
  if (!(this->cached() <= 0 && this->cached() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(5, this->_internal_cached(), target);
  }

  // float swap_cached = 6;
  if (!(this->swap_cached() <= 0 && this->swap_cached() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(6, this->_internal_swap_cached(), target);
  }

  // float active = 7;
  if (!(this->active() <= 0 && this->active() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(7, this->_internal_active(), target);
  }

  // float inactive = 8;
  if (!(this->inactive() <= 0 && this->inactive() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(8, this->_internal_inactive(), target);
  }

  // float active_anon = 9;
  if (!(this->active_anon() <= 0 && this->active_anon() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(9, this->_internal_active_anon(), target);
  }

  // float inactive_anon = 10;
  if (!(this->inactive_anon() <= 0 && this->inactive_anon() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(10, this->_internal_inactive_anon(), target);
  }

  // float active_file = 11;
  if (!(this->active_file() <= 0 && this->active_file() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(11, this->_internal_active_file(), target);
  }

  // float inactive_file = 12;
  if (!(this->inactive_file() <= 0 && this->inactive_file() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(12, this->_internal_inactive_file(), target);
  }

  // float dirty = 13;
  if (!(this->dirty() <= 0 && this->dirty() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(13, this->_internal_dirty(), target);
  }

  // float writeback = 14;
  if (!(this->writeback() <= 0 && this->writeback() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(14, this->_internal_writeback(), target);
  }

  // float anon_pages = 15;
  if (!(this->anon_pages() <= 0 && this->anon_pages() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(15, this->_internal_anon_pages(), target);
  }

  // float mapped = 16;
  if (!(this->mapped() <= 0 && this->mapped() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(16, this->_internal_mapped(), target);
  }

  // float kReclaimable = 17;
  if (!(this->kreclaimable() <= 0 && this->kreclaimable() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(17, this->_internal_kreclaimable(), target);
  }

  // float sReclaimable = 18;
  if (!(this->sreclaimable() <= 0 && this->sreclaimable() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(18, this->_internal_sreclaimable(), target);
  }

  // float sUnreclaim = 19;
  if (!(this->sunreclaim() <= 0 && this->sunreclaim() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(19, this->_internal_sunreclaim(), target);
  }

  // float used_percent = 31;
  if (!(this->used_percent() <= 0 && this->used_percent() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(31, this->_internal_used_percent(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:monitor.proto.MemInfo)
  return target;
}

size_t MemInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:monitor.proto.MemInfo)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float total = 1;
  if (!(this->total() <= 0 && this->total() >= 0)) {
    total_size += 1 + 4;
  }

  // float free = 2;
  if (!(this->free() <= 0 && this->free() >= 0)) {
    total_size += 1 + 4;
  }

  // float avail = 3;
  if (!(this->avail() <= 0 && this->avail() >= 0)) {
    total_size += 1 + 4;
  }

  // float buffers = 4;
  if (!(this->buffers() <= 0 && this->buffers() >= 0)) {
    total_size += 1 + 4;
  }

  // float cached = 5;
  if (!(this->cached() <= 0 && this->cached() >= 0)) {
    total_size += 1 + 4;
  }

  // float swap_cached = 6;
  if (!(this->swap_cached() <= 0 && this->swap_cached() >= 0)) {
    total_size += 1 + 4;
  }

  // float active = 7;
  if (!(this->active() <= 0 && this->active() >= 0)) {
    total_size += 1 + 4;
  }

  // float inactive = 8;
  if (!(this->inactive() <= 0 && this->inactive() >= 0)) {
    total_size += 1 + 4;
  }

  // float active_anon = 9;
  if (!(this->active_anon() <= 0 && this->active_anon() >= 0)) {
    total_size += 1 + 4;
  }

  // float inactive_anon = 10;
  if (!(this->inactive_anon() <= 0 && this->inactive_anon() >= 0)) {
    total_size += 1 + 4;
  }

  // float active_file = 11;
  if (!(this->active_file() <= 0 && this->active_file() >= 0)) {
    total_size += 1 + 4;
  }

  // float inactive_file = 12;
  if (!(this->inactive_file() <= 0 && this->inactive_file() >= 0)) {
    total_size += 1 + 4;
  }

  // float dirty = 13;
  if (!(this->dirty() <= 0 && this->dirty() >= 0)) {
    total_size += 1 + 4;
  }

  // float writeback = 14;
  if (!(this->writeback() <= 0 && this->writeback() >= 0)) {
    total_size += 1 + 4;
  }

  // float anon_pages = 15;
  if (!(this->anon_pages() <= 0 && this->anon_pages() >= 0)) {
    total_size += 1 + 4;
  }

  // float mapped = 16;
  if (!(this->mapped() <= 0 && this->mapped() >= 0)) {
    total_size += 2 + 4;
  }

  // float kReclaimable = 17;
  if (!(this->kreclaimable() <= 0 && this->kreclaimable() >= 0)) {
    total_size += 2 + 4;
  }

  // float sReclaimable = 18;
  if (!(this->sreclaimable() <= 0 && this->sreclaimable() >= 0)) {
    total_size += 2 + 4;
  }

  // float sUnreclaim = 19;
  if (!(this->sunreclaim() <= 0 && this->sunreclaim() >= 0)) {
    total_size += 2 + 4;
  }

  // float used_percent = 31;
  if (!(this->used_percent() <= 0 && this->used_percent() >= 0)) {
    total_size += 2 + 4;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MemInfo::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:monitor.proto.MemInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const MemInfo* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MemInfo>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:monitor.proto.MemInfo)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:monitor.proto.MemInfo)
    MergeFrom(*source);
  }
}

void MemInfo::MergeFrom(const MemInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:monitor.proto.MemInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!(from.total() <= 0 && from.total() >= 0)) {
    _internal_set_total(from._internal_total());
  }
  if (!(from.free() <= 0 && from.free() >= 0)) {
    _internal_set_free(from._internal_free());
  }
  if (!(from.avail() <= 0 && from.avail() >= 0)) {
    _internal_set_avail(from._internal_avail());
  }
  if (!(from.buffers() <= 0 && from.buffers() >= 0)) {
    _internal_set_buffers(from._internal_buffers());
  }
  if (!(from.cached() <= 0 && from.cached() >= 0)) {
    _internal_set_cached(from._internal_cached());
  }
  if (!(from.swap_cached() <= 0 && from.swap_cached() >= 0)) {
    _internal_set_swap_cached(from._internal_swap_cached());
  }
  if (!(from.active() <= 0 && from.active() >= 0)) {
    _internal_set_active(from._internal_active());
  }
  if (!(from.inactive() <= 0 && from.inactive() >= 0)) {
    _internal_set_inactive(from._internal_inactive());
  }
  if (!(from.active_anon() <= 0 && from.active_anon() >= 0)) {
    _internal_set_active_anon(from._internal_active_anon());
  }
  if (!(from.inactive_anon() <= 0 && from.inactive_anon() >= 0)) {
    _internal_set_inactive_anon(from._internal_inactive_anon());
  }
  if (!(from.active_file() <= 0 && from.active_file() >= 0)) {
    _internal_set_active_file(from._internal_active_file());
  }
  if (!(from.inactive_file() <= 0 && from.inactive_file() >= 0)) {
    _internal_set_inactive_file(from._internal_inactive_file());
  }
  if (!(from.dirty() <= 0 && from.dirty() >= 0)) {
    _internal_set_dirty(from._internal_dirty());
  }
  if (!(from.writeback() <= 0 && from.writeback() >= 0)) {
    _internal_set_writeback(from._internal_writeback());
  }
  if (!(from.anon_pages() <= 0 && from.anon_pages() >= 0)) {
    _internal_set_anon_pages(from._internal_anon_pages());
  }
  if (!(from.mapped() <= 0 && from.mapped() >= 0)) {
    _internal_set_mapped(from._internal_mapped());
  }
  if (!(from.kreclaimable() <= 0 && from.kreclaimable() >= 0)) {
    _internal_set_kreclaimable(from._internal_kreclaimable());
  }
  if (!(from.sreclaimable() <= 0 && from.sreclaimable() >= 0)) {
    _internal_set_sreclaimable(from._internal_sreclaimable());
  }
  if (!(from.sunreclaim() <= 0 && from.sunreclaim() >= 0)) {
    _internal_set_sunreclaim(from._internal_sunreclaim());
  }
  if (!(from.used_percent() <= 0 && from.used_percent() >= 0)) {
    _internal_set_used_percent(from._internal_used_percent());
  }
}

void MemInfo::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:monitor.proto.MemInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MemInfo::CopyFrom(const MemInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:monitor.proto.MemInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MemInfo::IsInitialized() const {
  return true;
}

void MemInfo::InternalSwap(MemInfo* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MemInfo, used_percent_)
      + sizeof(MemInfo::used_percent_)
      - PROTOBUF_FIELD_OFFSET(MemInfo, total_)>(
          reinterpret_cast<char*>(&total_),
          reinterpret_cast<char*>(&other->total_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MemInfo::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace monitor
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::monitor::proto::MemInfo* Arena::CreateMaybeMessage< ::monitor::proto::MemInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::monitor::proto::MemInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
