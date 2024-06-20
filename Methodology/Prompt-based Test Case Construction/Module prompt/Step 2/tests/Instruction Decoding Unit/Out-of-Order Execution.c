#include <stdio.h>

int main() {
    // Independent instructions
    int a = 10;
    int b = 20;

    // Dependent arithmetic instructions
    int sum = a + b;
    int product = a * b;

    // Independent instruction
    int c = 30;

    // Dependent logic instruction
    int max = (a > b) ? a : b;

    // Control flow instruction with dependent condition
    if (sum > product) {
        printf("Sum (%d) is greater than product (%d)\n", sum, product);
    } else {
        printf("Sum (%d) is not greater than product (%d)\n", sum, product);
    }

    // Independent instruction
    int d = 40;

    // Dependent instruction using previous independent instruction
    int total = sum + c + d;

    // Print the results
    printf("Max of a and b: %d\n", max);
    printf("Total: %d\n", total);

    return 0;
}
