
#include <stdio.h>

int main() {
    unsigned long result;
    unsigned long rs1 = 0x12345678;
    unsigned long imm12 = 0x7FF; // Example immediate value

    asm volatile (
        "ori %0, %1, %2\n"
        : "=r" (result)
        : "r" (rs1), "i" (imm12)
    );

    printf("Result: 0x%lx\n", result);

    return 0;
}
