#include <jni.h>
#include <stdio.h>
#include "com_yiting_HelloWorld.h"


JNIEXPORT void Java_com_yiting_HelloWorld_print(JNIEnv *env, jobject obj)
{
	printf("Hello world\n");
	return;
}
