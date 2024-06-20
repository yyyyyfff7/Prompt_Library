
#include <stdint.h>

int main() {
    uint32_t x = 0xFFFFFFFF;
    uint32_t y = 0xAAAAAAAA;

    __asm__ volatile (
        "li %[rs1], %[x]\n\t"
        "li %[rs2], %[y]\n\t"
        "li %[rd], 0\n\t"
        "amoxor.w.aqrl %[rd], %[rs2], (%[rs1])"
        : [rd] "=r" (x)
        : [rs1] "r" (&x), [rs2] "r" (y)
    );

    return 0;
}
