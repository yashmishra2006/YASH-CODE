#include <stdio.h>

// Function to calculate the sine of x using the Taylor series
double sine(double x) {
    double term = x;  // First term in the series
    double sum = term;
    int n = 1;

    while ((term / sum) > 1.0e-15 || (term / sum) < -1.0e-15) {
        term *= -x * x / ((2 * n) * (2 * n + 1));  // Ratio of previous to current term
        sum += term;
        n++;
    }
    return sum;
}

// Function to calculate the cosine of x using the Taylor series
double cosine(double x) {
    double term = 1;  // First term in the series
    double sum = term;
    int n = 1;

    while ((term / sum) > 1.0e-15 || (term / sum) < -1.0e-15) {
        term *= -x * x / ((2 * n - 1) * (2 * n));  // Ratio of previous to current term
        sum += term;
        n++;
    }
    return sum;
}

// Function to calculate the exponential of x using the Taylor series
double exponential(double x) {
    double term = 1;  // First term in the series
    double sum = term;
    int n = 1;

    while ((term / sum) > 1.0e-15 || (term / sum) < -1.0e-15) {
        term *= x / n;  // Ratio of previous to current term
        sum += term;
        n++;
    }
    return sum;
}

// Hyperbolic sine function using Taylor series
double sinh(double x) {
    double term = x;
    double sum = term;
    int n = 1;

    while ((term / sum) > 1.0e-15 || (term / sum) < -1.0e-15) {
        term *= x * x / ((2 * n) * (2 * n + 1));  // Ratio of previous to current term
        sum += term;
        n++;
    }
    return sum;
}

// Hyperbolic cosine function using Taylor series
double cosh(double x) {
    double term = 1;
    double sum = term;
    int n = 1;

    while ((term / sum) > 1.0e-15 || (term / sum) < -1.0e-15) {
        term *= x * x / ((2 * n - 1) * (2 * n));  // Ratio of previous to current term
        sum += term;
        n++;
    }
    return sum;
}

// Function to calculate cosecant using sine function
double cosecant(double x) {
    double sin_x = sine(x);
    return (sin_x != 0) ? 1.0 / sin_x : 0.0;
}

// Function to calculate secant using cosine function
double secant(double x) {
    double cos_x = cosine(x);
    return (cos_x != 0) ? 1.0 / cos_x : 0.0;
}

// Function to calculate tangent using sine and cosine functions
double tangent(double x) {
    double cos_x = cosine(x);
    return (cos_x != 0) ? sine(x) / cos_x : 0.0;
}

// Function to calculate cotangent using sine and cosine functions
double cotangent(double x) {
    double sin_x = sine(x);
    return (sin_x != 0) ? cosine(x) / sin_x : 0.0;
}

// Hyperbolic cosecant
double cosech(double x) {
    double sinh_x = sinh(x);
    return (sinh_x != 0) ? 1.0 / sinh_x : 0.0;
}

// Hyperbolic secant
double sech(double x) {
    double cosh_x = cosh(x);
    return (cosh_x != 0) ? 1.0 / cosh_x : 0.0;
}

// Hyperbolic tangent
double tanh(double x) {
    double cosh_x = cosh(x);
    return (cosh_x != 0) ? sinh(x) / cosh_x : 0.0;
}

// Hyperbolic cotangent
double coth(double x) {
    double sinh_x = sinh(x);
    return (sinh_x != 0) ? cosh(x) / sinh_x : 0.0;
}

// Q8: Sum of the first N terms of factorial series fn = 0! + 1! + 2! + ... + N!
double factorial_series_sum(int N) {
    double sum = 1.0;  // 0! = 1
    double factorial = 1.0;

    for (int i = 1; i <= N; i++) {
        factorial *= i;  // Calculating i!
        sum += factorial;
    }
    return sum;
}

int main() {
    double x;
    int N;

    // Demonstration for sine, cosine, and exponential functions
    printf("Enter a value for x (in radians) to calculate sine, cosine, and exponential: ");
    scanf("%lf", &x);
    printf("sine(%lf) = %.15f\n", x, sine(x));
    printf("cosine(%lf) = %.15f\n", x, cosine(x));
    printf("exp(%lf) = %.15f\n", x, exponential(x));

    // Hyperbolic functions and their reciprocals
    printf("sinh(%lf) = %.15f\n", x, sinh(x));
    printf("cosh(%lf) = %.15f\n", x, cosh(x));
    printf("tanh(%lf) = %.15f\n", x, tanh(x));
    printf("cosech(%lf) = %.15f\n", x, cosech(x));
    printf("sech(%lf) = %.15f\n", x, sech(x));
    printf("coth(%lf) = %.15f\n", x, coth(x));

    // Trigonometric reciprocal functions
    printf("cosecant(%lf) = %.15f\n", x, cosecant(x));
    printf("secant(%lf) = %.15f\n", x, secant(x));
    printf("tangent(%lf) = %.15f\n", x, tangent(x));
    printf("cotangent(%lf) = %.15f\n", x, cotangent(x));

    // Sum of the factorial series
    printf("Enter the number of terms N for factorial series sum: ");
    scanf("%d", &N);
    printf("Factorial series sum of first %d terms = %.15f\n", N, factorial_series_sum(N));

    return 0;
}
