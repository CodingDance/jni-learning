package com.yiting;

/**
 * Created by hzyiting on 2016/3/6.
 */
public class HelloWorld {
    private native void print();
    public static void main(String[] args){

        HelloWorld helloWorld=new HelloWorld();
        helloWorld.print();

        Prompt prompt=new Prompt();
        String str=prompt.getLine("type a line:");
        System.out.println("get string:"+str);
    }

    static {
        System.loadLibrary("libjni");
    }

}
