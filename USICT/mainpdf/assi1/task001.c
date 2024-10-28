#include "task001.h"

// Function to swap integers
void SwapTint(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to swap floats
void SwapTfloat(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

// Function to swap characters
void SwapTchar(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Function to swap arrays (assuming you want to swap entire arrays)
void SwapNint(int *arr1, int *arr2, size_t size) {
    for (size_t i = 0; i < size; i++) {
        SwapTint(&arr1[i], &arr2[i]);
    }
}

void SwapNfloat(float *arr1, float *arr2, size_t size) {
    for (size_t i = 0; i < size; i++) {
        SwapTfloat(&arr1[i], &arr2[i]);
    }
}

void SwapNchar(char *arr1, char *arr2, size_t size) {
    for (size_t i = 0; i < size; i++) {
        SwapTchar(&arr1[i], &arr2[i]);
    }
}
