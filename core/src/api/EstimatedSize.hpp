// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tuples.djinni

#ifndef DJINNI_GENERATED_ESTIMATEDSIZE_HPP
#define DJINNI_GENERATED_ESTIMATEDSIZE_HPP

#include <cstdint>
#include <iostream>
#include <utility>

namespace ledger { namespace core { namespace api {

struct EstimatedSize final {
    int32_t min;
    int32_t max;

    EstimatedSize(int32_t min_,
                  int32_t max_)
    : min(std::move(min_))
    , max(std::move(max_))
    {}

    EstimatedSize(const EstimatedSize& cpy) {
       this->min = cpy.min;
       this->max = cpy.max;
    }

    EstimatedSize() = default;


    EstimatedSize& operator=(const EstimatedSize& cpy) {
       this->min = cpy.min;
       this->max = cpy.max;
       return *this;
    }

    template <class Archive>
    void load(Archive& archive) {
        archive(min, max);
    }

    template <class Archive>
    void save(Archive& archive) const {
        archive(min, max);
    }
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_ESTIMATEDSIZE_HPP