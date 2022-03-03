// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: acme/weather/v1/weather.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers_RuntimeSupport.h>
#else
 #import "GPBProtocolBuffers_RuntimeSupport.h"
#endif

#import <stdatomic.h>

#import "acme/weather/v1/Weather.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#pragma mark - Objective C Class declarations
// Forward declarations of Objective C classes that we can use as
// static values in struct initializers.
// We don't use [Foo class] because it is not a static value.
GPBObjCClassDeclaration(AWXLocation);

#pragma mark - AWXWeatherRoot

@implementation AWXWeatherRoot

// No extensions in the file and no imports, so no need to generate
// +extensionRegistry.

@end

#pragma mark - AWXWeatherRoot_FileDescriptor

static GPBFileDescriptor *AWXWeatherRoot_FileDescriptor(void) {
  // This is called by +initialize so there is no need to worry
  // about thread safety of the singleton.
  static GPBFileDescriptor *descriptor = NULL;
  if (!descriptor) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@"acme.weather.v1"
                                                 objcPrefix:@"AWX"
                                                     syntax:GPBFileSyntaxProto3];
  }
  return descriptor;
}

#pragma mark - Enum AWXCondition

GPBEnumDescriptor *AWXCondition_EnumDescriptor(void) {
  static _Atomic(GPBEnumDescriptor*) descriptor = nil;
  if (!descriptor) {
    static const char *valueNames =
        "ConditionUnknown\000ConditionRainy\000Conditio"
        "nSunny\000ConditionCloudy\000";
    static const int32_t values[] = {
        AWXCondition_ConditionUnknown,
        AWXCondition_ConditionRainy,
        AWXCondition_ConditionSunny,
        AWXCondition_ConditionCloudy,
    };
    GPBEnumDescriptor *worker =
        [GPBEnumDescriptor allocDescriptorForName:GPBNSStringifySymbol(AWXCondition)
                                       valueNames:valueNames
                                           values:values
                                            count:(uint32_t)(sizeof(values) / sizeof(int32_t))
                                     enumVerifier:AWXCondition_IsValidValue];
    GPBEnumDescriptor *expected = nil;
    if (!atomic_compare_exchange_strong(&descriptor, &expected, worker)) {
      [worker release];
    }
  }
  return descriptor;
}

BOOL AWXCondition_IsValidValue(int32_t value__) {
  switch (value__) {
    case AWXCondition_ConditionUnknown:
    case AWXCondition_ConditionRainy:
    case AWXCondition_ConditionSunny:
    case AWXCondition_ConditionCloudy:
      return YES;
    default:
      return NO;
  }
}

#pragma mark - AWXLocation

@implementation AWXLocation

@dynamic latitude;
@dynamic longitude;

typedef struct AWXLocation__storage_ {
  uint32_t _has_storage_[1];
  float latitude;
  float longitude;
} AWXLocation__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "latitude",
        .dataTypeSpecific.clazz = Nil,
        .number = AWXLocation_FieldNumber_Latitude,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(AWXLocation__storage_, latitude),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeFloat,
      },
      {
        .name = "longitude",
        .dataTypeSpecific.clazz = Nil,
        .number = AWXLocation_FieldNumber_Longitude,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(AWXLocation__storage_, longitude),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeFloat,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[AWXLocation class]
                                     rootClass:[AWXWeatherRoot class]
                                          file:AWXWeatherRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(AWXLocation__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - AWXWeather

@implementation AWXWeather

@dynamic hasLocation, location;
@dynamic temperature;
@dynamic windSpeed;
@dynamic condition;

typedef struct AWXWeather__storage_ {
  uint32_t _has_storage_[1];
  float temperature;
  float windSpeed;
  AWXCondition condition;
  AWXLocation *location;
} AWXWeather__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "location",
        .dataTypeSpecific.clazz = GPBObjCClass(AWXLocation),
        .number = AWXWeather_FieldNumber_Location,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(AWXWeather__storage_, location),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "temperature",
        .dataTypeSpecific.clazz = Nil,
        .number = AWXWeather_FieldNumber_Temperature,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(AWXWeather__storage_, temperature),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeFloat,
      },
      {
        .name = "windSpeed",
        .dataTypeSpecific.clazz = Nil,
        .number = AWXWeather_FieldNumber_WindSpeed,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(AWXWeather__storage_, windSpeed),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeFloat,
      },
      {
        .name = "condition",
        .dataTypeSpecific.enumDescFunc = AWXCondition_EnumDescriptor,
        .number = AWXWeather_FieldNumber_Condition,
        .hasIndex = 3,
        .offset = (uint32_t)offsetof(AWXWeather__storage_, condition),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldHasEnumDescriptor | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeEnum,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[AWXWeather class]
                                     rootClass:[AWXWeatherRoot class]
                                          file:AWXWeatherRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(AWXWeather__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

int32_t AWXWeather_Condition_RawValue(AWXWeather *message) {
  GPBDescriptor *descriptor = [AWXWeather descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:AWXWeather_FieldNumber_Condition];
  return GPBGetMessageRawEnumField(message, field);
}

void SetAWXWeather_Condition_RawValue(AWXWeather *message, int32_t value) {
  GPBDescriptor *descriptor = [AWXWeather descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:AWXWeather_FieldNumber_Condition];
  GPBSetMessageRawEnumField(message, field, value);
}


#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)