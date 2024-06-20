
#include <stdint.h>

int main() {
    uint64_t value = 0x1234567890ABCDEF;
    uint64_t swap_value = 0xFEDCBA0987654321;
    uint64_t result;

    __asm__ __volatile__ (
        "amoswap.d.aqrl %[result], %[swap_value], (%[value])"
        : [result] "=r" (result)
        : [value] "r" (&value), [swap_value] "r" (swap_value)
        : "memory"
    );

    return 0;
}
