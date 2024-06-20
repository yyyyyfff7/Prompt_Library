#include <stdint.h>

int main() {
    uint32_t x = 0xFFFFFFFF;
    uint32_t y = 0xAAAAAAAA;

    __asm__ volatile (
        "amoxor.w.aqrl %0, %2, (%1)"
        : "+r" (x)
        : "r" (&x), "r" (y)
    );

    return 0;
}
