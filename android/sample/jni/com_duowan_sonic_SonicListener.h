/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_duowan_sonic_SonicListener */

#ifndef _Included_com_duowan_sonic_SonicListener
#define _Included_com_duowan_sonic_SonicListener
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_duowan_sonic_SonicListener
 * Method:    initFFTMgr
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_duowan_sonic_SonicListener_initFFTMgr
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_duowan_sonic_SonicListener
 * Method:    releaseFFTMgr
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_duowan_sonic_SonicListener_releaseFFTMgr
  (JNIEnv *, jclass);

/*
 * Class:     com_duowan_sonic_SonicListener
 * Method:    grabAudioData
 * Signature: (JJJ[B)I
 */
JNIEXPORT jint JNICALL Java_com_duowan_sonic_SonicListener_grabAudioData
  (JNIEnv *, jclass, jlong, jlong, jlong, jbyteArray);

/*
 * Class:     com_duowan_sonic_SonicListener
 * Method:    computeWave
 * Signature: ([B)Z
 */
JNIEXPORT jboolean JNICALL Java_com_duowan_sonic_SonicListener_computeWave
  (JNIEnv *, jclass, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
