#include <stdio.h>

int main() {
    // Arithmetic operations
    int a = 10;
    int b = 20;
    int sum = a + b;
    int product = a * b;
    int difference = a - b;
    int quotient = a / b;

    // Logic operations
    int andResult = a & b;
    int orResult = a | b;
    int xorResult = a ^ b;

    // Control flow instructions
    if (sum > product) {
        printf("Sum is greater than product.\n");
    } else {
        printf("Sum is not greater than product.\n");
    }

    // Memory access instructions
    int array[5] = {1, 2, 3, 4, 5};
    int arrayElement = array[2];

    // Print the results
    printf("Arithmetic results: sum = %d, product = %d, difference = %d, quotient = %d\n", sum, product, difference, quotient);
    printf("Logic results: AND = %d, OR = %d, XOR = %d\n", andResult, orResult, xorResult);
    printf("Array element: %d\n", arrayElement);

    return 0;
}
