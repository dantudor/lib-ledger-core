// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from dynamic.djinni

#ifndef DJINNI_GENERATED_DYNAMICTYPE_HPP
#define DJINNI_GENERATED_DYNAMICTYPE_HPP

#include <functional>
#include <iostream>
#include <string>

namespace ledger { namespace core { namespace api {

enum class DynamicType : int {
    OBJECT,
    INT32,
    INT64,
    DOUBLE,
    BOOLEAN,
    DATA,
    ARRAY,
    STRING,
    UNDEFINED,
};
std::string to_string(const DynamicType& dynamicType);
std::ostream &operator<<(std::ostream &os, const DynamicType &o);

} } }  // namespace ledger::core::api

namespace std {

template <>
struct hash<::ledger::core::api::DynamicType> {
    size_t operator()(::ledger::core::api::DynamicType type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
#endif //DJINNI_GENERATED_DYNAMICTYPE_HPP
