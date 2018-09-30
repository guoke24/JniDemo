//
// Created by topwise on 18-9-27.
//
#include <com_topwise_jnidemo_MyJni.h>
#include <android/log.h>
// 为了打log
#define LOG_TAG "guohao"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)


JNIEXPORT jstring JNICALL Java_com_topwise_jnidemo_MyJni_get
  (JNIEnv *env, jobject jo){
       LOGI("here is native get!");
       return env->NewStringUTF("hello java,I'm form C++");
  };

JNIEXPORT jstring JNICALL Java_com_topwise_jnidemo_MyJni_send
  (JNIEnv *env, jobject jo, jstring js){
        LOGI("here is native send! by guohao");
  }