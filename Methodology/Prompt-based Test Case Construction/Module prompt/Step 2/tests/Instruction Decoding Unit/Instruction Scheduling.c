#include <stdio.h>

int main() {
    // Arithmetic operations
    int a = 5;
    int b = 3;
    int sum = a + b;
    int product = a * b;

    // Logic operation
    int logicResult = (sum > product) ? 1 : 0;

    // Memory access instructions
    int array[5] = {1, 2, 3, 4, 5};
    int arrayElement = array[2];

    // Control flow instruction
    if (logicResult) {
        printf("Sum (%d) is greater than product (%d).\n", sum, product);
    } else {
        printf("Sum (%d) is not greater than product (%d).\n", sum, product);
    }

    // Another arithmetic operation after control flow
    int difference = a - b;
    printf("Difference between a (%d) and b (%d) is %d.\n", a, b, difference);

    return 0;
}
