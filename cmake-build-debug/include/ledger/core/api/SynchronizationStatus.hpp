// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_SYNCHRONIZATIONSTATUS_HPP
#define DJINNI_GENERATED_SYNCHRONIZATIONSTATUS_HPP

#include <cstdint>

namespace ledger { namespace core { namespace api {

class SynchronizationStatus {
public:
    virtual ~SynchronizationStatus() {}

    static int32_t const STATUS_DONE;

    static int32_t const STATUS_ERROR;

    static int32_t const STATUS_DONE_SYNCHRONIZE_NEXT_ACCOUNT;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_SYNCHRONIZATIONSTATUS_HPP
