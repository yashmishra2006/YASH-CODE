#include <stdio.h>
#include <math.h>

// Tolerance for error
const double TOLERANCE = 1.0e-15;

// Factorial function to be used in series calculations
double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Q1: Sine function using Taylor Series
double sine(double x) {
    double term = x;
    double sum = x;
    int n = 1;
    while (fabs(term) > TOLERANCE) {
        term *= -x * x / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }
    return sum;
}

// Q2: Cosine function using Taylor Series
double cosine(double x) {
    double term = 1;
    double sum = 1;
    int n = 1;
    while (fabs(term) > TOLERANCE) {
        term *= -x * x / ((2 * n - 1) * (2 * n));
        sum += term;
        n++;
    }
    return sum;
}

// Q3: Trigonometric functions derived from sine and cosine
double cosecant(double x) {
    return 1.0 / sine(x);
}

double secant(double x) {
    return 1.0 / cosine(x);
}

double tangent(double x) {
    return sine(x) / cosine(x);
}

double cotangent(double x) {
    return cosine(x) / sine(x);
}

// Q4: Exponential function using Taylor Series
double exponential(double x) {
    double term = 1;
    double sum = 1;
    int n = 1;
    while (fabs(term) > TOLERANCE) {
        term *= x / n;
        sum += term;
        n++;
    }
    return sum;
}

// Q5: Hyperbolic sine using Taylor Series
double sinh_func(double x) {
    double term = x;
    double sum = x;
    int n = 1;
    while (fabs(term) > TOLERANCE) {
        term *= x * x / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }
    return sum;
}

// Q6: Hyperbolic cosine using Taylor Series
double cosh_func(double x) {
    double term = 1;
    double sum = 1;
    int n = 1;
    while (fabs(term) > TOLERANCE) {
        term *= x * x / ((2 * n - 1) * (2 * n));
        sum += term;
        n++;
    }
    return sum;
}

// Q7: Hyperbolic trigonometric functions derived from sinh and cosh
double cosecant_hyperbolic(double x) {
    return 1.0 / sinh_func(x);
}

double secant_hyperbolic(double x) {
    return 1.0 / cosh_func(x);
}

double tangent_hyperbolic(double x) {
    return sinh_func(x) / cosh_func(x);
}

double cotangent_hyperbolic(double x) {
    return cosh_func(x) / sinh_func(x);
}

// Q8: Sum of first N terms of series 0! + 1! + 2! + ... + N!
double sum_of_factorials(int N) {
    double sum = 0;
    for (int i = 0; i <= N; i++) {
        sum += factorial(i);
    }
    return sum;
}

// Q9: Demonstrate all functions
int main() {
    double x;
    int N;

    printf("Enter a value for x in radians: ");
    scanf("%lf", &x);

    // Demonstrate Q1-Q3
    printf("Sine(%.2f) = %.15lf\n", x, sine(x));
    printf("Cosine(%.2f) = %.15lf\n", x, cosine(x));
    printf("Cosecant(%.2f) = %.15lf\n", x, cosecant(x));
    printf("Secant(%.2f) = %.15lf\n", x, secant(x));
    printf("Tangent(%.2f) = %.15lf\n", x, tangent(x));
    printf("Cotangent(%.2f) = %.15lf\n", x, cotangent(x));

    // Demonstrate Q4
    printf("Exponential(%.2f) = %.15lf\n", x, exponential(x));

    // Demonstrate Q5-Q7
    printf("Sinh(%.2f) = %.15lf\n", x, sinh_func(x));
    printf("Cosh(%.2f) = %.15lf\n", x, cosh_func(x));
    printf("Cosecant Hyperbolic(%.2f) = %.15lf\n", x, cosecant_hyperbolic(x));
    printf("Secant Hyperbolic(%.2f) = %.15lf\n", x, secant_hyperbolic(x));
    printf("Tangent Hyperbolic(%.2f) = %.15lf\n", x, tangent_hyperbolic(x));
    printf("Cotangent Hyperbolic(%.2f) = %.15lf\n", x, cotangent_hyperbolic(x));

    // Demonstrate Q8
    printf("Enter a non-negative integer N for factorial series sum: ");
    scanf("%d", &N);
    printf("Sum of first %d factorial terms = %.0lf\n", N, sum_of_factorials(N));

    return 0;
}
