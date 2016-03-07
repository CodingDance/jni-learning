#include <stdio.h>
#include <jni.h>
#include "com_yiting_InstanceFieldAccess.h"

JNIEXPORT void JNICALL Java_com_yiting_InstanceFieldAccess_accessField(JNIEnv *env, jobject object)
{
	jfieldID fieldId;

	jstring jstr;
	jclass cls=(*env)->GetObjectClass(env,object);
	fieldId=(*env)->GetFieldID(env,cls,"s","Ljava/lang/String;");
	if(fieldId==NULL)
	{
		return ;
	}

	jstr=(*env)->GetObjectField(env,object,fieldId);

	char *str=(*env)->GetStringUTFChars(env,jstr,NULL);
	if(str==NULL){
		return ;
	}
	printf("c.s=%s",str);
	(*env)->ReleaseStringUTFChars(env,jstr,NULL);

	jstr=(*env)->NewStringUTF(env,"YES BABY!");
	if(jstr==NULL){
		return;
	}
	(*env)->SetObjectField(env,object,fieldId,jstr);
}

