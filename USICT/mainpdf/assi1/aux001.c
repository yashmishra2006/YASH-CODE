#include "aux001.h"
#include <time.h>

double currCpuTime() {
    return (double)clock() / CLOCKS_PER_SEC;
}

double dblTimeDiff(double endTime, double startTime) {
    return endTime - startTime;
}
