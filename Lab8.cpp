//
// Created by Aliab Eman on 2021-11-21.
//

#include "JavaTextMenu.h"
#include <iostream>
#include <cmath>

using namespace std;
static jdouble mean = 0;
static jdouble dev = 0;

JNIEXPORT jdouble JNICALL Java_JavaTextMenu_calculateMean
(JNIEnv* env, jobject caller, jintArray arr ) {

    //To get the array length
    int len = env->GetArrayLength(arr);

    //to get array elements
    jint *elements = (env)->GetIntArrayElements(arr,NULL);
mean = 0;
    //to iterate over the array
    for(int i = 0; i < len; i++)
    {
        mean += elements[i];
    }
    mean = mean / len;

    env->ReleaseIntArrayElements(arr, elements, 0);

    return mean;
}

JNIEXPORT jdouble JNICALL Java_JavaTextMenu_calculateSTDDev
        (JNIEnv * env, jobject caller, jintArray arr) {
    int len = env->GetArrayLength(arr);
mean  = 0;
dev = 0;
    jint *elements = (env)->GetIntArrayElements(arr,NULL);

    for(int i = 0; i < len; i++)
    {
        mean += elements[i];
    }
    mean = mean / len;

    for (int i = 0; i  < len; i++) {
        dev += pow((elements[i] - mean), 2);
    }

    return sqrt(dev/(len-1));

}