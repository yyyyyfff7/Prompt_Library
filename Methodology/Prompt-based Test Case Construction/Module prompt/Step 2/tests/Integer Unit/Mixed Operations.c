#include <stdio.h>

int main() {
    // Mixed operations in a single expression
    int a = 10;
    int b = 5;
    int c = 2;
    int result = (a + b) * c & (a - b) | (c > b);
    printf("Result of mixed operations in a single expression: %d\n", result);

    // Sequence of mixed operations
    int x = 8;
    int y = 3;
    int z = x * y; // Arithmetic operation
    z = z & x;     // Bitwise operation
    int isGreater = z > y; // Comparison operation
    printf("Result of sequence of mixed operations: z = %d, isGreater = %d\n", z, isGreater);

    return 0;
}
