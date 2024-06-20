
#include <stdio.h>

int main() {
    unsigned long long result;
    unsigned long long rs1 = 0x123456789ABCDEF0; // Example value
    int imm12 = 0x1FF; // Example immediate value (12-bit)

    asm volatile (
        "andi %0, %1, %2"
        : "=r" (result)
        : "r" (rs1), "I" (imm12)
    );

    printf("Result: 0x%llx\n", result);
    return 0;
}
