// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from random.djinni

#include "RandomNumberGenerator.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol LGRandomNumberGenerator;

namespace djinni_generated {

class RandomNumberGenerator
{
public:
    using CppType = std::shared_ptr<::ledger::core::api::RandomNumberGenerator>;
    using CppOptType = std::shared_ptr<::ledger::core::api::RandomNumberGenerator>;
    using ObjcType = id<LGRandomNumberGenerator>;

    using Boxed = RandomNumberGenerator;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

