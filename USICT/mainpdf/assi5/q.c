#include <stdio.h>
#include <string.h>
#include <math.h>

// Q1: Count the number of digits in a positive integer
int count_digits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

// Q2: Sum the digits of a positive integer
int sum_digits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

// Q3: Convert a set of N single digits into a single integer
int convert_to_integer(int digits[], int N) {
    int number = 0;
    for (int i = 0; i < N; i++) {
        number = number * 10 + digits[i];
    }
    return number;
}

// Q4: Reverse the digits of a positive integer
int reverse_integer(int number) {
    int reversed = 0;
    while (number != 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return reversed;
}

// Q5: Convert a string representation of an integer to a decimal integer
int string_to_integer(const char *str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    // Check for negative sign
    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    // Convert each character to digit and build the integer
    for (; str[i] != '\0'; i++) {
        result = result * 10 + (str[i] - '0');
    }
    
    return result * sign;
}

// Q6: Convert a decimal integer to a number in base B (up to 36)
void decimal_to_base(int number, int base) {
    char representation[36] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char result[50];  // buffer to store the result in reverse order
    int index = 0;

    // Convert decimal to specified base
    while (number > 0) {
        result[index++] = representation[number % base];
        number /= base;
    }
    
    // Print the number in correct order by reversing the result
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
}

// Q7: Demonstrate the usage of implemented functions
int main() {
    int number, base;
    char str[50];
    int N, digits[50];

    // Q1: Count digits
    printf("Enter a positive integer for digit count: ");
    scanf("%d", &number);
    printf("Number of digits: %d\n", count_digits(number));

    // Q2: Sum of digits
    printf("Sum of digits: %d\n", sum_digits(number));

    // Q3: Convert set of single digits to an integer
    printf("Enter the number of digits for conversion: ");
    scanf("%d", &N);
    printf("Enter %d single-digit numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &digits[i]);
    }
    printf("Converted integer: %d\n", convert_to_integer(digits, N));

    // Q4: Reverse the integer
    printf("Reversed integer: %d\n", reverse_integer(number));

    // Q5: Convert string representation to integer
    printf("Enter a positive or negative integer as a string: ");
    scanf("%s", str);
    printf("Converted integer from string: %d\n", string_to_integer(str));

    // Q6: Convert decimal to base B
    printf("Enter a decimal number to convert: ");
    scanf("%d", &number);
    printf("Enter the base (2 <= B <= 36): ");
    scanf("%d", &base);
    printf("Number in base %d: ", base);
    decimal_to_base(number, base);
    printf("\n");

    return 0;
}
