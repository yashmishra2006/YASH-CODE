#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to find the minimum element
int min_array(int array[], int N) {
    int min_value = array[0];
    for (int i = 1; i < N; i++) {
        if (array[i] < min_value) {
            min_value = array[i];
        }
    }
    return min_value;
}

// Function to find the maximum element
int max_array(int array[], int N) {
    int max_value = array[0];
    for (int i = 1; i < N; i++) {
        if (array[i] > max_value) {
            max_value = array[i];
        }
    }
    return max_value;
}

// Function to find the minimum and maximum element in one pass
void min_max_array(int array[], int N, int *min_value, int *max_value) {
    *min_value = array[0];
    *max_value = array[0];
    for (int i = 1; i < N; i++) {
        if (array[i] < *min_value) {
            *min_value = array[i];
        }
        if (array[i] > *max_value) {
            *max_value = array[i];
        }
    }
}

// Function to calculate the mean of the array
double mean_array(int array[], int N) {
    double sum = 0;
    for (int i = 0; i < N; i++) {
        sum += array[i];
    }
    return sum / N;
}

// Function to calculate the variance of the array
double variance_array(int array[], int N, double mean) {
    double variance = 0;
    for (int i = 0; i < N; i++) {
        variance += (array[i] - mean) * (array[i] - mean);
    }
    return variance / N; // Change to N-1 for sample variance
}

// Function to calculate the sum of squares of the array
double sum_square_array(int array[], int N) {
    double sum_squares = 0;
    for (int i = 0; i < N; i++) {
        sum_squares += array[i] * array[i];
    }
    return sum_squares;
}

// Function to calculate the harmonic mean of the array
double harmonic_mean_array(int array[], int N) {
    double reciprocal_sum = 0;
    for (int i = 0; i < N; i++) {
        if (array[i] == 0) {
            return 0; // Handle division by zero
        }
        reciprocal_sum += 1.0 / array[i];
    }
    return N / reciprocal_sum;
}

int main() {
    printf("Enter the number of elements in your array, N= ");
    int N;
    scanf("%d", &N); // Corrected to use &N
    if (N <= 0) {
        printf("Please enter a positive integer for N.\n");
        return 1; // Exit if N is not positive
    }

    int *array = (int *)malloc(N * sizeof(int)); // Dynamically allocate memory for the array
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit if memory allocation fails
    }

    printf("Enter %d integers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    // Calculate mean once and use it
    double mean = mean_array(array, N);

    // Use the new function to get min and max values in one pass
    int min_value, max_value;
    min_max_array(array, N, &min_value, &max_value);

    // Output the results using separate functions
    printf("Minimum value (using separate function): %d\n", min_array(array, N));
    printf("Maximum value (using separate function): %d\n", max_array(array, N));
    printf("Minimum value (using combined function): %d\n", min_value);
    printf("Maximum value (using combined function): %d\n", max_value);
    
    // Output the calculated statistics
    printf("Mean: %.2f\n", mean);
    printf("Variance: %.2f\n", variance_array(array, N, mean));
    printf("Sum of squares: %.2f\n", sum_square_array(array, N));
    printf("Harmonic mean: %.2f\n", harmonic_mean_array(array, N));

    free(array); // Free allocated memory
    return 0;
}