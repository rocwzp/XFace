/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_thu_xface_libs_XFaceLibrary */

#ifndef _Included_edu_thu_xface_libs_XFaceLibrary
#define _Included_edu_thu_xface_libs_XFaceLibrary
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     edu_thu_xface_libs_XFaceLibrary
 * Method:    nativeInitFacerec
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */JNIEXPORT jlong JNICALL Java_edu_thu_xface_libs_XFaceLibrary_nativeInitFacerec(
		JNIEnv *, jclass, jstring, jstring, jint, jdouble, jint);
/*
 * Class:     edu_thu_xface_libs_XFaceLibrary
 * Method:    nativeFacerec
 * Signature: (Ljava/lang/String;)I
 */JNIEXPORT jint JNICALL Java_edu_thu_xface_libs_XFaceLibrary_nativeFacerec(
		JNIEnv *, jclass, jlong, jstring, jlong, jint, jint);
/*
 * Class:     edu_thu_xface_libs_XFaceLibrary
 * Method:    nativeDestoryFacerec
 * Signature: ()I
 */JNIEXPORT jint JNICALL Java_edu_thu_xface_libs_XFaceLibrary_nativeDestoryFacerec(
		JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
