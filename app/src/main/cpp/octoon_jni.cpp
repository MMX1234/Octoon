#include <string>
#include <jni.h>
#include "octoon-c.h"

jstring
Java_org_octoon_lib_Octoon3DRenderer_nativeConfig(JNIEnv *env, jobject thiz, jstring gamedir,
                                                  jstring scenename, jboolean bShader) {
    std::string hello = "你好，i can't speak japanese,but i want to make love with you";
    return env->NewStringUTF(hello.c_str());

}

void Java_org_octoon_lib_Octoon3DRenderer_nativeStorage(JNIEnv *env, jobject thiz, jint type,
                                                        jstring pakagename, jstring apklocation) {
}

void Java_org_octoon_lib_Octoon3DRenderer_nativeInit(JNIEnv *env, jobject thiz, jint w, jint h,
                                                     jfloat dpiw, jfloat dpih,
                                                     jobject assetManager) {
}

void Java_org_octoon_lib_Octoon3DRenderer_nativeOpen(JNIEnv *env, jobject thiz, jint w, jint h,
                                                     jfloat dpiw, jfloat dpih,
                                                     jobject assetManager) {
}

void Java_org_octoon_lib_Octoon3DRenderer_nativeClose(JNIEnv *env, jobject thiz) {
}

void Java_org_octoon_lib_Octoon3DRenderer_nativeRender(JNIEnv *env, jobject obj) {
}

void Java_org_octoon_lib_Octoon3DRenderer_nativeOnPause(JNIEnv *env, jobject obj) {
}

void Java_org_octoon_lib_Octoon3DRenderer_nativeOnResume(JNIEnv *env, jobject obj) {
}

void Java_org_octoon_lib_Octoon3DRenderer_nativeOnStop(JNIEnv *env, jobject obj) {
}

void Java_org_octoon_lib_Octoon3DRenderer_nativeTouchesBegin(JNIEnv *env, jobject obj, jint pIDs,
                                                             jfloat pXs, jfloat pYs) {
}

void
Java_org_octoon_lib_Octoon3DRenderer_nativeTouchesMove(JNIEnv *env, jobject obj, jintArray pIDs,
                                                       jfloatArray pXs, jfloatArray pYs) {
}

void Java_org_octoon_lib_Octoon3DRenderer_nativeTouchesEnd(JNIEnv *env, jobject obj, jint pIDs,
                                                           jfloat pXs, jfloat pYs) {
}

void
Java_org_octoon_lib_Octoon3DRenderer_nativeTouchesCancel(JNIEnv *env, jobject obj, jintArray pIDs,
                                                         jfloatArray pXs, jfloatArray pYs) {
}

void Java_org_octoon_lib_Octoon3DRenderer_nativeKeyPress(JNIEnv *env, jobject obj, jint pKeyCode) {
}