#include <stdio.h>

// Function to calculate the sum of the series
int calculateSeriesSum(int N) {
    int sum = 0; // Initialize sum

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 1) { // Odd index
            sum += (2 * i - 1); // Add odd term
        } else { // Even index
            sum -= (2 * i - 1); // Subtract odd term
        }
    }

    return sum; // Return the computed sum
}

int main() {
    int N;

    // Ask the user for the number of terms
    printf("Enter the number of terms (N > 0): ");
    scanf("%d", &N);

    // Validate input
    if (N <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1; // Exit with an error code
    }

    // Calculate the sum
    int result = calculateSeriesSum(N);

    // Display the result
    printf("The sum of the first %d terms of the series is: %d\n", N, result);

    return 0; // Successful execution
}
