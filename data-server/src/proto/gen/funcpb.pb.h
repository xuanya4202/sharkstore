// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: funcpb.proto

#ifndef PROTOBUF_funcpb_2eproto__INCLUDED
#define PROTOBUF_funcpb_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
namespace funcpb {
}  // namespace funcpb

namespace funcpb {

namespace protobuf_funcpb_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_funcpb_2eproto

enum FunctionID {
  kFuncHeartbeat = 0,
  kFuncRawGet = 1,
  kFuncRawPut = 2,
  kFuncRawDelete = 3,
  kFuncRawExecute = 4,
  kFuncSelect = 10,
  kFuncInsert = 11,
  kFuncDelete = 12,
  kFuncUpdate = 13,
  KFuncReplace = 14,
  kFuncWatchGet = 50,
  kFuncPureGet = 51,
  kFuncWatchPut = 52,
  kFuncWatchDel = 53,
  kFuncKvSet = 100,
  kFuncKvGet = 101,
  kFuncKvBatchSet = 102,
  kFuncKvBatchGet = 103,
  kFuncKvDel = 104,
  kFuncKvBatchDel = 105,
  kFuncKvRangeDel = 106,
  kFuncKvScan = 107,
  kFuncLock = 200,
  kFuncLockUpdate = 201,
  kFuncUnlock = 202,
  kFuncUnlockForce = 203,
  kFuncCreateRange = 1001,
  kFuncDeleteRange = 1002,
  kFuncRangeTransferLeader = 1003,
  kFuncUpdateRange = 1004,
  kFuncGetPeerInfo = 1005,
  kFuncSetNodeLogLevel = 1006,
  kFuncOfflineRange = 1007,
  kFuncReplaceRange = 1008,
  FunctionID_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  FunctionID_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool FunctionID_IsValid(int value);
const FunctionID FunctionID_MIN = kFuncHeartbeat;
const FunctionID FunctionID_MAX = kFuncReplaceRange;
const int FunctionID_ARRAYSIZE = FunctionID_MAX + 1;

const ::google::protobuf::EnumDescriptor* FunctionID_descriptor();
inline const ::std::string& FunctionID_Name(FunctionID value) {
  return ::google::protobuf::internal::NameOfEnum(
    FunctionID_descriptor(), value);
}
inline bool FunctionID_Parse(
    const ::std::string& name, FunctionID* value) {
  return ::google::protobuf::internal::ParseNamedEnum<FunctionID>(
    FunctionID_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace funcpb

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::funcpb::FunctionID> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::funcpb::FunctionID>() {
  return ::funcpb::FunctionID_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_funcpb_2eproto__INCLUDED
