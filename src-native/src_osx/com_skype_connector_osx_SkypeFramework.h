/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_skype_connector_osx_SkypeFramework */

#ifndef _Included_com_skype_connector_osx_SkypeFramework
#define _Included_com_skype_connector_osx_SkypeFramework
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: initializedFieldMutex */
/* Inaccessible static: initialized */
/* Inaccessible static: listeners */
/* Inaccessible static: sendCommandMutex */
/* Inaccessible static: notificationReceivedMutex */
/*
 * Class:     com_skype_connector_osx_SkypeFramework
 * Method:    setup0
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_skype_connector_osx_SkypeFramework_setup0
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_skype_connector_osx_SkypeFramework
 * Method:    isRunning0
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_skype_connector_osx_SkypeFramework_isRunning0
  (JNIEnv *, jclass);

/*
 * Class:     com_skype_connector_osx_SkypeFramework
 * Method:    isAvailable0
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_skype_connector_osx_SkypeFramework_isAvailable0
  (JNIEnv *, jclass);

/*
 * Class:     com_skype_connector_osx_SkypeFramework
 * Method:    connect0
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_skype_connector_osx_SkypeFramework_connect0
  (JNIEnv *, jclass);

/*
 * Class:     com_skype_connector_osx_SkypeFramework
 * Method:    sendCommand0
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_skype_connector_osx_SkypeFramework_sendCommand0
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_skype_connector_osx_SkypeFramework
 * Method:    dispose0
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_skype_connector_osx_SkypeFramework_dispose0
  (JNIEnv *, jclass);

/*
 * Class:     com_skype_connector_osx_SkypeFramework
 * Method:    runCurrentEventLoop0
 * Signature: (D)I
 */
JNIEXPORT jint JNICALL Java_com_skype_connector_osx_SkypeFramework_runCurrentEventLoop0
  (JNIEnv *, jclass, jdouble);

/*
 * Class:     com_skype_connector_osx_SkypeFramework
 * Method:    runApplicationEventLoop0
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_skype_connector_osx_SkypeFramework_runApplicationEventLoop0
  (JNIEnv *, jclass);

/*
 * Class:     com_skype_connector_osx_SkypeFramework
 * Method:    quitApplicationEventLoop0
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_skype_connector_osx_SkypeFramework_quitApplicationEventLoop0
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
