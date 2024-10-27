#include <stdio.h>

// Function declarations
int sum_of_first_n_natural_numbers(int n);
int sum_of_first_n_odd_numbers(int n);
int sum_of_first_n_even_numbers(int n);
double sum_of_first_n_reciprocal(int n);

int main() {
    int N;

    // Ask the user for the value of N
    printf("Enter the value of N (N ≥ 0): ");
    scanf("%d", &N);

    // Calculate sums
    int sum_natural = sum_of_first_n_natural_numbers(N);
    int sum_odd = sum_of_first_n_odd_numbers(N);
    int sum_even = sum_of_first_n_even_numbers(N);
    double sum_reciprocal = sum_of_first_n_reciprocal(N);
    
    // Display the results
    printf("Sum of the first %d natural numbers: %d\n", N, sum_natural);
    printf("Sum of the first %d odd numbers: %d\n", N, sum_odd);
    printf("Sum of the first %d even numbers: %d\n", N, sum_even);
    printf("Sum of the first %d terms of the series 1 + 1/2 + 1/3 + ... + 1/%d: %.6f\n", N, N, sum_reciprocal);

    return 0;
}

// Implementation of the first algorithm
int sum_of_first_n_natural_numbers(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;  // Update the sum
    }
    return s;
}

// Implementation of the second algorithm
int sum_of_first_n_odd_numbers(int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += (2 * i + 1);  // Update the sum of odd numbers
    }
    return s;
}

// Implementation of the third algorithm
int sum_of_first_n_even_numbers(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += (2 * i);  // Update the sum of even numbers
    }
    return s;
}

// Implementation of the fourth algorithm
double sum_of_first_n_reciprocal(int n) {
    double s = 0.0;
    for (int i = 1; i <= n; i++) {
        s += (1.0 / i);  // Update the sum of reciprocals
    }
    return s;
}
