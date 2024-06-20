#include <stdio.h>

int main() {
    // Independent instructions
    int a = 10;
    int b = 20;

    // Dependent instructions
    int sum = a + b;
    int product = sum * b;

    // Independent instruction
    int c = 30;

    // Dependent instructions
    int difference = c - a;
    int quotient = product / difference;

    // Independent instruction
    int d = 40;

    // Dependent instruction
    int finalResult = quotient + d;

    // Print the results
    printf("Sum: %d, Product: %d\n", sum, product);
    printf("Difference: %d, Quotient: %d\n", difference, quotient);
    printf("Final result: %d\n", finalResult);

    return 0;
}
