#include <sys/time.h> // For gettimeofday on Unix
#include <time.h>
#include <windows.h>
double currWallTime() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (double)(tv.tv_sec) + (double)(tv.tv_usec) / 1000000.0;
}

double currCpuTime() {
    #if defined(WIN64) || defined(WIN32)
        LARGE_INTEGER frequency, start;
        QueryPerformanceFrequency(&frequency);
        QueryPerformanceCounter(&start);
        return (double)(start.QuadPart) / frequency.QuadPart;
    #else
        return (double)clock() / CLOCKS_PER_SEC;
    #endif
}
