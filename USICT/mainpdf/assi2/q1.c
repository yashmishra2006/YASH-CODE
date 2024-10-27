#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to find minimum and maximum elements in the array
void findMinMax(int* arr, int size, int* min, int* max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
}

// Function to calculate the mean of the array
double findMean(int* arr, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

// Function to calculate the variance of the array
double findVariance(int* arr, int size, double mean) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += (arr[i] - mean) * (arr[i] - mean);
    }
    return sum / size;
}

// Function to calculate the sum of squares of the array elements
double sumOfSquares(int* arr, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i] * arr[i];
    }
    return sum;
}

// Function to calculate the harmonic mean of the array
double harmonicMean(int* arr, int size) {
    double reciprocalSum = 0.0;
    for (int i = 0; i < size; i++) {
        reciprocalSum += 1.0 / arr[i];
    }
    return size / reciprocalSum;
}

int main() {
    int N;

    // Read the size of the array from the user
    printf("Enter the number of elements (N): ");
    scanf("%d", &N);

    // Dynamically allocate memory for the array
    int* arr = (int*)malloc(N * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read values into the array
    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate and display results
    int min, max;
    findMinMax(arr, N, &min, &max);
    double mean = findMean(arr, N);
    double variance = findVariance(arr, N, mean);
    double sumSquares = sumOfSquares(arr, N);
    double hMean = harmonicMean(arr, N);

    // Print results
    printf("Minimum Element: %d\n", min);
    printf("Maximum Element: %d\n", max);
    printf("Mean: %.2f\n", mean);
    printf("Variance: %.2f\n", variance);
    printf("Sum of Squares: %.2f\n", sumSquares);
    printf("Harmonic Mean: %.2f\n", hMean);

    // Free allocated memory
    free(arr);
    return 0;
}
