
#include <stdio.h>

int main() {
    int result;
    int rs1 = 10;
    int imm12 = 20;

    // Inline assembly to perform SLTI
    asm volatile (
        "slti %0, %1, %2"
        : "=r" (result)
        : "r" (rs1), "i" (imm12)
    );

    printf("Result of SLTI: %d\n", result);

    return 0;
}
