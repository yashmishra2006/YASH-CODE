#include <stdio.h>

int calculate_sum(int n);

int main() {
    int N;

    // Ask the user for the value of N
    printf("Enter the value of N (N > 0): ");
    scanf("%d", &N);

    // Validate input
    if (N <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    // Calculate and display the sum of the series
    int sum = calculate_sum(N);
    printf("The sum of the first %d terms of the series is: %d\n", N, sum);

    return 0;
}

// Function to calculate the sum of the first N terms of the series
int calculate_sum(int n) {
    int s = 0;  // Initialize the sum

    for (int i = 0; i < n; i++) {
        int term = 2 * i + 1;  // Generate the i-th odd number
        if (i % 2 == 0) {
            s += term;  // Add if i is even
        } else {
            s -= term;  // Subtract if i is odd
        }
    }
    return s;  // Return the computed sum
}
