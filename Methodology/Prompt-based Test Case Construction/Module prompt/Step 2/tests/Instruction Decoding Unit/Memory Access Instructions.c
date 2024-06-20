#include <stdio.h>

int main() {
    // Memory access instructions (load/store)
    int array[5] = {10, 20, 30, 40, 50}; // Store
    int value1 = array[2]; // Load
    int value2 = array[4]; // Load

    // Arithmetic operation
    int sum = value1 + value2;

    // Logic operation
    int result = (sum > array[1]) ? 1 : 0;

    // Store the result back into the array
    array[0] = result;

    // Print the results
    printf("Sum of value1 and value2: %d\n", sum);
    printf("Result of logic operation: %d\n", result);
    printf("Updated array: [%d, %d, %d, %d, %d]\n", array[0], array[1], array[2], array[3], array[4]);

    return 0;
}
