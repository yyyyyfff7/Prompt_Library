
#include <stdio.h>

int main() {
    int data = 12345; // sample data in memory
    int result;

    // Using inline assembly to execute the 'lw' instruction
    __asm__ volatile (
        "lw %0, 0(%1)"
        : "=r" (result) // output operand
        : "r" (&data)   // input operand
    );

    printf("Loaded word: %d\n", result);
    return 0;
}
