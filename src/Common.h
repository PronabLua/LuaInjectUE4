#pragma once

#include <android/log.h>
#include <cstdint>
#include <thread>
#include <chrono>

#define LOG_TAG "LuaInject"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

namespace Cheat
{
    extern uintptr_t libUE4Base;
}

