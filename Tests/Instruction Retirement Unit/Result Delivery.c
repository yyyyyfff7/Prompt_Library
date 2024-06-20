#include <stdio.h>

int main() {
    // Instructions that produce results
    int a = 10;
    int b = 20;
    int sum = a + b; // Result used by the next instruction

    // Dependent instruction
    int product = sum * 2;

    // More instructions producing results
    int c = 30;
    int d = 40;
    int difference = c - d; // Result used by the next instruction

    // Dependent instruction
    int quotient = difference / 2;

    // Print the results
    printf("Sum: %d, Product: %d\n", sum, product);
    printf("Difference: %d, Quotient: %d\n", difference, quotient);

    return 0;
}
