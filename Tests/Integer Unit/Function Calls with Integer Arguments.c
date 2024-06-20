#include <stdio.h>

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int bitwiseAnd(int a, int b);

int main() {
    // Test the functions with different argument values
    printf("Addition: 10 + 20 = %d\n", add(10, 20));
    printf("Subtraction: 30 - 15 = %d\n", subtract(30, 15));
    printf("Multiplication: 5 * 6 = %d\n", multiply(5, 6));
    printf("Bitwise AND: 12 & 6 = %d\n", bitwiseAnd(12, 6));

    // Test with boundary cases
    printf("Addition with boundary case: %d + %d = %d\n", INT_MAX, 1, add(INT_MAX, 1));
    printf("Subtraction with boundary case: %d - %d = %d\n", INT_MIN, 1, subtract(INT_MIN, 1));

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int bitwiseAnd(int a, int b) {
    return a & b;
}
