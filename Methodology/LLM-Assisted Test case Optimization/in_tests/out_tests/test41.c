
#include <stdio.h>

int main() {
    int rs1 = 5;  // Example input value
    int shamt5 = 2; // Shift amount
    int rd;

    // Inline assembly for SLLIW (Shift Left Logical Immediate for 32-bit)
    __asm__ volatile (
        "slliw %0, %1, %2"
        : "=r" (rd)           // Output operand
        : "r" (rs1), "I" (shamt5) // Input operands
    );

    printf("Result of slliw: %d\n", rd);
    return 0;
}
