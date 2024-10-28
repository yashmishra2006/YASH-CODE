#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task001.h"  // Include the task001.h
#include "aux001.h"   // Include the auxiliary functions for timing

// Function to initialize arrays with random values
void initializeIntArray(int *arr, size_t size) {
    for (size_t i = 0; i < size; i++) {
        arr[i] = rand() % 1000; // Random integers between 0 and 999
    }
}

void initializeFloatArray(float *arr, size_t size) {
    for (size_t i = 0; i < size; i++) {
        arr[i] = (float)(rand() % 1000) / 10.0; // Random floats between 0.0 and 99.9
    }
}

void initializeCharArray(char *arr, size_t size) {
    for (size_t i = 0; i < size; i++) {
        arr[i] = 'A' + (rand() % 26); // Random characters from A-Z
    }
}

// Function to time the swap operations
void timeSwapFunctions(size_t size) {
    // Allocate arrays
    int *arr1_int = malloc(size * sizeof(int));
    int *arr2_int = malloc(size * sizeof(int));
    float *arr1_float = malloc(size * sizeof(float));
    float *arr2_float = malloc(size * sizeof(float));
    char *arr1_char = malloc(size * sizeof(char));
    char *arr2_char = malloc(size * sizeof(char));

    // Initialize arrays
    initializeIntArray(arr1_int, size);
    initializeIntArray(arr2_int, size);
    initializeFloatArray(arr1_float, size);
    initializeFloatArray(arr2_float, size);
    initializeCharArray(arr1_char, size);
    initializeCharArray(arr2_char, size);

    // Timing for SwapNint
    double start = currCpuTime();
    SwapNint(arr1_int, arr2_int, size);
    double end = currCpuTime();
    printf("Time taken by SwapNint for size %zu: %f seconds\n", size, dblTimeDiff(end, start));

    // Timing for SwapNfloat
    start = currCpuTime();
    SwapNfloat(arr1_float, arr2_float, size);
    end = currCpuTime();
    printf("Time taken by SwapNfloat for size %zu: %f seconds\n", size, dblTimeDiff(end, start));

    // Timing for SwapNchar
    start = currCpuTime();
    SwapNchar(arr1_char, arr2_char, size);
    end = currCpuTime();
    printf("Time taken by SwapNchar for size %zu: %f seconds\n", size, dblTimeDiff(end, start));

    // Free allocated memory
    free(arr1_int);
    free(arr2_int);
    free(arr1_float);
    free(arr2_float);
    free(arr1_char);
    free(arr2_char);
}

int main() {
    // Seed the random number generator
    srand((unsigned int)time(NULL));

    size_t sizes[] = {1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 100000000000}; // Different array sizes

    for (size_t i = 0; i < sizeof(sizes) / sizeof(sizes[0]); i++) {
        printf("Running tests for size: %zu\n", sizes[i]);
        timeSwapFunctions(sizes[i]);
    }

    return 0; // Return code for success
}
