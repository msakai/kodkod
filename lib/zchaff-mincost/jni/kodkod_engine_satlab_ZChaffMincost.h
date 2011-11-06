/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class kodkod_engine_satlab_ZChaffMincost */

#ifndef _Included_kodkod_engine_satlab_ZChaffMincost
#define _Included_kodkod_engine_satlab_ZChaffMincost
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     kodkod_engine_satlab_ZChaffMincost
 * Method:    make
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_kodkod_engine_satlab_ZChaffMincost_make
  (JNIEnv *, jclass);

/*
 * Class:     kodkod_engine_satlab_ZChaffMincost
 * Method:    setCost
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_kodkod_engine_satlab_ZChaffMincost_setCost
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     kodkod_engine_satlab_ZChaffMincost
 * Method:    costOf
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_kodkod_engine_satlab_ZChaffMincost_costOf
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     kodkod_engine_satlab_ZChaffMincost
 * Method:    free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_kodkod_engine_satlab_ZChaffMincost_free
  (JNIEnv *, jobject, jlong);

/*
 * Class:     kodkod_engine_satlab_ZChaffMincost
 * Method:    addVariables
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_kodkod_engine_satlab_ZChaffMincost_addVariables
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     kodkod_engine_satlab_ZChaffMincost
 * Method:    addClause
 * Signature: (J[I)Z
 */
JNIEXPORT jboolean JNICALL Java_kodkod_engine_satlab_ZChaffMincost_addClause
  (JNIEnv *, jobject, jlong, jintArray);

/*
 * Class:     kodkod_engine_satlab_ZChaffMincost
 * Method:    solve
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_kodkod_engine_satlab_ZChaffMincost_solve
  (JNIEnv *, jobject, jlong);

/*
 * Class:     kodkod_engine_satlab_ZChaffMincost
 * Method:    valueOf
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_kodkod_engine_satlab_ZChaffMincost_valueOf
  (JNIEnv *, jobject, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif