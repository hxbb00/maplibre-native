#pragma once

#include <jni/jni.hpp>

namespace mbgl {
namespace android {
namespace java {

struct ObjectArray {
    static jni::jclass* jclass;
};

struct String {
    static jni::jclass* jclass;
};

struct Boolean {
    static jni::jclass* jclass;
    static jni::jmethodID* booleanValueMethodId;
};

struct Number {
    static jni::jclass* jclass;
    static jni::jmethodID* floatValueMethodId;
    static jni::jmethodID* doubleValueMethodId;
    static jni::jmethodID* longValueMethodId;
};

struct Map {
    static jni::jclass* jclass;
    static jni::jmethodID* getMethodId;
    static jni::jmethodID* keySetMethodId;
};

struct Set {
    static jni::jclass* jclass;
    static jni::jmethodID* toArrayMethodId;
};

void registerNatives(JNIEnv&);
} // namespace java
} // namespace android
} // namespace mbgl
