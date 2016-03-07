package com.yiting;

/**
 * Created by hzyiting on 2016/3/7.
 */
public class ObjectArray {
    private static native int[][] initInt2DArray(int size);

    public static void main(String[] args) {
        int[][] arr = initInt2DArray(3);
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.println("arr[][]:"+arr[i][j]);
            }
            System.out.println("=============");
        }
    }

    static {
        System.loadLibrary("libjni");
    }


}
