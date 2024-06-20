
#include <stdio.h>

int main() {
    unsigned int rs1 = 0; // Source register
    unsigned int uimm5 = 5; // Unsigned immediate
    unsigned int result;

    asm volatile (
        "c.lw %0, %1(0)" // C.LW instruction
        : "=r" (result)
        : "r" (rs1), "I" (uimm5 << 2)
    );

    printf("Result: %u\n", result);

    return 0;
}
