#include <stdio.h>

int main() {
    unsigned int rs1 = 0; // Source register
    unsigned int uimm5 = 5; // Unsigned immediate
    unsigned int result;

    asm volatile (
        "lw %0, %1(%2)" // LW instruction
        : "=r" (result)
        : "i" (uimm5 << 2), "r" (rs1)
    );

    printf("Result: %u\n", result);

    return 0;
}
