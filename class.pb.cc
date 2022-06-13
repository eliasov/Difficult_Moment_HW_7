#include "class.pb.h"

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
namespace Study {
    constexpr FullName::FullName(
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
        : name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
        , surname_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
        , patronymic_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string) {}
    struct FullNameDefaultTypeInternal {
        constexpr FullNameDefaultTypeInternal()
            : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
        ~FullNameDefaultTypeInternal() {}
        union {
            FullName _instance;
        };
    };
    PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT FullNameDefaultTypeInternal _FullName_default_instance_;
    constexpr Student::Student(
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
        : grades_()
        , _grades_cached_byte_size_(0)
        , fname_(nullptr)
        , avggrades_(0u) {}
    struct StudentDefaultTypeInternal {
        constexpr StudentDefaultTypeInternal()
            : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
        ~StudentDefaultTypeInternal() {}
        union {
            Student _instance;
        };
    };
    PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT StudentDefaultTypeInternal _Student_default_instance_;
    constexpr StudentsGroup::StudentsGroup(
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
        : student_() {}
    struct StudentsGroupDefaultTypeInternal {
        constexpr StudentsGroupDefaultTypeInternal()
            : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
        ~StudentsGroupDefaultTypeInternal() {}
        union {
            StudentsGroup _instance;
        };
    };
    PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT StudentsGroupDefaultTypeInternal _StudentsGroup_default_instance_;
}  // namespace Study
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_main_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_main_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_main_2eproto = nullptr;

const uint32_t TableStruct_main_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::Study::FullName, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::Study::FullName, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Study::FullName, name_),
  PROTOBUF_FIELD_OFFSET(::Study::FullName, surname_),
  PROTOBUF_FIELD_OFFSET(::Study::FullName, patronymic_),
  ~0u,
  ~0u,
  0,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Study::Student, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Study::Student, fname_),
  PROTOBUF_FIELD_OFFSET(::Study::Student, grades_),
  PROTOBUF_FIELD_OFFSET(::Study::Student, avggrades_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Study::StudentsGroup, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Study::StudentsGroup, student_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::Study::FullName)},
  { 12, -1, -1, sizeof(::Study::Student)},
  { 21, -1, -1, sizeof(::Study::StudentsGroup)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const* const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Study::_FullName_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Study::_Student_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Study::_StudentsGroup_default_instance_),
};

const char descriptor_table_protodef_main_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
"\n\nmain.proto\022\005Study\"Q\n\010FullName\022\014\n\004name\030"
"\001 \001(\t\022\017\n\007surname\030\002 \001(\t\022\027\n\npatronymic\030\003 \001"
"(\tH\000\210\001\001B\r\n\013_patronymic\"L\n\007Student\022\036\n\005fna"
"me\030\001 \001(\0132\017.Study.FullName\022\016\n\006grades\030\002 \003("
"\r\022\021\n\tavgGrades\030\003 \001(\r\"0\n\rStudentsGroup\022\037\n"
"\007student\030\001 \003(\0132\016.Study.Studentb\006proto3"
;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_main_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_main_2eproto = {
  false, false, 238, descriptor_table_protodef_main_2eproto, "main.proto",
  &descriptor_table_main_2eproto_once, nullptr, 0, 3,
  schemas, file_default_instances, TableStruct_main_2eproto::offsets,
  file_level_metadata_main_2eproto, file_level_enum_descriptors_main_2eproto, file_level_service_descriptors_main_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_main_2eproto_getter() {
    return &descriptor_table_main_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_main_2eproto(&descriptor_table_main_2eproto);
namespace Study {

    // ===================================================================

    class FullName::_Internal {
    public:
        using HasBits = decltype(std::declval<FullName>()._has_bits_);
        static void set_has_patronymic(HasBits* has_bits) {
            (*has_bits)[0] |= 1u;
        }
    };

    FullName::FullName(::PROTOBUF_NAMESPACE_ID::Arena* arena,
        bool is_message_owned)
        : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
        SharedCtor();
        if (!is_message_owned) {
            RegisterArenaDtor(arena);
        }
        // @@protoc_insertion_point(arena_constructor:Study.FullName)
    }
    FullName::FullName(const FullName& from)
        : ::PROTOBUF_NAMESPACE_ID::Message(),
        _has_bits_(from._has_bits_) {
        _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
        name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (!from._internal_name().empty()) {
            name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(),
                GetArenaForAllocation());
        }
        surname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        surname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (!from._internal_surname().empty()) {
            surname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_surname(),
                GetArenaForAllocation());
        }
        patronymic_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        patronymic_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (from._internal_has_patronymic()) {
            patronymic_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_patronymic(),
                GetArenaForAllocation());
        }
        // @@protoc_insertion_point(copy_constructor:Study.FullName)
    }

    inline void FullName::SharedCtor() {
        name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
        surname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        surname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
        patronymic_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        patronymic_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
    }

    FullName::~FullName() {
        // @@protoc_insertion_point(destructor:Study.FullName)
        if (GetArenaForAllocation() != nullptr) return;
        SharedDtor();
        _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
    }

    inline void FullName::SharedDtor() {
        GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
        name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
        surname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
        patronymic_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
    }

    void FullName::ArenaDtor(void* object) {
        FullName* _this = reinterpret_cast<FullName*>(object);
        (void)_this;
    }
    void FullName::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
    }
    void FullName::SetCachedSize(int size) const {
        _cached_size_.Set(size);
    }

    void FullName::Clear() {
        // @@protoc_insertion_point(message_clear_start:Study.FullName)
        uint32_t cached_has_bits = 0;
        // Prevent compiler warnings about cached_has_bits being unused
        (void)cached_has_bits;

        name_.ClearToEmpty();
        surname_.ClearToEmpty();
        cached_has_bits = _has_bits_[0];
        if (cached_has_bits & 0x00000001u) {
            patronymic_.ClearNonDefaultToEmpty();
        }
        _has_bits_.Clear();
        _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
    }

    const char* FullName::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
        _Internal::HasBits has_bits{};
        while (!ctx->Done(&ptr)) {
            uint32_t tag;
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
            switch (tag >> 3) {
                // string name = 1;
            case 1:
                if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
                    auto str = _internal_mutable_name();
                    ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
                    CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Study.FullName.name"));
                    CHK_(ptr);
                }
                else
                    goto handle_unusual;
                continue;
                // string surname = 2;
            case 2:
                if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
                    auto str = _internal_mutable_surname();
                    ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
                    CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Study.FullName.surname"));
                    CHK_(ptr);
                }
                else
                    goto handle_unusual;
                continue;
                // optional string patronymic = 3;
            case 3:
                if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
                    auto str = _internal_mutable_patronymic();
                    ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
                    CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Study.FullName.patronymic"));
                    CHK_(ptr);
                }
                else
                    goto handle_unusual;
                continue;
            default:
                goto handle_unusual;
            }  // switch
        handle_unusual:
            if ((tag == 0) || ((tag & 7) == 4)) {
                CHK_(ptr);
                ctx->SetLastTag(tag);
                goto message_done;
            }
            ptr = UnknownFieldParse(
                tag,
                _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
                ptr, ctx);
            CHK_(ptr != nullptr);
        }  // while
    message_done:
        _has_bits_.Or(has_bits);
        return ptr;
    failure:
        ptr = nullptr;
        goto message_done;
#undef CHK_
    }

    uint8_t* FullName::_InternalSerialize(
        uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
        // @@protoc_insertion_point(serialize_to_array_start:Study.FullName)
        uint32_t cached_has_bits = 0;
        (void)cached_has_bits;

        // string name = 1;
        if (!this->_internal_name().empty()) {
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
                this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
                ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
                "Study.FullName.name");
            target = stream->WriteStringMaybeAliased(
                1, this->_internal_name(), target);
        }

        // string surname = 2;
        if (!this->_internal_surname().empty()) {
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
                this->_internal_surname().data(), static_cast<int>(this->_internal_surname().length()),
                ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
                "Study.FullName.surname");
            target = stream->WriteStringMaybeAliased(
                2, this->_internal_surname(), target);
        }

        // optional string patronymic = 3;
        if (_internal_has_patronymic()) {
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
                this->_internal_patronymic().data(), static_cast<int>(this->_internal_patronymic().length()),
                ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
                "Study.FullName.patronymic");
            target = stream->WriteStringMaybeAliased(
                3, this->_internal_patronymic(), target);
        }

        if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
            target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
        }
        // @@protoc_insertion_point(serialize_to_array_end:Study.FullName)
        return target;
    }

    size_t FullName::ByteSizeLong() const {
        // @@protoc_insertion_point(message_byte_size_start:Study.FullName)
        size_t total_size = 0;

        uint32_t cached_has_bits = 0;
        // Prevent compiler warnings about cached_has_bits being unused
        (void)cached_has_bits;

        // string name = 1;
        if (!this->_internal_name().empty()) {
            total_size += 1 +
                ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                    this->_internal_name());
        }

        // string surname = 2;
        if (!this->_internal_surname().empty()) {
            total_size += 1 +
                ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                    this->_internal_surname());
        }

        // optional string patronymic = 3;
        cached_has_bits = _has_bits_[0];
        if (cached_has_bits & 0x00000001u) {
            total_size += 1 +
                ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                    this->_internal_patronymic());
        }

        return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
    }

    const ::PROTOBUF_NAMESPACE_ID::Message::ClassData FullName::_class_data_ = {
        ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
        FullName::MergeImpl
    };
    const ::PROTOBUF_NAMESPACE_ID::Message::ClassData* FullName::GetClassData() const { return &_class_data_; }

    void FullName::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
        const ::PROTOBUF_NAMESPACE_ID::Message& from) {
        static_cast<FullName*>(to)->MergeFrom(
            static_cast<const FullName&>(from));
    }


    void FullName::MergeFrom(const FullName& from) {
        // @@protoc_insertion_point(class_specific_merge_from_start:Study.FullName)
        GOOGLE_DCHECK_NE(&from, this);
        uint32_t cached_has_bits = 0;
        (void)cached_has_bits;

        if (!from._internal_name().empty()) {
            _internal_set_name(from._internal_name());
        }
        if (!from._internal_surname().empty()) {
            _internal_set_surname(from._internal_surname());
        }
        if (from._internal_has_patronymic()) {
            _internal_set_patronymic(from._internal_patronymic());
        }
        _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
    }

    void FullName::CopyFrom(const FullName& from) {
        // @@protoc_insertion_point(class_specific_copy_from_start:Study.FullName)
        if (&from == this) return;
        Clear();
        MergeFrom(from);
    }

    bool FullName::IsInitialized() const {
        return true;
    }

    void FullName::InternalSwap(FullName* other) {
        using std::swap;
        auto* lhs_arena = GetArenaForAllocation();
        auto* rhs_arena = other->GetArenaForAllocation();
        _internal_metadata_.InternalSwap(&other->_internal_metadata_);
        swap(_has_bits_[0], other->_has_bits_[0]);
        ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
            &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
            &name_, lhs_arena,
            &other->name_, rhs_arena
        );
        ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
            &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
            &surname_, lhs_arena,
            &other->surname_, rhs_arena
        );
        ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
            &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
            &patronymic_, lhs_arena,
            &other->patronymic_, rhs_arena
        );
    }

    ::PROTOBUF_NAMESPACE_ID::Metadata FullName::GetMetadata() const {
        return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
            &descriptor_table_main_2eproto_getter, &descriptor_table_main_2eproto_once,
            file_level_metadata_main_2eproto[0]);
    }

    // ===================================================================

    class Student::_Internal {
    public:
        static const ::Study::FullName& fname(const Student* msg);
    };

    const ::Study::FullName&
        Student::_Internal::fname(const Student* msg) {
        return *msg->fname_;
    }
    Student::Student(::PROTOBUF_NAMESPACE_ID::Arena* arena,
        bool is_message_owned)
        : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
        grades_(arena) {
        SharedCtor();
        if (!is_message_owned) {
            RegisterArenaDtor(arena);
        }
        // @@protoc_insertion_point(arena_constructor:Study.Student)
    }
    Student::Student(const Student& from)
        : ::PROTOBUF_NAMESPACE_ID::Message(),
        grades_(from.grades_) {
        _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
        if (from._internal_has_fname()) {
            fname_ = new ::Study::FullName(*from.fname_);
        }
        else {
            fname_ = nullptr;
        }
        avggrades_ = from.avggrades_;
        // @@protoc_insertion_point(copy_constructor:Study.Student)
    }

    inline void Student::SharedCtor() {
        ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
            reinterpret_cast<char*>(&fname_) - reinterpret_cast<char*>(this)),
            0, static_cast<size_t>(reinterpret_cast<char*>(&avggrades_) -
                reinterpret_cast<char*>(&fname_)) + sizeof(avggrades_));
    }

    Student::~Student() {
        // @@protoc_insertion_point(destructor:Study.Student)
        if (GetArenaForAllocation() != nullptr) return;
        SharedDtor();
        _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
    }

    inline void Student::SharedDtor() {
        GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
        if (this != internal_default_instance()) delete fname_;
    }

    void Student::ArenaDtor(void* object) {
        Student* _this = reinterpret_cast<Student*>(object);
        (void)_this;
    }
    void Student::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
    }
    void Student::SetCachedSize(int size) const {
        _cached_size_.Set(size);
    }

    void Student::Clear() {
        // @@protoc_insertion_point(message_clear_start:Study.Student)
        uint32_t cached_has_bits = 0;
        // Prevent compiler warnings about cached_has_bits being unused
        (void)cached_has_bits;

        grades_.Clear();
        if (GetArenaForAllocation() == nullptr && fname_ != nullptr) {
            delete fname_;
        }
        fname_ = nullptr;
        avggrades_ = 0u;
        _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
    }

    const char* Student::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
        while (!ctx->Done(&ptr)) {
            uint32_t tag;
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
            switch (tag >> 3) {
                // .Study.FullName fname = 1;
            case 1:
                if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
                    ptr = ctx->ParseMessage(_internal_mutable_fname(), ptr);
                    CHK_(ptr);
                }
                else
                    goto handle_unusual;
                continue;
                // repeated uint32 grades = 2;
            case 2:
                if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
                    ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedUInt32Parser(_internal_mutable_grades(), ptr, ctx);
                    CHK_(ptr);
                }
                else if (static_cast<uint8_t>(tag) == 16) {
                    _internal_add_grades(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
                    CHK_(ptr);
                }
                else
                    goto handle_unusual;
                continue;
                // uint32 avgGrades = 3;
            case 3:
                if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
                    avggrades_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
                    CHK_(ptr);
                }
                else
                    goto handle_unusual;
                continue;
            default:
                goto handle_unusual;
            }  // switch
        handle_unusual:
            if ((tag == 0) || ((tag & 7) == 4)) {
                CHK_(ptr);
                ctx->SetLastTag(tag);
                goto message_done;
            }
            ptr = UnknownFieldParse(
                tag,
                _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
                ptr, ctx);
            CHK_(ptr != nullptr);
        }  // while
    message_done:
        return ptr;
    failure:
        ptr = nullptr;
        goto message_done;
#undef CHK_
    }

    uint8_t* Student::_InternalSerialize(
        uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
        // @@protoc_insertion_point(serialize_to_array_start:Study.Student)
        uint32_t cached_has_bits = 0;
        (void)cached_has_bits;

        // .Study.FullName fname = 1;
        if (this->_internal_has_fname()) {
            target = stream->EnsureSpace(target);
            target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
                InternalWriteMessage(
                    1, _Internal::fname(this), target, stream);
        }

        // repeated uint32 grades = 2;
        {
            int byte_size = _grades_cached_byte_size_.load(std::memory_order_relaxed);
            if (byte_size > 0) {
                target = stream->WriteUInt32Packed(
                    2, _internal_grades(), byte_size, target);
            }
        }

        // uint32 avgGrades = 3;
        if (this->_internal_avggrades() != 0) {
            target = stream->EnsureSpace(target);
            target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_avggrades(), target);
        }

        if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
            target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
        }
        // @@protoc_insertion_point(serialize_to_array_end:Study.Student)
        return target;
    }

    size_t Student::ByteSizeLong() const {
        // @@protoc_insertion_point(message_byte_size_start:Study.Student)
        size_t total_size = 0;

        uint32_t cached_has_bits = 0;
        // Prevent compiler warnings about cached_has_bits being unused
        (void)cached_has_bits;

        // repeated uint32 grades = 2;
        {
            size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
                UInt32Size(this->grades_);
            if (data_size > 0) {
                total_size += 1 +
                    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
                        static_cast<int32_t>(data_size));
            }
            int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
            _grades_cached_byte_size_.store(cached_size,
                std::memory_order_relaxed);
            total_size += data_size;
        }

        // .Study.FullName fname = 1;
        if (this->_internal_has_fname()) {
            total_size += 1 +
                ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
                    *fname_);
        }

        // uint32 avgGrades = 3;
        if (this->_internal_avggrades() != 0) {
            total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_avggrades());
        }

        return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
    }

    const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Student::_class_data_ = {
        ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
        Student::MergeImpl
    };
    const ::PROTOBUF_NAMESPACE_ID::Message::ClassData* Student::GetClassData() const { return &_class_data_; }

    void Student::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
        const ::PROTOBUF_NAMESPACE_ID::Message& from) {
        static_cast<Student*>(to)->MergeFrom(
            static_cast<const Student&>(from));
    }


    void Student::MergeFrom(const Student& from) {
        // @@protoc_insertion_point(class_specific_merge_from_start:Study.Student)
        GOOGLE_DCHECK_NE(&from, this);
        uint32_t cached_has_bits = 0;
        (void)cached_has_bits;

        grades_.MergeFrom(from.grades_);
        if (from._internal_has_fname()) {
            _internal_mutable_fname()->::Study::FullName::MergeFrom(from._internal_fname());
        }
        if (from._internal_avggrades() != 0) {
            _internal_set_avggrades(from._internal_avggrades());
        }
        _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
    }

    void Student::CopyFrom(const Student& from) {
        // @@protoc_insertion_point(class_specific_copy_from_start:Study.Student)
        if (&from == this) return;
        Clear();
        MergeFrom(from);
    }

    bool Student::IsInitialized() const {
        return true;
    }

    void Student::InternalSwap(Student* other) {
        using std::swap;
        _internal_metadata_.InternalSwap(&other->_internal_metadata_);
        grades_.InternalSwap(&other->grades_);
        ::PROTOBUF_NAMESPACE_ID::internal::memswap<
            PROTOBUF_FIELD_OFFSET(Student, avggrades_)
            + sizeof(Student::avggrades_)
            - PROTOBUF_FIELD_OFFSET(Student, fname_)>(
                reinterpret_cast<char*>(&fname_),
                reinterpret_cast<char*>(&other->fname_));
    }

    ::PROTOBUF_NAMESPACE_ID::Metadata Student::GetMetadata() const {
        return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
            &descriptor_table_main_2eproto_getter, &descriptor_table_main_2eproto_once,
            file_level_metadata_main_2eproto[1]);
    }

    // ===================================================================

    class StudentsGroup::_Internal {
    public:
    };

    StudentsGroup::StudentsGroup(::PROTOBUF_NAMESPACE_ID::Arena* arena,
        bool is_message_owned)
        : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
        student_(arena) {
        SharedCtor();
        if (!is_message_owned) {
            RegisterArenaDtor(arena);
        }
        // @@protoc_insertion_point(arena_constructor:Study.StudentsGroup)
    }
    StudentsGroup::StudentsGroup(const StudentsGroup& from)
        : ::PROTOBUF_NAMESPACE_ID::Message(),
        student_(from.student_) {
        _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
        // @@protoc_insertion_point(copy_constructor:Study.StudentsGroup)
    }

    inline void StudentsGroup::SharedCtor() {
    }

    StudentsGroup::~StudentsGroup() {
        // @@protoc_insertion_point(destructor:Study.StudentsGroup)
        if (GetArenaForAllocation() != nullptr) return;
        SharedDtor();
        _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
    }

    inline void StudentsGroup::SharedDtor() {
        GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
    }

    void StudentsGroup::ArenaDtor(void* object) {
        StudentsGroup* _this = reinterpret_cast<StudentsGroup*>(object);
        (void)_this;
    }
    void StudentsGroup::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
    }
    void StudentsGroup::SetCachedSize(int size) const {
        _cached_size_.Set(size);
    }

    void StudentsGroup::Clear() {
        // @@protoc_insertion_point(message_clear_start:Study.StudentsGroup)
        uint32_t cached_has_bits = 0;
        // Prevent compiler warnings about cached_has_bits being unused
        (void)cached_has_bits;

        student_.Clear();
        _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
    }

    const char* StudentsGroup::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
        while (!ctx->Done(&ptr)) {
            uint32_t tag;
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
            switch (tag >> 3) {
                // repeated .Study.Student student = 1;
            case 1:
                if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
                    ptr -= 1;
                    do {
                        ptr += 1;
                        ptr = ctx->ParseMessage(_internal_add_student(), ptr);
                        CHK_(ptr);
                        if (!ctx->DataAvailable(ptr)) break;
                    } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
                }
                else
                    goto handle_unusual;
                continue;
            default:
                goto handle_unusual;
            }  // switch
        handle_unusual:
            if ((tag == 0) || ((tag & 7) == 4)) {
                CHK_(ptr);
                ctx->SetLastTag(tag);
                goto message_done;
            }
            ptr = UnknownFieldParse(
                tag,
                _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
                ptr, ctx);
            CHK_(ptr != nullptr);
        }  // while
    message_done:
        return ptr;
    failure:
        ptr = nullptr;
        goto message_done;
#undef CHK_
    }

    uint8_t* StudentsGroup::_InternalSerialize(
        uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
        // @@protoc_insertion_point(serialize_to_array_start:Study.StudentsGroup)
        uint32_t cached_has_bits = 0;
        (void)cached_has_bits;

        // repeated .Study.Student student = 1;
        for (unsigned int i = 0,
            n = static_cast<unsigned int>(this->_internal_student_size()); i < n; i++) {
            target = stream->EnsureSpace(target);
            target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
                InternalWriteMessage(1, this->_internal_student(i), target, stream);
        }

        if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
            target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
        }
        // @@protoc_insertion_point(serialize_to_array_end:Study.StudentsGroup)
        return target;
    }

    size_t StudentsGroup::ByteSizeLong() const {
        // @@protoc_insertion_point(message_byte_size_start:Study.StudentsGroup)
        size_t total_size = 0;

        uint32_t cached_has_bits = 0;
        // Prevent compiler warnings about cached_has_bits being unused
        (void)cached_has_bits;

        // repeated .Study.Student student = 1;
        total_size += 1UL * this->_internal_student_size();
        for (const auto& msg : this->student_) {
            total_size +=
                ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
        }

        return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
    }

    const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StudentsGroup::_class_data_ = {
        ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
        StudentsGroup::MergeImpl
    };
    const ::PROTOBUF_NAMESPACE_ID::Message::ClassData* StudentsGroup::GetClassData() const { return &_class_data_; }

    void StudentsGroup::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
        const ::PROTOBUF_NAMESPACE_ID::Message& from) {
        static_cast<StudentsGroup*>(to)->MergeFrom(
            static_cast<const StudentsGroup&>(from));
    }


    void StudentsGroup::MergeFrom(const StudentsGroup& from) {
        // @@protoc_insertion_point(class_specific_merge_from_start:Study.StudentsGroup)
        GOOGLE_DCHECK_NE(&from, this);
        uint32_t cached_has_bits = 0;
        (void)cached_has_bits;

        student_.MergeFrom(from.student_);
        _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
    }

    void StudentsGroup::CopyFrom(const StudentsGroup& from) {
        // @@protoc_insertion_point(class_specific_copy_from_start:Study.StudentsGroup)
        if (&from == this) return;
        Clear();
        MergeFrom(from);
    }

    bool StudentsGroup::IsInitialized() const {
        return true;
    }

    void StudentsGroup::InternalSwap(StudentsGroup* other) {
        using std::swap;
        _internal_metadata_.InternalSwap(&other->_internal_metadata_);
        student_.InternalSwap(&other->student_);
    }

    ::PROTOBUF_NAMESPACE_ID::Metadata StudentsGroup::GetMetadata() const {
        return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
            &descriptor_table_main_2eproto_getter, &descriptor_table_main_2eproto_once,
            file_level_metadata_main_2eproto[2]);
    }

    // @@protoc_insertion_point(namespace_scope)
}  // namespace Study
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE::Study::FullName* Arena::CreateMaybeMessage< ::Study::FullName >(Arena* arena) {
    return Arena::CreateMessageInternal< ::Study::FullName >(arena);
}
template<> PROTOBUF_NOINLINE::Study::Student* Arena::CreateMaybeMessage< ::Study::Student >(Arena* arena) {
    return Arena::CreateMessageInternal< ::Study::Student >(arena);
}
template<> PROTOBUF_NOINLINE::Study::StudentsGroup* Arena::CreateMaybeMessage< ::Study::StudentsGroup >(Arena* arena) {
    return Arena::CreateMessageInternal< ::Study::StudentsGroup >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>