/***************
File name: aux001.c
Creation Date: 17-09-2024
Modification Date:
Author: Pravin Chandra

This is the implementation of the header file "aux001.h".
***************/

#include "aux001.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#if defined(WIN64) || defined(WIN32)
#include <windows.h> // required for Windows time measurement only
#endif

// osType returns a constant string with information about the OS type
const char* osType() {
    #if defined(WIN64)
        return "Windows 64 Bit";
    #elif defined(WIN32)
        return "Windows 32 Bit";
    #elif defined(linux)
        return "One of the Linux OS";
    #elif defined(APPLE) && defined(MACH)
        return "Apple Mac";
    #elif defined(unix)
        return "One of the Unix OS";
    #else
        return "Unknown OS";
    #endif
}

// currWallTime returns the number of seconds elapsed since the beginning of the Epoch
double currWallTime() {
    return (double)time(NULL);
}

// currCpuTime returns the number of seconds and microseconds since the beginning of the Epoch
double currCpuTime() {
    #if defined(WIN64) || defined(WIN32)
        LARGE_INTEGER frequency;
        LARGE_INTEGER start;
        QueryPerformanceFrequency(&frequency);
        QueryPerformanceCounter(&start);
        return (double)(start.QuadPart) / frequency.QuadPart;
    #else
        return (double)clock() / CLOCKS_PER_SEC;
    #endif
}

// returns the difference in time (in seconds.microseconds)
double dblTimeDiff(double endTime, double startTime) {
    return endTime - startTime;
}

// Sieve of Eratosthenes
char* sieveEratosthenes(char* A, unsigned long N) {
    A[0] = 0; // index 0 stands for the number 0
    A[1] = 0; // index 1 stands for the number 1
    for (unsigned long i = 2; i <= N; i++) A[i] = 1; // mark all numbers as prime
    for (unsigned long i = 2; i * i <= N; i++) {
        if (A[i] == 1) {
            for (unsigned long j = i * i; j <= N; j += i) {
                A[j] = 0; // mark multiples as non-prime
            }
        }
    }
    return A;
}
