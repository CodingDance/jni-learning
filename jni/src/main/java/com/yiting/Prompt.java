package com.yiting;

/**
 * Created by hzyiting on 2016/3/6.
 */
public class Prompt {
    public native String getLine(String prompt);

    static {
        System.loadLibrary("libjni");
    }
}
