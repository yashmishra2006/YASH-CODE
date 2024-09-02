#include <stdio.h>
#include <time.h>
#define pie 3.14159265358979323
#define sign(x) ((x)>0)? 1:-1

int main(void)
{
    clock_t start, end;
    double cpu_time_used;

    start = clock();  // Record start time

    float x, y, x_sq, s = 0.0, t, prev;
    int i = 0;

    // Input value in radians
    printf("Enter value in radians - ");
    scanf("%f", &y);

    x = y;
    float two_pi = 2 * pie;

    // Normalize angle to period of sin
    while (x >= two_pi) {
        x -= two_pi;
    }

    while (x < 0) {
        x += two_pi;
    }

    x_sq = x * x;
    t = 1;  // Initial term of the series
    prev = -(t * 2);  // Initialize prev with a value greater than t for ratio calculation

    // Compute cosine using Taylor series
    while ((-(prev / t)) >= 1e-6)
    {
        s += t;
        prev = t;  // Update previous term
        t = t * ((-x_sq) / ((2 * i + 3) * (2 * i + 2)));
        i++;
    }

    s += t; // Add the last term

    // Output the result
    printf("sin(%f) = %f\n", y, s);

    end = clock();  // Record end time
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;  // Calculate elapsed time

    // Output the time taken
    printf("Time taken: %f seconds\n", cpu_time_used);

    return 0;
}
