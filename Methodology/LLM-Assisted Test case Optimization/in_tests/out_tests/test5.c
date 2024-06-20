
#include <stdio.h>

int main() {
    unsigned long result;

    asm volatile (
        "auipc %0, 1\n"    // Load PC + (1 << 12) into result
        : "=r" (result)    // Output operand
    );

    printf("Result: %lu\n", result);
    return 0;
}
