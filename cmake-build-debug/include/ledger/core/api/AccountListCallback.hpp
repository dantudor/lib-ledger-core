// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_ACCOUNTLISTCALLBACK_HPP
#define DJINNI_GENERATED_ACCOUNTLISTCALLBACK_HPP

#include "../utils/optional.hpp"
#include <memory>
#include <vector>

namespace ledger { namespace core { namespace api {

class Account;
struct Error;

class AccountListCallback {
public:
    virtual ~AccountListCallback() {}

    virtual void onCallback(const std::experimental::optional<std::vector<std::shared_ptr<Account>>> & result, const std::experimental::optional<Error> & error) = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_ACCOUNTLISTCALLBACK_HPP
