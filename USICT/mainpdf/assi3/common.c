#include <stdio.h>

// Function declarations
long long iterative_factorial(int n);
long long recursive_factorial(int n);
double compute_inverse_factorial(int n);
double compute_x_power_n_over_n_factorial(double x, int n);
int is_factorial_number(long long m);
long long binomial_coefficient(int n, int r);

int main() {
    int N, R;
    double x;

    // Q1: Factorial Calculation
    printf("Enter a non-negative integer N for factorial calculations: ");
    scanf("%d", &N);
    printf("Iterative Factorial of %d: %lld\n", N, iterative_factorial(N));
    printf("Recursive Factorial of %d: %lld\n", N, recursive_factorial(N));

    // Q2: Compute 1/N!
    printf("1/%d! = %lf\n", N, compute_inverse_factorial(N));

    // Q3: Compute x^N/N!
    printf("Enter a floating-point number x: ");
    scanf("%lf", &x);
    printf("x^%d/N! = %lf\n", N, compute_x_power_n_over_n_factorial(x, N));

    // Q4: Check if M is a Factorial Number
    long long M;
    printf("Enter a number M to check if it is a factorial number: ");
    scanf("%lld", &M);
    if (is_factorial_number(M)) {
        printf("%lld is a factorial number.\n", M);
    } else {
        printf("%lld is not a factorial number.\n", M);
    }

    // Q5: Calculate Binomial Coefficient
    printf("Enter values for N and R (N >= R >= 0): ");
    scanf("%d %d", &N, &R);
    if (R > N) {
        printf("Invalid input: R cannot be greater than N.\n");
    } else {
        printf("Binomial Coefficient %dC%d = %lld\n", N, R, binomial_coefficient(N, R));
    }

    return 0;
}

// Q1: Iterative Factorial Implementation
long long iterative_factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Q1: Recursive Factorial Implementation
long long recursive_factorial(int n) {
    if (n == 0) return 1;
    return n * recursive_factorial(n - 1);
}

// Q2: Compute 1/N!
double compute_inverse_factorial(int n) {
    return 1.0 / iterative_factorial(n);
}

// Q3: Compute x^N/N!
double compute_x_power_n_over_n_factorial(double x, int n) {
    double x_power_n = 1.0;
    for (int i = 0; i < n; i++) {
        x_power_n *= x;
    }
    return x_power_n / iterative_factorial(n);
}

// Q4: Check if M is a Factorial Number
int is_factorial_number(long long m) {
    long long factorial = 1;
    int i = 1;
    while (factorial < m) {
        factorial *= i;
        i++;
    }
    return factorial == m;
}

// Q5: Calculate Binomial Coefficient
long long binomial_coefficient(int n, int r) {
    return iterative_factorial(n) / (iterative_factorial(r) * iterative_factorial(n - r));
}
