// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: acme/weather/v1/weather.proto

#include "acme/weather/v1/weather.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG
namespace acme {
namespace weather {
namespace v1 {
constexpr Location::Location(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : latitude_(0)
  , longitude_(0){}
struct LocationDefaultTypeInternal {
  constexpr LocationDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~LocationDefaultTypeInternal() {}
  union {
    Location _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT LocationDefaultTypeInternal _Location_default_instance_;
constexpr Weather::Weather(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : location_(nullptr)
  , temperature_(0)
  , wind_speed_(0)
  , condition_(0)
{}
struct WeatherDefaultTypeInternal {
  constexpr WeatherDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~WeatherDefaultTypeInternal() {}
  union {
    Weather _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT WeatherDefaultTypeInternal _Weather_default_instance_;
}  // namespace v1
}  // namespace weather
}  // namespace acme
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_acme_2fweather_2fv1_2fweather_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_acme_2fweather_2fv1_2fweather_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_acme_2fweather_2fv1_2fweather_2eproto = nullptr;

const uint32_t TableStruct_acme_2fweather_2fv1_2fweather_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::acme::weather::v1::Location, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::acme::weather::v1::Location, latitude_),
  PROTOBUF_FIELD_OFFSET(::acme::weather::v1::Location, longitude_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::acme::weather::v1::Weather, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::acme::weather::v1::Weather, location_),
  PROTOBUF_FIELD_OFFSET(::acme::weather::v1::Weather, temperature_),
  PROTOBUF_FIELD_OFFSET(::acme::weather::v1::Weather, wind_speed_),
  PROTOBUF_FIELD_OFFSET(::acme::weather::v1::Weather, condition_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::acme::weather::v1::Location)},
  { 8, -1, -1, sizeof(::acme::weather::v1::Weather)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::acme::weather::v1::_Location_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::acme::weather::v1::_Weather_default_instance_),
};

const char descriptor_table_protodef_acme_2fweather_2fv1_2fweather_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035acme/weather/v1/weather.proto\022\017acme.we"
  "ather.v1\"D\n\010Location\022\032\n\010latitude\030\001 \001(\002R\010"
  "latitude\022\034\n\tlongitude\030\002 \001(\002R\tlongitude\"\273"
  "\001\n\007Weather\0225\n\010location\030\001 \001(\0132\031.acme.weat"
  "her.v1.LocationR\010location\022 \n\013temperature"
  "\030\002 \001(\002R\013temperature\022\035\n\nwind_speed\030\003 \001(\002R"
  "\twindSpeed\0228\n\tcondition\030\004 \001(\0162\032.acme.wea"
  "ther.v1.ConditionR\tcondition*b\n\tConditio"
  "n\022\025\n\021CONDITION_UNKNOWN\020\000\022\023\n\017CONDITION_RA"
  "INY\020\001\022\023\n\017CONDITION_SUNNY\020\002\022\024\n\020CONDITION_"
  "CLOUDY\020\003B\266\001\n\022io.acme.weather.v1B\014Weather"
  "ProtoH\002Z4github.com/acme/weather/v1/acme"
  "/weather/v1;weatherv1\242\002\003AWX\252\002\017Acme.Weath"
  "er.V1\312\002\017Acme\\Weather\\V1\342\002\033Acme\\Weather\\V"
  "1\\GPBMetadata\352\002\021Acme::Weather::V1b\006proto"
  "3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_acme_2fweather_2fv1_2fweather_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_acme_2fweather_2fv1_2fweather_2eproto = {
  false, false, 601, descriptor_table_protodef_acme_2fweather_2fv1_2fweather_2eproto, "acme/weather/v1/weather.proto", 
  &descriptor_table_acme_2fweather_2fv1_2fweather_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_acme_2fweather_2fv1_2fweather_2eproto::offsets,
  file_level_metadata_acme_2fweather_2fv1_2fweather_2eproto, file_level_enum_descriptors_acme_2fweather_2fv1_2fweather_2eproto, file_level_service_descriptors_acme_2fweather_2fv1_2fweather_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_acme_2fweather_2fv1_2fweather_2eproto_getter() {
  return &descriptor_table_acme_2fweather_2fv1_2fweather_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_acme_2fweather_2fv1_2fweather_2eproto(&descriptor_table_acme_2fweather_2fv1_2fweather_2eproto);
namespace acme {
namespace weather {
namespace v1 {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Condition_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_acme_2fweather_2fv1_2fweather_2eproto);
  return file_level_enum_descriptors_acme_2fweather_2fv1_2fweather_2eproto[0];
}
bool Condition_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class Location::_Internal {
 public:
};

Location::Location(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:acme.weather.v1.Location)
}
Location::Location(const Location& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&latitude_, &from.latitude_,
    static_cast<size_t>(reinterpret_cast<char*>(&longitude_) -
    reinterpret_cast<char*>(&latitude_)) + sizeof(longitude_));
  // @@protoc_insertion_point(copy_constructor:acme.weather.v1.Location)
}

inline void Location::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&latitude_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&longitude_) -
    reinterpret_cast<char*>(&latitude_)) + sizeof(longitude_));
}

Location::~Location() {
  // @@protoc_insertion_point(destructor:acme.weather.v1.Location)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Location::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Location::ArenaDtor(void* object) {
  Location* _this = reinterpret_cast< Location* >(object);
  (void)_this;
}
void Location::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Location::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Location::InternalSwap(Location* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::PROTOBUF_NAMESPACE_ID::Metadata Location::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_acme_2fweather_2fv1_2fweather_2eproto_getter, &descriptor_table_acme_2fweather_2fv1_2fweather_2eproto_once,
      file_level_metadata_acme_2fweather_2fv1_2fweather_2eproto[0]);
}

// ===================================================================

class Weather::_Internal {
 public:
  static const ::acme::weather::v1::Location& location(const Weather* msg);
};

const ::acme::weather::v1::Location&
Weather::_Internal::location(const Weather* msg) {
  return *msg->location_;
}
Weather::Weather(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:acme.weather.v1.Weather)
}
Weather::Weather(const Weather& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_location()) {
    location_ = new ::acme::weather::v1::Location(*from.location_);
  } else {
    location_ = nullptr;
  }
  ::memcpy(&temperature_, &from.temperature_,
    static_cast<size_t>(reinterpret_cast<char*>(&condition_) -
    reinterpret_cast<char*>(&temperature_)) + sizeof(condition_));
  // @@protoc_insertion_point(copy_constructor:acme.weather.v1.Weather)
}

inline void Weather::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&location_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&condition_) -
    reinterpret_cast<char*>(&location_)) + sizeof(condition_));
}

Weather::~Weather() {
  // @@protoc_insertion_point(destructor:acme.weather.v1.Weather)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Weather::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete location_;
}

void Weather::ArenaDtor(void* object) {
  Weather* _this = reinterpret_cast< Weather* >(object);
  (void)_this;
}
void Weather::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Weather::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Weather::InternalSwap(Weather* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::PROTOBUF_NAMESPACE_ID::Metadata Weather::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_acme_2fweather_2fv1_2fweather_2eproto_getter, &descriptor_table_acme_2fweather_2fv1_2fweather_2eproto_once,
      file_level_metadata_acme_2fweather_2fv1_2fweather_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace weather
}  // namespace acme
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::acme::weather::v1::Location* Arena::CreateMaybeMessage< ::acme::weather::v1::Location >(Arena* arena) {
  return Arena::CreateMessageInternal< ::acme::weather::v1::Location >(arena);
}
template<> PROTOBUF_NOINLINE ::acme::weather::v1::Weather* Arena::CreateMaybeMessage< ::acme::weather::v1::Weather >(Arena* arena) {
  return Arena::CreateMessageInternal< ::acme::weather::v1::Weather >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>