// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_QUANTIZEOP_WNN_H_
#define FLATBUFFERS_GENERATED_QUANTIZEOP_WNN_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 2 &&
              FLATBUFFERS_VERSION_MINOR == 0 &&
              FLATBUFFERS_VERSION_REVISION == 6,
             "Non-compatible flatbuffers version included");

namespace wnn {

struct QuantizedAdd;
struct QuantizedAddBuilder;
struct QuantizedAddT;

inline const flatbuffers::TypeTable *QuantizedAddTypeTable();

enum FusedActivation : int8_t {
  FusedActivation_kTfLiteActNone = 0,
  FusedActivation_kTfLiteActRelu = 1,
  FusedActivation_kTfLiteActRelu1 = 2,
  FusedActivation_kTfLiteActRelu6 = 3,
  FusedActivation_kTfLiteActTanh = 4,
  FusedActivation_kTfLiteActSignBit = 5,
  FusedActivation_kTfLiteActSigmoid = 6,
  FusedActivation_MIN = FusedActivation_kTfLiteActNone,
  FusedActivation_MAX = FusedActivation_kTfLiteActSigmoid
};

inline const FusedActivation (&EnumValuesFusedActivation())[7] {
  static const FusedActivation values[] = {
    FusedActivation_kTfLiteActNone,
    FusedActivation_kTfLiteActRelu,
    FusedActivation_kTfLiteActRelu1,
    FusedActivation_kTfLiteActRelu6,
    FusedActivation_kTfLiteActTanh,
    FusedActivation_kTfLiteActSignBit,
    FusedActivation_kTfLiteActSigmoid
  };
  return values;
}

inline const char * const *EnumNamesFusedActivation() {
  static const char * const names[8] = {
    "kTfLiteActNone",
    "kTfLiteActRelu",
    "kTfLiteActRelu1",
    "kTfLiteActRelu6",
    "kTfLiteActTanh",
    "kTfLiteActSignBit",
    "kTfLiteActSigmoid",
    nullptr
  };
  return names;
}

inline const char *EnumNameFusedActivation(FusedActivation e) {
  if (flatbuffers::IsOutRange(e, FusedActivation_kTfLiteActNone, FusedActivation_kTfLiteActSigmoid)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesFusedActivation()[index];
}

struct QuantizedAddT : public flatbuffers::NativeTable {
  typedef QuantizedAdd TableType;
  wnn::FusedActivation activation_type = wnn::FusedActivation_kTfLiteActNone;
};

struct QuantizedAdd FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef QuantizedAddT NativeTableType;
  typedef QuantizedAddBuilder Builder;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return QuantizedAddTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ACTIVATION_TYPE = 4
  };
  wnn::FusedActivation activation_type() const {
    return static_cast<wnn::FusedActivation>(GetField<int8_t>(VT_ACTIVATION_TYPE, 0));
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, VT_ACTIVATION_TYPE, 1) &&
           verifier.EndTable();
  }
  QuantizedAddT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(QuantizedAddT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<QuantizedAdd> Pack(flatbuffers::FlatBufferBuilder &_fbb, const QuantizedAddT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct QuantizedAddBuilder {
  typedef QuantizedAdd Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_activation_type(wnn::FusedActivation activation_type) {
    fbb_.AddElement<int8_t>(QuantizedAdd::VT_ACTIVATION_TYPE, static_cast<int8_t>(activation_type), 0);
  }
  explicit QuantizedAddBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<QuantizedAdd> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<QuantizedAdd>(end);
    return o;
  }
};

inline flatbuffers::Offset<QuantizedAdd> CreateQuantizedAdd(
    flatbuffers::FlatBufferBuilder &_fbb,
    wnn::FusedActivation activation_type = wnn::FusedActivation_kTfLiteActNone) {
  QuantizedAddBuilder builder_(_fbb);
  builder_.add_activation_type(activation_type);
  return builder_.Finish();
}

flatbuffers::Offset<QuantizedAdd> CreateQuantizedAdd(flatbuffers::FlatBufferBuilder &_fbb, const QuantizedAddT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline QuantizedAddT *QuantizedAdd::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<QuantizedAddT>(new QuantizedAddT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void QuantizedAdd::UnPackTo(QuantizedAddT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = activation_type(); _o->activation_type = _e; }
}

inline flatbuffers::Offset<QuantizedAdd> QuantizedAdd::Pack(flatbuffers::FlatBufferBuilder &_fbb, const QuantizedAddT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateQuantizedAdd(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<QuantizedAdd> CreateQuantizedAdd(flatbuffers::FlatBufferBuilder &_fbb, const QuantizedAddT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const QuantizedAddT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _activation_type = _o->activation_type;
  return wnn::CreateQuantizedAdd(
      _fbb,
      _activation_type);
}

inline const flatbuffers::TypeTable *FusedActivationTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_CHAR, 0, 0 },
    { flatbuffers::ET_CHAR, 0, 0 },
    { flatbuffers::ET_CHAR, 0, 0 },
    { flatbuffers::ET_CHAR, 0, 0 },
    { flatbuffers::ET_CHAR, 0, 0 },
    { flatbuffers::ET_CHAR, 0, 0 },
    { flatbuffers::ET_CHAR, 0, 0 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    wnn::FusedActivationTypeTable
  };
  static const char * const names[] = {
    "kTfLiteActNone",
    "kTfLiteActRelu",
    "kTfLiteActRelu1",
    "kTfLiteActRelu6",
    "kTfLiteActTanh",
    "kTfLiteActSignBit",
    "kTfLiteActSigmoid"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_ENUM, 7, type_codes, type_refs, nullptr, nullptr, names
  };
  return &tt;
}

inline const flatbuffers::TypeTable *QuantizedAddTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_CHAR, 0, 0 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    wnn::FusedActivationTypeTable
  };
  static const char * const names[] = {
    "activation_type"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 1, type_codes, type_refs, nullptr, nullptr, names
  };
  return &tt;
}

}  // namespace wnn

#endif  // FLATBUFFERS_GENERATED_QUANTIZEOP_WNN_H_
