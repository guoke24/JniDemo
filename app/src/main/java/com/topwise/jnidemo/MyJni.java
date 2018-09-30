package com.topwise.jnidemo;

public class MyJni {

    static {
        System.loadLibrary("MyJni");
    }

    public native static String get();
    public native static String send(String mkey);

}
