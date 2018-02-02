# NdkDemo

1.第一步
#Fri Feb 02 11:58:57 CST 2018
distributionBase=GRADLE_USER_HOME
distributionPath=wrapper/dists
zipStoreBase=GRADLE_USER_HOME
zipStorePath=wrapper/dists
distributionUrl=https\://services.gradle.org/distributions/gradle-4.1-all.zip

 dependencies {
        //classpath 'com.android.tools.build:gradle:3.0.1'
        classpath 'com.android.tools.build:gradle-experimental:0.11.1'


        // NOTE: Do not place your application dependencies here; they belong
        // in the individual module build.gradle files
    }
2.第二步
package com.hangzhou.h890.meihao.utils;

/**
 * Created by 刘宇飞 on 2017/8/18.
 * 邮箱：3494576680@qq.com
 * 描述：
 */

public class MyNdk {
    static {
        System.loadLibrary("MyLibrary");
    }
    private static MyNdk instance = null;

    private MyNdk() {

    }

    public static MyNdk getInstance() {
        if (instance == null){
            instance = new MyNdk();
        }

        return instance;
    }

    public native String getSecretA();

    public native String getSecretB();

    public native String getSecretC();

    public native String getSecretD();

    public native String getSecretE();

    public native int getSecretF(String input);
}
3.编写c文件
#include <jni.h>
#include <string.h>

JNIEXPORT jstring JNICALL
Java_com_hangzhou_h890_meihao_utils_MyNdk_getSecretA(JNIEnv *env, jobject instance) {

    // 加密key


    return (*env)->NewStringUTF(env, "dfdfsdfdsfsd");
}
4.使用
 TextView textView= (TextView) findViewById(R.id.tv_look);
      textView.setText(MyNdk.getInstance().getSecretA());
