#include <jni.h>
#include <string.h>

JNIEXPORT jstring JNICALL
Java_com_hangzhou_h890_meihao_utils_MyNdk_getSecretA(JNIEnv *env, jobject instance) {

    // 加密key


    return (*env)->NewStringUTF(env, "dfdfsdfdsfsd");
}

JNIEXPORT jstring JNICALL
Java_com_hangzhou_h890_meihao_utils_MyNdk_getSecretB(JNIEnv *env, jobject instance) {

    // 加密偏移量


    return (*env)->NewStringUTF(env, "435345343454");
}

JNIEXPORT jstring JNICALL
Java_com_hangzhou_h890_meihao_utils_MyNdk_getSecretC(JNIEnv *env, jobject instance) {

    //微信appid


    return (*env)->NewStringUTF(env, "dsf3fdcwewf");
}

JNIEXPORT jstring JNICALL
Java_com_hangzhou_h890_meihao_utils_MyNdk_getSecretD(JNIEnv *env, jobject instance) {

    //


    return (*env)->NewStringUTF(env, "sfdsfdgd");
}

JNIEXPORT jstring JNICALL
Java_com_hangzhou_h890_meihao_utils_MyNdk_getSecretE(JNIEnv *env, jobject instance) {

    //instance


    return (*env)->NewStringUTF(env, "dsfrgfdf");
}

JNIEXPORT jint JNICALL
Java_com_hangzhou_h890_meihao_utils_MyNdk_getSecretF(JNIEnv *env, jobject instance,
                                                     jstring input_) {
    const char *input = (*env)->GetStringUTFChars(env, input_, 0);
    //  app签名MD5
    char  *c="fsdfdc";
    int  resultCode=strcmp(c,input);
    if(resultCode==0)
        return 1;
    else return 0;

    //  (*env)->ReleaseStringUTFChars(env, input_, input);
}

