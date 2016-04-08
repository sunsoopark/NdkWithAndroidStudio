#include <jni.h>
#include <string.h>

/*
JNIEXPORT jobject
JNIEXPORT jstringJNICALL
                  Java_main_java_com_example_sunsoo_ndktest_MainActivity_getString(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env,"hello");
};*/
JNIEXPORT jstring JNICALL
                 Java_com_example_sunsoo_ndktest_MainActivity_getString(JNIEnv *env,
                                                                        jobject instance)
{

    // TODO


    return (*env)->NewStringUTF(env, "hello!!!!!");
}