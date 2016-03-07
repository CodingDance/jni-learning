#include <stdio.h>
#include <jni.h>
#include "com_yiting_ObjectArray.h"


JNIEXPORT jobjectArray JNICALL Java_com_yiting_ObjectArray_initInt2DArray(JNIEnv *env, jclass cls, jint size)
{
	jobjectArray result;
	int i;
	jclass intArrCls=(*env)->FindClass(env,"[I");
	if (intArrCls==NULL)
	{
		return NULL;
	}
	result=(*env)->NewObjectArray(env,size,intArrCls,NULL);
	if(result==NULL)
	{
		return NULL;
	}

	for(int i=0;i<size;i++){
		jint tmp[10];
		int j;
		jintArray iarr=(*env)->NewIntArray(env,size);
		if(iarr==NULL)
		{
			return NULL;
		}
		for(j=0;j<size;j++){
			tmp[j]=i+j;
		}
		(*env)->SetIntArrayRegion(env,iarr,0,size,tmp);
		(*env)->SetObjectArrayElement(env,result,i,iarr);
		(*env)->DeleteLocalRef(env,iarr);
	}
	return result;


}
