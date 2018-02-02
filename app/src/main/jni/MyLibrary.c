#include <jni.h>
#include <string.h>

JNIEXPORT jstring JNICALL
Java_com_hangzhou_h890_meihao_utils_MyNdk_getSecretA(JNIEnv *env, jobject instance) {

    // 加密key


    return (*env)->NewStringUTF(env, "dfileyjfmcflepqs");
}

JNIEXPORT jstring JNICALL
Java_com_hangzhou_h890_meihao_utils_MyNdk_getSecretB(JNIEnv *env, jobject instance) {

    // 加密偏移量


    return (*env)->NewStringUTF(env, "9352130217320440");
}

JNIEXPORT jstring JNICALL
Java_com_hangzhou_h890_meihao_utils_MyNdk_getSecretC(JNIEnv *env, jobject instance) {

    //微信appid


    return (*env)->NewStringUTF(env, "wx3c404ef506d13b81");
}

JNIEXPORT jstring JNICALL
Java_com_hangzhou_h890_meihao_utils_MyNdk_getSecretD(JNIEnv *env, jobject instance) {

    //


    return (*env)->NewStringUTF(env, "ldowmcialcmfiwrt");
}

JNIEXPORT jstring JNICALL
Java_com_hangzhou_h890_meihao_utils_MyNdk_getSecretE(JNIEnv *env, jobject instance) {

    //instance


    return (*env)->NewStringUTF(env, "fdgh4ghyh865cdwr");
}

JNIEXPORT jint JNICALL
Java_com_hangzhou_h890_meihao_utils_MyNdk_getSecretF(JNIEnv *env, jobject instance,
                                                     jstring input_) {
    const char *input = (*env)->GetStringUTFChars(env, input_, 0);
    //  app签名MD5
    char  *c="a83b28cbd729e053bbe2f648f03ca713";
    int  resultCode=strcmp(c,input);
    if(resultCode==0)
        return 1;
    else return 0;

    //  (*env)->ReleaseStringUTFChars(env, input_, input);
}

