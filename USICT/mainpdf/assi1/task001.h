/***************
File name: task001.h
Creation Date: 18-09-2024
Modification Date:
Author: Pravin Chandra

This is the header file for the Assignment 001
All functions declared in this file return 1 on success else 0
***************/

#ifndef TASK001_H
#define TASK001_H

// SwapT family of functions
int SwapTchar(char *, char *);
int SwapTuchar(unsigned char *, unsigned char *);
int SwapTschar(signed char *, signed char *);

int SwapTshort(short *, short *); // Replace 'small' with 'short'
int SwapTushort(unsigned short *, unsigned short *); // Replace 'small' with 'unsigned short'

int SwapTint(int *, int *);
int SwapTuint(unsigned *, unsigned *);

int SwapTlong(long *, long *);
int SwapTulong(unsigned long *, unsigned long *);

int SwapTllong(long long *, long long *);
int SwapTullong(unsigned long long *, unsigned long long *);

int SwapTfloat(float *, float *);
int SwapTdouble(double *, double *);
int SwapTldouble(long double *, long double *);

// SwapN family of functions
int SwapNchar(char *, char *);
int SwapNuchar(unsigned char *, unsigned char *);
int SwapNschar(signed char *, signed char *);

int SwapNshort(short *, short *); // Replace 'small' with 'short'
int SwapNushort(unsigned short *, unsigned short *); // Replace 'small' with 'unsigned short'

int SwapNint(int *, int *);
int SwapNuint(unsigned *, unsigned *);

int SwapNlong(long *, long *);
int SwapNulong(unsigned long *, unsigned long *);

int SwapNllong(long long *, long long *);
int SwapNullong(unsigned long long *, unsigned long long *);

int SwapNfloat(float *, float *);
int SwapNdouble(double *, double *);
int SwapNldouble(long double *, long double *);

// SwapMd function for general type swapping
int SwapMd(void *, void *, const unsigned long dLen);

// SwapM function for general type swapping (optional)
//#if !defined(MSC_VER)
int SwapM(void *, void *, const unsigned long dLen);
//#endif

#endif // TASK001_H
