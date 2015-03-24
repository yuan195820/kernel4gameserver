// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_mset.proto

#ifndef PROTOBUF_google_2fprotobuf_2funittest_5fmset_2eproto__INCLUDED
#define PROTOBUF_google_2fprotobuf_2funittest_5fmset_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_unittest {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fprotobuf_2funittest_5fmset_2eproto();
void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fmset_2eproto();
void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fmset_2eproto();

class TestMessageSet;
class TestMessageSetContainer;
class TestMessageSetExtension1;
class TestMessageSetExtension2;
class RawMessageSet;
class RawMessageSet_Item;

// ===================================================================

class TestMessageSet : public ::google::protobuf::Message {
 public:
  TestMessageSet();
  virtual ~TestMessageSet();

  TestMessageSet(const TestMessageSet& from);

  inline TestMessageSet& operator=(const TestMessageSet& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const TestMessageSet& default_instance();

  void UnsafeArenaSwap(TestMessageSet* other);
  void Swap(TestMessageSet* other);

  // implements Message ----------------------------------------------

  inline TestMessageSet* New() const { return New(NULL); }

  TestMessageSet* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TestMessageSet& from);
  void MergeFrom(const TestMessageSet& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TestMessageSet* other);
  protected:
  explicit TestMessageSet(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(TestMessageSet)
  // @@protoc_insertion_point(class_scope:protobuf_unittest.TestMessageSet)
 private:

  ::google::protobuf::internal::ExtensionSet _extensions_;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_google_2fprotobuf_2funittest_5fmset_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fmset_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fmset_2eproto();

  void InitAsDefaultInstance();
  static TestMessageSet* default_instance_;
};
// -------------------------------------------------------------------

class TestMessageSetContainer : public ::google::protobuf::Message {
 public:
  TestMessageSetContainer();
  virtual ~TestMessageSetContainer();

  TestMessageSetContainer(const TestMessageSetContainer& from);

  inline TestMessageSetContainer& operator=(const TestMessageSetContainer& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const TestMessageSetContainer& default_instance();

  void UnsafeArenaSwap(TestMessageSetContainer* other);
  void Swap(TestMessageSetContainer* other);

  // implements Message ----------------------------------------------

  inline TestMessageSetContainer* New() const { return New(NULL); }

  TestMessageSetContainer* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TestMessageSetContainer& from);
  void MergeFrom(const TestMessageSetContainer& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TestMessageSetContainer* other);
  protected:
  explicit TestMessageSetContainer(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .protobuf_unittest.TestMessageSet message_set = 1;
  bool has_message_set() const;
  void clear_message_set();
  static const int kMessageSetFieldNumber = 1;
  private:
  void _slow_mutable_message_set();
  void _slow_set_allocated_message_set(
      ::google::protobuf::Arena* message_arena, ::protobuf_unittest::TestMessageSet** message_set);
  ::protobuf_unittest::TestMessageSet* _slow_release_message_set();
  public:
  const ::protobuf_unittest::TestMessageSet& message_set() const;
  ::protobuf_unittest::TestMessageSet* mutable_message_set();
  ::protobuf_unittest::TestMessageSet* release_message_set();
  void set_allocated_message_set(::protobuf_unittest::TestMessageSet* message_set);
  ::protobuf_unittest::TestMessageSet* unsafe_arena_release_message_set();
  void unsafe_arena_set_allocated_message_set(
      ::protobuf_unittest::TestMessageSet* message_set);

  // @@protoc_insertion_point(class_scope:protobuf_unittest.TestMessageSetContainer)
 private:
  inline void set_has_message_set();
  inline void clear_has_message_set();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::protobuf_unittest::TestMessageSet* message_set_;
  friend void  protobuf_AddDesc_google_2fprotobuf_2funittest_5fmset_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fmset_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fmset_2eproto();

  void InitAsDefaultInstance();
  static TestMessageSetContainer* default_instance_;
};
// -------------------------------------------------------------------

class TestMessageSetExtension1 : public ::google::protobuf::Message {
 public:
  TestMessageSetExtension1();
  virtual ~TestMessageSetExtension1();

  TestMessageSetExtension1(const TestMessageSetExtension1& from);

  inline TestMessageSetExtension1& operator=(const TestMessageSetExtension1& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const TestMessageSetExtension1& default_instance();

  void UnsafeArenaSwap(TestMessageSetExtension1* other);
  void Swap(TestMessageSetExtension1* other);

  // implements Message ----------------------------------------------

  inline TestMessageSetExtension1* New() const { return New(NULL); }

  TestMessageSetExtension1* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TestMessageSetExtension1& from);
  void MergeFrom(const TestMessageSetExtension1& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TestMessageSetExtension1* other);
  protected:
  explicit TestMessageSetExtension1(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 i = 15;
  bool has_i() const;
  void clear_i();
  static const int kIFieldNumber = 15;
  ::google::protobuf::int32 i() const;
  void set_i(::google::protobuf::int32 value);

  static const int kMessageSetExtensionFieldNumber = 1545008;
  static ::google::protobuf::internal::ExtensionIdentifier< ::protobuf_unittest::TestMessageSet,
      ::google::protobuf::internal::MessageTypeTraits< ::protobuf_unittest::TestMessageSetExtension1 >, 11, false >
    message_set_extension;
  // @@protoc_insertion_point(class_scope:protobuf_unittest.TestMessageSetExtension1)
 private:
  inline void set_has_i();
  inline void clear_has_i();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 i_;
  friend void  protobuf_AddDesc_google_2fprotobuf_2funittest_5fmset_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fmset_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fmset_2eproto();

  void InitAsDefaultInstance();
  static TestMessageSetExtension1* default_instance_;
};
// -------------------------------------------------------------------

class TestMessageSetExtension2 : public ::google::protobuf::Message {
 public:
  TestMessageSetExtension2();
  virtual ~TestMessageSetExtension2();

  TestMessageSetExtension2(const TestMessageSetExtension2& from);

  inline TestMessageSetExtension2& operator=(const TestMessageSetExtension2& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const TestMessageSetExtension2& default_instance();

  void UnsafeArenaSwap(TestMessageSetExtension2* other);
  void Swap(TestMessageSetExtension2* other);

  // implements Message ----------------------------------------------

  inline TestMessageSetExtension2* New() const { return New(NULL); }

  TestMessageSetExtension2* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TestMessageSetExtension2& from);
  void MergeFrom(const TestMessageSetExtension2& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TestMessageSetExtension2* other);
  protected:
  explicit TestMessageSetExtension2(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string str = 25;
  bool has_str() const;
  void clear_str();
  static const int kStrFieldNumber = 25;
  const ::std::string& str() const;
  void set_str(const ::std::string& value);
  void set_str(const char* value);
  void set_str(const char* value, size_t size);
  ::std::string* mutable_str();
  ::std::string* release_str();
  void set_allocated_str(::std::string* str);
  ::std::string* unsafe_arena_release_str();
  void unsafe_arena_set_allocated_str(
      ::std::string* str);

  static const int kMessageSetExtensionFieldNumber = 1547769;
  static ::google::protobuf::internal::ExtensionIdentifier< ::protobuf_unittest::TestMessageSet,
      ::google::protobuf::internal::MessageTypeTraits< ::protobuf_unittest::TestMessageSetExtension2 >, 11, false >
    message_set_extension;
  // @@protoc_insertion_point(class_scope:protobuf_unittest.TestMessageSetExtension2)
 private:
  inline void set_has_str();
  inline void clear_has_str();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr str_;
  friend void  protobuf_AddDesc_google_2fprotobuf_2funittest_5fmset_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fmset_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fmset_2eproto();

  void InitAsDefaultInstance();
  static TestMessageSetExtension2* default_instance_;
};
// -------------------------------------------------------------------

class RawMessageSet_Item : public ::google::protobuf::Message {
 public:
  RawMessageSet_Item();
  virtual ~RawMessageSet_Item();

  RawMessageSet_Item(const RawMessageSet_Item& from);

  inline RawMessageSet_Item& operator=(const RawMessageSet_Item& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const RawMessageSet_Item& default_instance();

  void UnsafeArenaSwap(RawMessageSet_Item* other);
  void Swap(RawMessageSet_Item* other);

  // implements Message ----------------------------------------------

  inline RawMessageSet_Item* New() const { return New(NULL); }

  RawMessageSet_Item* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RawMessageSet_Item& from);
  void MergeFrom(const RawMessageSet_Item& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(RawMessageSet_Item* other);
  protected:
  explicit RawMessageSet_Item(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 type_id = 2;
  bool has_type_id() const;
  void clear_type_id();
  static const int kTypeIdFieldNumber = 2;
  ::google::protobuf::int32 type_id() const;
  void set_type_id(::google::protobuf::int32 value);

  // required bytes message = 3;
  bool has_message() const;
  void clear_message();
  static const int kMessageFieldNumber = 3;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  void set_message(const char* value);
  void set_message(const void* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);
  ::std::string* unsafe_arena_release_message();
  void unsafe_arena_set_allocated_message(
      ::std::string* message);

  // @@protoc_insertion_point(class_scope:protobuf_unittest.RawMessageSet.Item)
 private:
  inline void set_has_type_id();
  inline void clear_has_type_id();
  inline void set_has_message();
  inline void clear_has_message();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  ::google::protobuf::int32 type_id_;
  friend void  protobuf_AddDesc_google_2fprotobuf_2funittest_5fmset_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fmset_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fmset_2eproto();

  void InitAsDefaultInstance();
  static RawMessageSet_Item* default_instance_;
};
// -------------------------------------------------------------------

class RawMessageSet : public ::google::protobuf::Message {
 public:
  RawMessageSet();
  virtual ~RawMessageSet();

  RawMessageSet(const RawMessageSet& from);

  inline RawMessageSet& operator=(const RawMessageSet& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const RawMessageSet& default_instance();

  void UnsafeArenaSwap(RawMessageSet* other);
  void Swap(RawMessageSet* other);

  // implements Message ----------------------------------------------

  inline RawMessageSet* New() const { return New(NULL); }

  RawMessageSet* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RawMessageSet& from);
  void MergeFrom(const RawMessageSet& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(RawMessageSet* other);
  protected:
  explicit RawMessageSet(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef RawMessageSet_Item Item;

  // accessors -------------------------------------------------------

  // repeated group Item = 1 {
  int item_size() const;
  void clear_item();
  static const int kItemFieldNumber = 1;
  const ::protobuf_unittest::RawMessageSet_Item& item(int index) const;
  ::protobuf_unittest::RawMessageSet_Item* mutable_item(int index);
  ::protobuf_unittest::RawMessageSet_Item* add_item();
  const ::google::protobuf::RepeatedPtrField< ::protobuf_unittest::RawMessageSet_Item >&
      item() const;
  ::google::protobuf::RepeatedPtrField< ::protobuf_unittest::RawMessageSet_Item >*
      mutable_item();

  // @@protoc_insertion_point(class_scope:protobuf_unittest.RawMessageSet)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::protobuf_unittest::RawMessageSet_Item > item_;
  friend void  protobuf_AddDesc_google_2fprotobuf_2funittest_5fmset_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fmset_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fmset_2eproto();

  void InitAsDefaultInstance();
  static RawMessageSet* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TestMessageSet

// -------------------------------------------------------------------

// TestMessageSetContainer

// optional .protobuf_unittest.TestMessageSet message_set = 1;
inline bool TestMessageSetContainer::has_message_set() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestMessageSetContainer::set_has_message_set() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TestMessageSetContainer::clear_has_message_set() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TestMessageSetContainer::clear_message_set() {
  if (message_set_ != NULL) message_set_->::protobuf_unittest::TestMessageSet::Clear();
  clear_has_message_set();
}
inline const ::protobuf_unittest::TestMessageSet& TestMessageSetContainer::message_set() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestMessageSetContainer.message_set)
  return message_set_ != NULL ? *message_set_ : *default_instance_->message_set_;
}
inline ::protobuf_unittest::TestMessageSet* TestMessageSetContainer::mutable_message_set() {
  set_has_message_set();
  if (message_set_ == NULL) {
    _slow_mutable_message_set();  }
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestMessageSetContainer.message_set)
  return message_set_;
}
inline ::protobuf_unittest::TestMessageSet* TestMessageSetContainer::release_message_set() {
  clear_has_message_set();
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_message_set();
  } else {
    ::protobuf_unittest::TestMessageSet* temp = message_set_;
    message_set_ = NULL;
    return temp;
  }
}
inline void TestMessageSetContainer::set_allocated_message_set(::protobuf_unittest::TestMessageSet* message_set) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete message_set_;
  }
  if (message_set != NULL) {
    _slow_set_allocated_message_set(message_arena, &message_set);
  }
  message_set_ = message_set;
  if (message_set) {
    set_has_message_set();
  } else {
    clear_has_message_set();
  }
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.TestMessageSetContainer.message_set)
}

// -------------------------------------------------------------------

// TestMessageSetExtension1

// optional int32 i = 15;
inline bool TestMessageSetExtension1::has_i() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestMessageSetExtension1::set_has_i() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TestMessageSetExtension1::clear_has_i() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TestMessageSetExtension1::clear_i() {
  i_ = 0;
  clear_has_i();
}
inline ::google::protobuf::int32 TestMessageSetExtension1::i() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestMessageSetExtension1.i)
  return i_;
}
inline void TestMessageSetExtension1::set_i(::google::protobuf::int32 value) {
  set_has_i();
  i_ = value;
  // @@protoc_insertion_point(field_set:protobuf_unittest.TestMessageSetExtension1.i)
}

// -------------------------------------------------------------------

// TestMessageSetExtension2

// optional string str = 25;
inline bool TestMessageSetExtension2::has_str() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestMessageSetExtension2::set_has_str() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TestMessageSetExtension2::clear_has_str() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TestMessageSetExtension2::clear_str() {
  str_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  clear_has_str();
}
inline const ::std::string& TestMessageSetExtension2::str() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestMessageSetExtension2.str)
  return str_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TestMessageSetExtension2::set_str(const ::std::string& value) {
  set_has_str();
  str_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:protobuf_unittest.TestMessageSetExtension2.str)
}
inline void TestMessageSetExtension2::set_str(const char* value) {
  set_has_str();
  str_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:protobuf_unittest.TestMessageSetExtension2.str)
}
inline void TestMessageSetExtension2::set_str(const char* value,
    size_t size) {
  set_has_str();
  str_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:protobuf_unittest.TestMessageSetExtension2.str)
}
inline ::std::string* TestMessageSetExtension2::mutable_str() {
  set_has_str();
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestMessageSetExtension2.str)
  return str_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* TestMessageSetExtension2::release_str() {
  clear_has_str();
  return str_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* TestMessageSetExtension2::unsafe_arena_release_str() {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  clear_has_str();
  return str_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void TestMessageSetExtension2::set_allocated_str(::std::string* str) {
  if (str != NULL) {
    set_has_str();
  } else {
    clear_has_str();
  }
  str_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), str,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.TestMessageSetExtension2.str)
}
inline void TestMessageSetExtension2::unsafe_arena_set_allocated_str(
    ::std::string* str) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (str != NULL) {
    set_has_str();
  } else {
    clear_has_str();
  }
  set_has_str();
  str_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      str, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.TestMessageSetExtension2.str)
}

// -------------------------------------------------------------------

// RawMessageSet_Item

// required int32 type_id = 2;
inline bool RawMessageSet_Item::has_type_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RawMessageSet_Item::set_has_type_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RawMessageSet_Item::clear_has_type_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RawMessageSet_Item::clear_type_id() {
  type_id_ = 0;
  clear_has_type_id();
}
inline ::google::protobuf::int32 RawMessageSet_Item::type_id() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.RawMessageSet.Item.type_id)
  return type_id_;
}
inline void RawMessageSet_Item::set_type_id(::google::protobuf::int32 value) {
  set_has_type_id();
  type_id_ = value;
  // @@protoc_insertion_point(field_set:protobuf_unittest.RawMessageSet.Item.type_id)
}

// required bytes message = 3;
inline bool RawMessageSet_Item::has_message() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RawMessageSet_Item::set_has_message() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RawMessageSet_Item::clear_has_message() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RawMessageSet_Item::clear_message() {
  message_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  clear_has_message();
}
inline const ::std::string& RawMessageSet_Item::message() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.RawMessageSet.Item.message)
  return message_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RawMessageSet_Item::set_message(const ::std::string& value) {
  set_has_message();
  message_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:protobuf_unittest.RawMessageSet.Item.message)
}
inline void RawMessageSet_Item::set_message(const char* value) {
  set_has_message();
  message_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:protobuf_unittest.RawMessageSet.Item.message)
}
inline void RawMessageSet_Item::set_message(const void* value,
    size_t size) {
  set_has_message();
  message_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:protobuf_unittest.RawMessageSet.Item.message)
}
inline ::std::string* RawMessageSet_Item::mutable_message() {
  set_has_message();
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.RawMessageSet.Item.message)
  return message_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* RawMessageSet_Item::release_message() {
  clear_has_message();
  return message_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* RawMessageSet_Item::unsafe_arena_release_message() {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  clear_has_message();
  return message_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void RawMessageSet_Item::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    set_has_message();
  } else {
    clear_has_message();
  }
  message_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.RawMessageSet.Item.message)
}
inline void RawMessageSet_Item::unsafe_arena_set_allocated_message(
    ::std::string* message) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (message != NULL) {
    set_has_message();
  } else {
    clear_has_message();
  }
  set_has_message();
  message_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      message, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.RawMessageSet.Item.message)
}

// -------------------------------------------------------------------

// RawMessageSet

// repeated group Item = 1 {
inline int RawMessageSet::item_size() const {
  return item_.size();
}
inline void RawMessageSet::clear_item() {
  item_.Clear();
}
inline const ::protobuf_unittest::RawMessageSet_Item& RawMessageSet::item(int index) const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.RawMessageSet.item)
  return item_.Get(index);
}
inline ::protobuf_unittest::RawMessageSet_Item* RawMessageSet::mutable_item(int index) {
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.RawMessageSet.item)
  return item_.Mutable(index);
}
inline ::protobuf_unittest::RawMessageSet_Item* RawMessageSet::add_item() {
  // @@protoc_insertion_point(field_add:protobuf_unittest.RawMessageSet.item)
  return item_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::protobuf_unittest::RawMessageSet_Item >&
RawMessageSet::item() const {
  // @@protoc_insertion_point(field_list:protobuf_unittest.RawMessageSet.item)
  return item_;
}
inline ::google::protobuf::RepeatedPtrField< ::protobuf_unittest::RawMessageSet_Item >*
RawMessageSet::mutable_item() {
  // @@protoc_insertion_point(field_mutable_list:protobuf_unittest.RawMessageSet.item)
  return &item_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf_unittest

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fprotobuf_2funittest_5fmset_2eproto__INCLUDED
