/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jsfml_audio_SoundStream */

#ifndef _Included_org_jsfml_audio_SoundStream
#define _Included_org_jsfml_audio_SoundStream
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: debug */
/* Inaccessible static: numManaged */
/* Inaccessible static: numWrapped */
/*
 * Class:     org_jsfml_audio_SoundStream
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_audio_SoundStream_nativeCreate
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_SoundStream
 * Method:    nativeSetExPtr
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_SoundStream_nativeSetExPtr
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_SoundStream
 * Method:    nativeDelete
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_SoundStream_nativeDelete
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_SoundStream
 * Method:    play
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_SoundStream_play
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_SoundStream
 * Method:    pause
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_SoundStream_pause
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_SoundStream
 * Method:    stop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_SoundStream_stop
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_SoundStream
 * Method:    getChannelCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_audio_SoundStream_getChannelCount
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_SoundStream
 * Method:    getSampleRate
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_audio_SoundStream_getSampleRate
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_SoundStream
 * Method:    nativeSetPlayingOffset
 * Signature: (Lorg/jsfml/system/Time;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_SoundStream_nativeSetPlayingOffset
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_audio_SoundStream
 * Method:    getPlayingOffset
 * Signature: ()Lorg/jsfml/system/Time;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_audio_SoundStream_getPlayingOffset
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_SoundStream
 * Method:    setLoop
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_SoundStream_setLoop
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_jsfml_audio_SoundStream
 * Method:    isLoop
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_audio_SoundStream_isLoop
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_SoundStream
 * Method:    nativeGetStatus
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_audio_SoundStream_nativeGetStatus
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_SoundStream
 * Method:    initialize
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_SoundStream_initialize
  (JNIEnv *, jobject, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
