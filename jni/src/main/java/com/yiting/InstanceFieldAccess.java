package com.yiting;

/**
 * Created by hzyiting on 2016/3/7.
 */
public class InstanceFieldAccess {
    private String s;
    private native void accessField();

    public static void main(String[] args){
        InstanceFieldAccess access=new InstanceFieldAccess();
        access.s="abc";
        access.accessField();
        System.out.println(access.s);
    }

    static {
        System.loadLibrary("libjni");
    }
}
