    /* Name: YASH MISHRA

    Find the value of cos x using taylors series*/
    
    #include <stdio.h>
    #define pie 3.14159265358979323
    #define sign(x) ((x)>0)? 1:-1

    int main(void)
    {
        float x, y, x_sq, s = 0.0, t, prev;
        int i = 0;

        // Input value in radians
        printf("Enter value in radians - ");
        scanf("%f", &y);

        x = y;
        float pi_bytwo = pie/2;

        // Normalize angle to period of cos
        while (x >= pi_bytwo) {
            x -= pi_bytwo;
        }

        while (x < - pi_bytwo) {
            x += pi_bytwo;
        }

        x_sq = x * x;
        t = 1;  // Initial term of the series
        prev = t;  // Initialize prev term

        // Compute cosine using Taylor series
        while ((-(prev / t)) >= 1e-6)
        {
            s += t;
            prev = t;  // Update previous term
            t = t * ((-x_sq) / ((2 * i + 2) * (2 * i + 1)));
            i++;
        }

        s += t; // Add the last term

        // Output the result
        printf("cos(%f) = %f\n", y, s);
    }
