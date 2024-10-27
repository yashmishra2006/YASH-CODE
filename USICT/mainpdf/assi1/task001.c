/***************
File name: task001.c
Creation Date: 18-09-2024
Modification Date:
Author: Pravin Chandra

This is the implementation of the header file "task001.h".
Only a few functions of each family of functions are implemented.
You have to implement the rest yourself.
***************/

#include "task001.h"
#include <stdlib.h>
#include <string.h> // for memcpy

// SwapT family of functions (with temporary variable)

// SwapTchar: Swap two char variables
int SwapTchar(char *x, char *y) {
    char t = *x;
    *x = *y;
    *y = t;
    return 1;
}

// SwapTuchar: Swap two unsigned char variables
int SwapTuchar(unsigned char *x, unsigned char *y) {
    unsigned char t = *x;
    *x = *y;
    *y = t;
    return 1;
}

// SwapTschar: Swap two signed char variables
int SwapTschar(signed char *x, signed char *y) {
    signed char t = *x;
    *x = *y;
    *y = t;
    return 1;
}

// SwapTsmall: Swap two short variables (formerly 'small')
int SwapTshort(short *x, short *y) {
    short t = *x;
    *x = *y;
    *y = t;
    return 1;
}

// SwapTusmall: Swap two unsigned short variables (formerly 'small')
int SwapTushort(unsigned short *x, unsigned short *y) {
    unsigned short t = *x;
    *x = *y;
    *y = t;
    return 1;
}

// SwapTint: Swap two int variables
int SwapTint(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
    return 1;
}

// SwapTuint: Swap two unsigned int variables
int SwapTuint(unsigned int *x, unsigned int *y) {
    unsigned int t = *x;
    *x = *y;
    *y = t;
    return 1;
}

// SwapTlong: Swap two long variables
int SwapTlong(long *x, long *y) {
    long t = *x;
    *x = *y;
    *y = t;
    return 1;
}

// SwapTulong: Swap two unsigned long variables
int SwapTulong(unsigned long *x, unsigned long *y) {
    unsigned long t = *x;
    *x = *y;
    *y = t;
    return 1;
}

// SwapTllong: Swap two long long variables
int SwapTllong(long long *x, long long *y) {
    long long t = *x;
    *x = *y;
    *y = t;
    return 1;
}

// SwapTullong: Swap two unsigned long long variables
int SwapTullong(unsigned long long *x, unsigned long long *y) {
    unsigned long long t = *x;
    *x = *y;
    *y = t;
    return 1;
}

// SwapTfloat: Swap two float variables
int SwapTfloat(float *x, float *y) {
    float t = *x;
    *x = *y;
    *y = t;
    return 1;
}

// SwapTdouble: Swap two double variables
int SwapTdouble(double *x, double *y) {
    double t = *x;
    *x = *y;
    *y = t;
    return 1;
}

// SwapTldouble: Swap two long double variables
int SwapTldouble(long double *x, long double *y) {
    long double t = *x;
    *x = *y;
    *y = t;
    return 1;
}

// SwapN family of functions (without using a temporary variable)

// SwapNchar: Swap two char variables without a temporary variable
int SwapNchar(char *x, char *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    return 1;
}

// SwapNuchar: Swap two unsigned char variables without a temporary variable
int SwapNuchar(unsigned char *x, unsigned char *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    return 1;
}

// SwapNschar: Swap two signed char variables without a temporary variable
int SwapNschar(signed char *x, signed char *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    return 1;
}

// SwapNsmall: Swap two short variables without a temporary variable (formerly 'small')
int SwapNshort(short *x, short *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    return 1;
}

// SwapNusmall: Swap two unsigned short variables without a temporary variable (formerly 'small')
int SwapNushort(unsigned short *x, unsigned short *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    return 1;
}

// SwapNint: Swap two int variables without a temporary variable
int SwapNint(int *x, int *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    return 1;
}

// SwapNuint: Swap two unsigned int variables without a temporary variable
int SwapNuint(unsigned int *x, unsigned int *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    return 1;
}

// SwapNlong: Swap two long variables without a temporary variable
int SwapNlong(long *x, long *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    return 1;
}

// SwapNulong: Swap two unsigned long variables without a temporary variable
int SwapNulong(unsigned long *x, unsigned long *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    return 1;
}

// SwapNllong: Swap two long long variables without a temporary variable
int SwapNllong(long long *x, long long *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    return 1;
}

// SwapNullong: Swap two unsigned long long variables without a temporary variable
int SwapNullong(unsigned long long *x, unsigned long long *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    return 1;
}

// SwapNfloat: Swap two float variables without a temporary variable
int SwapNfloat(float *x, float *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    return 1;
}

// SwapNdouble: Swap two double variables without a temporary variable
int SwapNdouble(double *x, double *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    return 1;
}

// SwapNldouble: Swap two long double variables without a temporary variable
int SwapNldouble(long double *x, long double *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    return 1;
}

// SwapMd: A general swap function using malloc for any data type
int SwapMd(void *x, void *y, const unsigned long dLen) {
    void *t = malloc(dLen);
    if (!t) return 0;
    if (!memcpy(t, x, dLen)) return 0;
    if (!memcpy(x, y, dLen)) return 0;
    if (!memcpy(y, t, dLen)) return 0;
    free(t);
    return 1;
}

// SwapM: General swap function without using malloc (optional)
//#if !defined(MSC_VER)
int SwapM(void *x, void *y, const unsigned long dLen) {
    unsigned char temp;
    unsigned char *a = (unsigned char *)x;
    unsigned char *b = (unsigned char *)y;
    for (unsigned long i = 0; i < dLen; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    return 1;
}
//#endif
