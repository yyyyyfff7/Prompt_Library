
#include <stdio.h>

int main() {
    int a = 100;
    int b = 200;
    int result;

    // Inline assembly using ADDW
    asm volatile (
        "addw %0, %1, %2"
        : "=r" (result)  // output operand
        : "r" (a), "r" (b)  // input operands
    );

    printf("Result of ADDW: %d\n", result);

    return 0;
}
