#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int result;

    // Conditional branch with dependent instructions
    if (a > b) {
        result = a + b; // Dependent instruction 1
        result *= 2;    // Dependent instruction 2
    } else {
        result = a - b; // Dependent instruction 3
        result /= 2;    // Dependent instruction 4
    }

    // More operations after the branch
    int c = result * 3;
    int d = c + 5;

    // Print the results
    printf("Result: %d\n", result);
    printf("After branch operations: c = %d, d = %d\n", c, d);

    return 0;
}
