#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task001.h"  // Assuming task001.h contains declarations for swap functions
#include "aux001.h"   // Include the auxiliary functions for timing

// Function to initialize arrays with random values for integers
void initializeIntArrays(int *arr1, int *arr2, size_t size) {
    for (size_t i = 0; i < size; i++) {
        arr1[i] = rand() % 1000;  // Random values between 0 and 999
        arr2[i] = rand() % 1000;  // Random values between 0 and 999
    }
}

// Function to initialize arrays with random values for floats
void initializeFloatArrays(float *arr1, float *arr2, size_t size) {
    for (size_t i = 0; i < size; i++) {
        arr1[i] = (float)(rand() % 1000) / 10.0;  // Random float values
        arr2[i] = (float)(rand() % 1000) / 10.0;  // Random float values
    }
}

// Function to initialize arrays with random characters
void initializeCharArrays(char *arr1, char *arr2, size_t size) {
    for (size_t i = 0; i < size; i++) {
        arr1[i] = 'A' + (rand() % 26);  // Random characters from A-Z
        arr2[i] = 'A' + (rand() % 26);  // Random characters from A-Z
    }
}

// Function to time the swap operations
void timeSwapFunctions(size_t originalSize, char dataType) {
    size_t size = originalSize;
    int *arr1_int = NULL, *arr2_int = NULL;
    float *arr1_float = NULL, *arr2_float = NULL;
    char *arr1_char = NULL, *arr2_char = NULL;

    // Allocate and initialize arrays based on the data type
    if (dataType == 'i') {
        arr1_int = (int *)malloc(size * sizeof(int));
        arr2_int = (int *)malloc(size * sizeof(int));
        initializeIntArrays(arr1_int, arr2_int, size);
    } else if (dataType == 'f') {
        arr1_float = (float *)malloc(size * sizeof(float));
        arr2_float = (float *)malloc(size * sizeof(float));
        initializeFloatArrays(arr1_float, arr2_float, size);
    } else if (dataType == 'c') {
        arr1_char = (char *)malloc(size * sizeof(char));
        arr2_char = (char *)malloc(size * sizeof(char));
        initializeCharArrays(arr1_char, arr2_char, size);
    } else {
        fprintf(stderr, "Invalid data type specified.\n");
        return; // Exit the function if data type is invalid
    }

    // Timing for SwapT
    double start = currCpuTime();
    if (dataType == 'i') {
        for (size_t i = 0; i < size; i++) {
            SwapTint(&arr1_int[i], &arr2_int[i]);
        }
    } else if (dataType == 'f') {
        for (size_t i = 0; i < size; i++) {
            SwapTfloat(&arr1_float[i], &arr2_float[i]);
        }
    } else if (dataType == 'c') {
        for (size_t i = 0; i < size; i++) {
            SwapTchar(&arr1_char[i], &arr2_char[i]);
        }
    }
    double end = currCpuTime();
    double timeSwapT = dblTimeDiff(end, start);

    // Re-initialize arrays for SwapN
    if (dataType == 'i') {
        initializeIntArrays(arr1_int, arr2_int, size);
    } else if (dataType == 'f') {
        initializeFloatArrays(arr1_float, arr2_float, size);
    } else if (dataType == 'c') {
        initializeCharArrays(arr1_char, arr2_char, size);
    }

    // Timing for SwapN
    start = currCpuTime();
    if (dataType == 'i') {
        SwapNint(arr1_int, arr2_int);
    } else if (dataType == 'f') {
        SwapNfloat(arr1_float, arr2_float);
    } else if (dataType == 'c') {
        SwapNchar(arr1_char, arr2_char);
    }
    end = currCpuTime();
    double timeSwapN = dblTimeDiff(end, start);

    // Print results
    printf("Original array size: %lu\n", (unsigned long)originalSize);
    printf("Time taken by SwapT: %f seconds\n", timeSwapT);
    printf("Time taken by SwapN: %f seconds\n", timeSwapN);

    // Free allocated memory
    free(arr1_int);
    free(arr2_int);
    free(arr1_float);
    free(arr2_float);
    free(arr1_char);
    free(arr2_char);
}

int main() {
    size_t size;
    char dataType;

    // Prompt the user for the array size
    printf("Enter the size of the arrays: ");
    scanf("%lu", (unsigned long *)&size); // Read size_t input using %lu

    // Validate the input size
    if (size == 0) {
        fprintf(stderr, "Invalid array size. Size must be greater than 0.\n");
        return 1; // Return code for failure
    }

    // Prompt the user for the data type
    printf("Enter data type (i for int, f for float, c for char): ");
    scanf(" %c", &dataType); // Space before %c to consume any newline characters

    // Seed the random number generator
    srand((unsigned int)time(NULL));

    // Time the swap functions for the specified array size and data type
    timeSwapFunctions(size, dataType);

    return 0; // Return code for success
}
