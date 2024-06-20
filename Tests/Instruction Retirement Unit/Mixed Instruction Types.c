#include <stdio.h>

int main() {
    // Arithmetic instructions
    int a = 10;
    int b = 20;
    int sum = a + b;
    int product = a * b;

    // Logic instructions
    int andResult = a & b;
    int orResult = a | b;

    // Control flow instruction
    if (sum > product) {
        printf("Sum (%d) is greater than product (%d).\n", sum, product);
    } else {
        printf("Sum (%d) is not greater than product (%d).\n", sum, product);
    }

    // Memory access instructions
    int array[5] = {1, 2, 3, 4, 5};
    int arrayElement = array[2];

    // Print the results
    printf("Arithmetic results: sum = %d, product = %d\n", sum, product);
    printf("Logic results: AND = %d, OR = %d\n", andResult, orResult);
    printf("Array element: %d\n", arrayElement);

    return 0;
}
