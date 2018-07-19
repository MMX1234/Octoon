#ifndef OCTOON_C_H_
#define OCTOON_C_H_

#ifndef OCTOON_C_LINKAGE
#	ifdef __cplusplus
#		define OCTOON_C_LINKAGE extern "C"
#	else
#		define OCTOON_C_LINKAGE extern
#	endif
#endif

#include <jni.h>

#ifndef OCTOON_C_EXPORT
#	define OCTOON_C_EXPORT JNIEXPORT
#endif

#define OCTOON_C_CALL JNICALL

OCTOON_C_LINKAGE OCTOON_C_EXPORT jstring OCTOON_C_CALL Java_org_octoon_lib_Octoon3DRenderer_nativeConfig(JNIEnv*  env, jobject thiz, jstring gamedir, jstring scenename, jboolean bShader);
OCTOON_C_LINKAGE OCTOON_C_EXPORT void OCTOON_C_CALL Java_org_octoon_lib_Octoon3DRenderer_nativeStorage(JNIEnv*  env, jobject thiz, jint type, jstring pakagename, jstring apklocation);
OCTOON_C_LINKAGE OCTOON_C_EXPORT void OCTOON_C_CALL Java_org_octoon_lib_Octoon3DRenderer_nativeOpen(JNIEnv*  env, jobject thiz, jint w, jint h, jfloat dpiw, jfloat dpih, jobject assetManager);
OCTOON_C_LINKAGE OCTOON_C_EXPORT void OCTOON_C_CALL Java_org_octoon_lib_Octoon3DRenderer_nativeClose(JNIEnv* env, jobject thiz);
OCTOON_C_LINKAGE OCTOON_C_EXPORT void OCTOON_C_CALL Java_org_octoon_lib_Octoon3DRenderer_nativeRender(JNIEnv* env, jobject obj);
OCTOON_C_LINKAGE OCTOON_C_EXPORT void OCTOON_C_CALL Java_org_octoon_lib_Octoon3DRenderer_nativeOnPause(JNIEnv* env, jobject obj);
OCTOON_C_LINKAGE OCTOON_C_EXPORT void OCTOON_C_CALL Java_org_octoon_lib_Octoon3DRenderer_nativeOnResume(JNIEnv* env, jobject obj);
OCTOON_C_LINKAGE OCTOON_C_EXPORT void OCTOON_C_CALL Java_org_octoon_lib_Octoon3DRenderer_nativeOnStop(JNIEnv* env, jobject obj);
OCTOON_C_LINKAGE OCTOON_C_EXPORT void OCTOON_C_CALL Java_org_octoon_lib_Octoon3DRenderer_nativeTouchesBegin(JNIEnv* env, jobject obj, jint pIDs, jfloat pXs, jfloat pYs);
OCTOON_C_LINKAGE OCTOON_C_EXPORT void OCTOON_C_CALL Java_org_octoon_lib_Octoon3DRenderer_nativeTouchesMove(JNIEnv* env, jobject obj, jintArray pIDs, jfloatArray pXs, jfloatArray pYs);
OCTOON_C_LINKAGE OCTOON_C_EXPORT void OCTOON_C_CALL Java_org_octoon_lib_Octoon3DRenderer_nativeTouchesEnd(JNIEnv* env, jobject obj, jint pIDs, jfloat pXs, jfloat pYs);
OCTOON_C_LINKAGE OCTOON_C_EXPORT void OCTOON_C_CALL Java_org_octoon_lib_Octoon3DRenderer_nativeTouchesCancel(JNIEnv* env, jobject obj, jintArray pIDs, jfloatArray pXs, jfloatArray pYs);
OCTOON_C_LINKAGE OCTOON_C_EXPORT void OCTOON_C_CALL Java_org_octoon_lib_Octoon3DRenderer_nativeKeyPress(JNIEnv* env, jobject obj, jint pKeyCode);

#endif