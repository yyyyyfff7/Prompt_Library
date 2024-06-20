#include <stdio.h>

int main() {
    // Independent instructions
    int a = 10;
    int b = 20;

    // Dependent instructions
    int sum = a + b;    // Depends on the values of a and b
    int product = a * b; // Depends on the values of a and b

    // Independent instruction
    int c = 30;

    // Dependent instructions
    int difference = c - sum;   // Depends on the value of sum
    int quotient = product / c; // Depends on the values of product and c

    // Print the results
    printf("Sum: %d, Product: %d\n", sum, product);
    printf("Difference: %d, Quotient: %d\n", difference, quotient);

    return 0;
}
