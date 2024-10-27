#include <stdio.h>
#include <ctype.h>

// Q1: Convert a positive integer string to an integer
int string_to_positive_integer(const char *str) {
    int result = 0;
    while (*str != '\0') {
        if (isdigit(*str)) {
            result = result * 10 + (*str - '0');
            str++;
        } else {
            printf("Error: Invalid character in input\n");
            return -1;
        }
    }
    return result;
}

// Q2: Convert a signed integer string to an integer
int string_to_signed_integer(const char *str) {
    int result = 0;
    int sign = 1;

    if (*str == '-') {
        sign = -1;
        str++;
    }

    while (*str != '\0') {
        if (isdigit(*str)) {
            result = result * 10 + (*str - '0');
            str++;
        } else {
            printf("Error: Invalid character in input\n");
            return -1;
        }
    }
    return result * sign;
}

// Q3: Convert a signed floating-point string to a float
float string_to_float(const char *str) {
    float result = 0.0;
    float divisor = 1.0;
    int sign = 1;
    int decimal_found = 0;

    if (*str == '-') {
        sign = -1;
        str++;
    }

    while (*str != '\0') {
        if (isdigit(*str)) {
            if (decimal_found) {
                divisor *= 10.0;
                result += (*str - '0') / divisor;
            } else {
                result = result * 10 + (*str - '0');
            }
        } else if (*str == '.') {
            decimal_found = 1;
        } else {
            printf("Error: Invalid character in input\n");
            return -1;
        }
        str++;
    }
    return result * sign;
}

// Q4: Demonstrate the program
int main() {
    char posIntStr[50], signedIntStr[50], floatStr[50];

    // Test for positive integer conversion
    printf("Enter a positive integer as string: ");
    scanf("%s", posIntStr);
    int posInt = string_to_positive_integer(posIntStr);
    if (posInt != -1) {
        printf("Converted positive integer: %d\n", posInt);
    }

    // Test for signed integer conversion
    printf("Enter a signed integer as string: ");
    scanf("%s", signedIntStr);
    int signedInt = string_to_signed_integer(signedIntStr);
    if (signedInt != -1) {
        printf("Converted signed integer: %d\n", signedInt);
    }

    // Test for floating-point conversion
    printf("Enter a signed floating-point number as string: ");
    scanf("%s", floatStr);
    float floatNum = string_to_float(floatStr);
    if (floatNum != -1) {
        printf("Converted floating-point number: %f\n", floatNum);
    }

    return 0;
}
