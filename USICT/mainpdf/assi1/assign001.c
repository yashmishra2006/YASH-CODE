/*
    File name : assign001.c
    Creation Date : 18-09-2024
    Modification Date :
    Author : Pravin Chandra

    This file illustrates the usage of the functions declared in task001.h
    It also uses the aux001.h file.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // for maximum value MACROS of integer data type
#include "aux001.h"
#include "task001.h"

#define N 10000L

int main(void) {
    // prints the OS identified
    printf("ASSIGNMENT 001\n");

    // SwapT family of functions

    { // dummy block
        // time the swap function : int SwapTchar ;
        char x[N];
        char y[N];
        for (unsigned int i = 0; i < N; i++) {
            x[i] = rand() % CHAR_MAX;
            y[i] = rand() % CHAR_MAX;
        }
        double sCpuTime, eCpuTime;
        sCpuTime = currCpuTime();
        for (unsigned int i = 0; i < N; i++) SwapTchar(&x[i], &y[i]);
        eCpuTime = currCpuTime();
        printf("Cpu Time = %10.6f taken for %s\n", dblTimeDiff(eCpuTime, sCpuTime), "SwapTchar");
    }

    { // dummy block
        // time the swap function : int SwapTuchar ;
        unsigned char x[N];
        unsigned char y[N];
        for (unsigned int i = 0; i < N; i++) {
            x[i] = rand() % UCHAR_MAX;
            y[i] = rand() % UCHAR_MAX;
        }
        double sCpuTime, eCpuTime;
        sCpuTime = currCpuTime();
        for (unsigned int i = 0; i < N; i++) SwapTuchar(&x[i], &y[i]);
        eCpuTime = currCpuTime();
        printf("Cpu Time = %10.6f taken for %s\n", dblTimeDiff(eCpuTime, sCpuTime), "SwapTuchar");
    }

    { // dummy block
        // time the swap function : int SwapTschar ;
        signed char x[N];
        signed char y[N];
        for (unsigned int i = 0; i < N; i++) {
            x[i] = rand() % SCHAR_MAX;
            y[i] = rand() % SCHAR_MAX;
        }
        double sCpuTime, eCpuTime;
        sCpuTime = currCpuTime();
        for (unsigned int i = 0; i < N; i++) SwapTschar(&x[i], &y[i]);
        eCpuTime = currCpuTime();
        printf("Cpu Time = %10.6f taken for %s\n", dblTimeDiff(eCpuTime, sCpuTime), "SwapTschar");
    }

    { // dummy block
        // time the swap function : int SwapTshort ;
        short x[N];
        short y[N];
        for (unsigned int i = 0; i < N; i++) {
            x[i] = rand() % SHRT_MAX;
            y[i] = rand() % SHRT_MAX;
        }
        double sCpuTime, eCpuTime;
        sCpuTime = currCpuTime();
        for (unsigned int i = 0; i < N; i++) SwapTshort(&x[i], &y[i]);
        eCpuTime = currCpuTime();
        printf("Cpu Time = %10.6f taken for %s\n", dblTimeDiff(eCpuTime, sCpuTime), "SwapTshort");
    }

    { // dummy block
        // time the swap function : int SwapTint ;
        int x[N];
        int y[N];
        for (unsigned int i = 0; i < N; i++) {
            x[i] = rand() % INT_MAX;
            y[i] = rand() % INT_MAX;
        }
        double sCpuTime, eCpuTime;
        sCpuTime = currCpuTime();
        for (unsigned int i = 0; i < N; i++) SwapTint(&x[i], &y[i]);
        eCpuTime = currCpuTime();
        printf("Cpu Time = %10.6f taken for %s\n", dblTimeDiff(eCpuTime, sCpuTime), "SwapTint");
    }

    { // dummy block
        // time the swap function : int SwapTuint ;
        unsigned int x[N];
        unsigned int y[N];
        for (unsigned int i = 0; i < N; i++) {
            x[i] = rand() % UINT_MAX;
            y[i] = rand() % UINT_MAX;
        }
        double sCpuTime, eCpuTime;
        sCpuTime = currCpuTime();
        for (unsigned int i = 0; i < N; i++) SwapTuint(&x[i], &y[i]);
        eCpuTime = currCpuTime();
        printf("Cpu Time = %10.6f taken for %s\n", dblTimeDiff(eCpuTime, sCpuTime), "SwapTuint");
    }

    { // dummy block
        // time the swap function : int SwapTlong ;
        long x[N];
        long y[N];
        for (unsigned int i = 0; i < N; i++) {
            x[i] = rand() % LONG_MAX;
            y[i] = rand() % LONG_MAX;
        }
        double sCpuTime, eCpuTime;
        sCpuTime = currCpuTime();
        for (unsigned int i = 0; i < N; i++) SwapTlong(&x[i], &y[i]);
        eCpuTime = currCpuTime();
        printf("Cpu Time = %10.6f taken for %s\n", dblTimeDiff(eCpuTime, sCpuTime), "SwapTlong");
    }

    { // dummy block
        // time the swap function : int SwapTulong ;
        unsigned long x[N];
        unsigned long y[N];
        for (unsigned int i = 0; i < N; i++) {
            x[i] = rand() % ULONG_MAX;
            y[i] = rand() % ULONG_MAX;
        }
        double sCpuTime, eCpuTime;
        sCpuTime = currCpuTime();
        for (unsigned int i = 0; i < N; i++) SwapTulong(&x[i], &y[i]);
        eCpuTime = currCpuTime();
        printf("Cpu Time = %10.6f taken for %s\n", dblTimeDiff(eCpuTime, sCpuTime), "SwapTulong");
    }

    { // dummy block
        // time the swap function : int SwapTllong ;
        long long x[N];
        long long y[N];
        for (unsigned int i = 0; i < N; i++) {
            x[i] = rand() % LLONG_MAX;
            y[i] = rand() % LLONG_MAX;
        }
        double sCpuTime, eCpuTime;
        sCpuTime = currCpuTime();
        for (unsigned int i = 0; i < N; i++) SwapTllong(&x[i], &y[i]);
        eCpuTime = currCpuTime();
        printf("Cpu Time = %10.6f taken for %s\n", dblTimeDiff(eCpuTime, sCpuTime), "SwapTllong");
    }

    { // dummy block
        // time the swap function : int SwapTullong ;
        unsigned long long x[N];
        unsigned long long y[N];
        for (unsigned int i = 0; i < N; i++) {
            x[i] = rand() % ULLONG_MAX;
            y[i] = rand() % ULLONG_MAX;
        }
        double sCpuTime, eCpuTime;
        sCpuTime = currCpuTime();
        for (unsigned int i = 0; i < N; i++) SwapTullong(&x[i], &y[i]);
        eCpuTime = currCpuTime();
        printf("Cpu Time = %10.6f taken for %s\n", dblTimeDiff(eCpuTime, sCpuTime), "SwapTullong");
    }

    { // dummy block
        // time the swap function : int SwapTfloat ;
        float x[N];
        float y[N];
        for (unsigned int i = 0; i < N; i++) {
            x[i] = (float)rand() / RAND_MAX;
            y[i] = (float)rand() / RAND_MAX;
        }
        double sCpuTime, eCpuTime;
        sCpuTime = currCpuTime();
        for (unsigned int i = 0; i < N; i++) SwapTfloat(&x[i], &y[i]);
        eCpuTime = currCpuTime();
        printf("Cpu Time = %10.6f taken for %s\n", dblTimeDiff(eCpuTime, sCpuTime), "SwapTfloat");
    }

    { // dummy block
        // time the swap function : int SwapTdouble ;
        double x[N];
        double y[N];
        for (unsigned int i = 0; i < N; i++) {
            x[i] = (double)rand() / RAND_MAX;
            y[i] = (double)rand() / RAND_MAX;
        }
        double sCpuTime, eCpuTime;
        sCpuTime = currCpuTime();
        for (unsigned int i = 0; i < N; i++) SwapTdouble(&x[i], &y[i]);
        eCpuTime = currCpuTime();
        printf("Cpu Time = %10.6f taken for %s\n", dblTimeDiff(eCpuTime, sCpuTime), "SwapTdouble");
    }

    { // dummy block
        // time the swap function : int SwapTldouble ;
        long double x[N];
        long double y[N];
        for (unsigned int i = 0; i < N; i++) {
            x[i] = (long double)rand() / RAND_MAX;
            y[i] = (long double)rand() / RAND_MAX;
        }
        double sCpuTime, eCpuTime;
        sCpuTime = currCpuTime();
        for (unsigned int i = 0; i < N; i++) SwapTldouble(&x[i], &y[i]);
        eCpuTime = currCpuTime();
        printf("Cpu Time = %10.6f taken for %s\n", dblTimeDiff(eCpuTime, sCpuTime), "SwapTldouble");
    }

    { // dummy block
        // time the swap function : int SwapMd;
        long double x[N];
        long double y[N];
        for (unsigned int i = 0; i < N; i++) {
            x[i] = (long double)rand() / RAND_MAX;
            y[i] = (long double)rand() / RAND_MAX;
        }
        double sCpuTime, eCpuTime;
        sCpuTime = currCpuTime();
        SwapMd(x, y, sizeof(long double) * N);
        eCpuTime = currCpuTime();
        printf("Cpu Time = %10.6f taken for %s\n", dblTimeDiff(eCpuTime, sCpuTime), "SwapMd");
    }

    #if !defined (MSC_VER)
    { // dummy block
        // time the swap function : int SwapM;
        long double x[N];
        long double y[N];
        for (unsigned int i = 0; i < N; i++) {
            x[i] = (long double)rand() / RAND_MAX;
            y[i] = (long double)rand() / RAND_MAX;
        }
        double sCpuTime, eCpuTime;
        sCpuTime = currCpuTime();
        SwapM(x, y, sizeof(long double) * N);
        eCpuTime = currCpuTime();
        printf("Cpu Time = %10.6f taken for %s\n", dblTimeDiff(eCpuTime, sCpuTime), "SwapM");
    }
    #endif

    return 0;
}
