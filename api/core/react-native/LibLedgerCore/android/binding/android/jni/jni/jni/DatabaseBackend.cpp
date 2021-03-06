// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from database.djinni

#include "DatabaseBackend.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

DatabaseBackend::DatabaseBackend() : ::djinni::JniInterface<::ledger::core::api::DatabaseBackend, DatabaseBackend>("DatabaseBackend$CppProxy") {}

DatabaseBackend::~DatabaseBackend() = default;


CJNIEXPORT void JNICALL Java_DatabaseBackend_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::DatabaseBackend>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_DatabaseBackend_00024CppProxy_native_1setUsername(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_username)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->setUsername(::djinni::String::toCpp(jniEnv, j_username));
        return ::djinni::release(::djinni_generated::DatabaseBackend::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_DatabaseBackend_00024CppProxy_native_1setPassword(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_pwd)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->setPassword(::djinni::String::toCpp(jniEnv, j_pwd));
        return ::djinni::release(::djinni_generated::DatabaseBackend::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_DatabaseBackend_00024CppProxy_native_1setHost(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_host)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->setHost(::djinni::String::toCpp(jniEnv, j_host));
        return ::djinni::release(::djinni_generated::DatabaseBackend::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_DatabaseBackend_00024CppProxy_native_1setHostAddr(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_hostAddr)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->setHostAddr(::djinni::String::toCpp(jniEnv, j_hostAddr));
        return ::djinni::release(::djinni_generated::DatabaseBackend::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_DatabaseBackend_00024CppProxy_native_1setPort(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_port)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->setPort(::djinni::String::toCpp(jniEnv, j_port));
        return ::djinni::release(::djinni_generated::DatabaseBackend::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_DatabaseBackend_00024CppProxy_native_1setOptions(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_opts)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->setOptions(::djinni::String::toCpp(jniEnv, j_opts));
        return ::djinni::release(::djinni_generated::DatabaseBackend::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_DatabaseBackend_00024CppProxy_native_1setSslMode(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_mode)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->setSslMode(::djinni::String::toCpp(jniEnv, j_mode));
        return ::djinni::release(::djinni_generated::DatabaseBackend::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_DatabaseBackend_00024CppProxy_native_1setKerberosName(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_name)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->setKerberosName(::djinni::String::toCpp(jniEnv, j_name));
        return ::djinni::release(::djinni_generated::DatabaseBackend::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_DatabaseBackend_00024CppProxy_native_1setService(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_service)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->setService(::djinni::String::toCpp(jniEnv, j_service));
        return ::djinni::release(::djinni_generated::DatabaseBackend::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_DatabaseBackend_00024CppProxy_native_1setConnectionPoolSize(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_size)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->setConnectionPoolSize(::djinni::I32::toCpp(jniEnv, j_size));
        return ::djinni::release(::djinni_generated::DatabaseBackend::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_DatabaseBackend_00024CppProxy_native_1enableQueryLogging(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jboolean j_enable)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->enableQueryLogging(::djinni::Bool::toCpp(jniEnv, j_enable));
        return ::djinni::release(::djinni_generated::DatabaseBackend::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_DatabaseBackend_00024CppProxy_native_1getUsername(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->getUsername();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_DatabaseBackend_00024CppProxy_native_1getPassword(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->getPassword();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_DatabaseBackend_00024CppProxy_native_1getHost(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->getHost();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_DatabaseBackend_00024CppProxy_native_1getHostAddr(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->getHostAddr();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_DatabaseBackend_00024CppProxy_native_1getPort(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->getPort();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_DatabaseBackend_00024CppProxy_native_1getOptions(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->getOptions();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_DatabaseBackend_00024CppProxy_native_1getSslMode(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->getSslMode();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_DatabaseBackend_00024CppProxy_native_1getKerberosName(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->getKerberosName();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_DatabaseBackend_00024CppProxy_native_1getService(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->getService();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_DatabaseBackend_00024CppProxy_native_1getConnectionPoolSize(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->getConnectionPoolSize();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_DatabaseBackend_00024CppProxy_native_1isLoggingEnabled(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::DatabaseBackend>(nativeRef);
        auto r = ref->isLoggingEnabled();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_DatabaseBackend_getSqlite3Backend(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::DatabaseBackend::getSqlite3Backend();
        return ::djinni::release(::djinni_generated::DatabaseBackend::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_DatabaseBackend_getPostgreSQLBackend(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::DatabaseBackend::getPostgreSQLBackend();
        return ::djinni::release(::djinni_generated::DatabaseBackend::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
