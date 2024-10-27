#include <stdio.h>

void generate_sequence(int n);

int main() {
    int N;

    // Ask the user for the value of N
    printf("Enter the value of N (N ≥ 1): ");
    scanf("%d", &N);

    // Validate input
    if (N < 1) {
        printf("Please enter a positive integer greater than or equal to 1.\n");
        return 1;
    }

    // Generate and display the sequence
    generate_sequence(N);

    return 0;
}

// Function to generate and print the first N terms of the sequence
void generate_sequence(int n) {
    int term = 1;  // Starting term (2^0)
    printf("The first %d terms of the sequence are:\n", n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", term);  // Print the current term
        term *= 2;            // Update the term to the next power of 2
    }
    printf("\n"); // New line for better readability
}
