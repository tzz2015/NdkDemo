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
