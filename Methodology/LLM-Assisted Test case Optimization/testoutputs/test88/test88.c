
#include <stdint.h>

int main() {
    uint32_t *ptr = (uint32_t *)0x1000;
    uint32_t value1 = 0x0F0F0F0F;
    uint32_t value2 = 0xF0F0F0F0;

    __asm__ __volatile__ (
        "amoor.w.aqrl %[rd], %[rs2], (%[rs1])"
        : [rd] "=r" (*ptr)
        : [rs1] "r" (ptr), [rs2] "r" (value2)
        : "memory"
    );

    return *ptr;
}
