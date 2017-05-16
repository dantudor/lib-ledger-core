// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_STRINGCOMPLETIONBLOCK_HPP
#define DJINNI_GENERATED_STRINGCOMPLETIONBLOCK_HPP

#include "../utils/optional.hpp"
#include <string>

namespace ledger { namespace core { namespace api {

struct Error;

class StringCompletionBlock {
public:
    virtual ~StringCompletionBlock() {}

    virtual void complete(const std::experimental::optional<std::string> & result, const std::experimental::optional<Error> & error) = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_STRINGCOMPLETIONBLOCK_HPP