// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from currency.djinni

#ifndef DJINNI_GENERATED_CURRENCY_HPP_JNI_
#define DJINNI_GENERATED_CURRENCY_HPP_JNI_

#include "../../include/Currency.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class Currency final {
public:
    using CppType = ::ledger::core::api::Currency;
    using JniType = jobject;

    using Boxed = Currency;

    ~Currency();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    Currency();
    friend ::djinni::JniClass<Currency>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("Currency") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(LWalletType;Ljava/lang/String;ILjava/lang/String;Ljava/util/ArrayList;LBitcoinLikeNetworkParameters;)V") };
    const jfieldID field_walletType { ::djinni::jniGetFieldID(clazz.get(), "walletType", "LWalletType;") };
    const jfieldID field_name { ::djinni::jniGetFieldID(clazz.get(), "name", "Ljava/lang/String;") };
    const jfieldID field_bip44CoinType { ::djinni::jniGetFieldID(clazz.get(), "bip44CoinType", "I") };
    const jfieldID field_paymentUriScheme { ::djinni::jniGetFieldID(clazz.get(), "paymentUriScheme", "Ljava/lang/String;") };
    const jfieldID field_units { ::djinni::jniGetFieldID(clazz.get(), "units", "Ljava/util/ArrayList;") };
    const jfieldID field_bitcoinLikeNetworkParameters { ::djinni::jniGetFieldID(clazz.get(), "bitcoinLikeNetworkParameters", "LBitcoinLikeNetworkParameters;") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_CURRENCY_HPP_JNI_
