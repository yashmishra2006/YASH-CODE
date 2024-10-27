#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task001.h"  // Assuming task001.h contains declarations for swap functions

// Function to initialize arrays with random values
void initializeArrays(int *arr1, int *arr2, size_t size) {
    for (size_t i = 0; i < size; i++) {
        arr1[i] = rand() % 1000;  // Random values between 0 and 999
        arr2[i] = rand() % 1000;  // Random values between 0 and 999
    }
}

// Function to time the swap operations
void timeSwapFunctions(size_t size) {
    int int_arr1[size];
    int int_arr2[size];

    // Initialize the arrays
    initializeArrays(int_arr1, int_arr2, size);

    // Timing SwapT
    clock_t start = clock();
    for (size_t i = 0; i < size; i++) {
        SwapTint(&int_arr1[i], &int_arr2[i]);
    }
    clock_t end = clock();
    double time_taken_T = (double)(end - start) / CLOCKS_PER_SEC;

    // Re-initialize arrays
    initializeArrays(int_arr1, int_arr2, size);

    // Timing SwapN
    start = clock();
    for (size_t i = 0; i < size; i++) {
        SwapNint(&int_arr1[i], &int_arr2[i]);
    }
    end = clock();
    double time_taken_N = (double)(end - start) / CLOCKS_PER_SEC;

    // Print results
    printf("Array size: %zu\n", size);
    printf("Time taken by SwapT: %f seconds\n", time_taken_T);
    printf("Time taken by SwapN: %f seconds\n", time_taken_N);
}

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Test with different array sizes
    size_t sizes[] = {1000, 10000, 100000};  // You can add more sizes
    for (size_t i = 0; i < sizeof(sizes) / sizeof(sizes[0]); i++) {
        timeSwapFunctions(sizes[i]);
    }

    return 0;
}
