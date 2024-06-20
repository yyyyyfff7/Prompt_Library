
#include <stdio.h>

int main() {
    unsigned long x = 0xF0F0F0F0F0F0F0F0;
    unsigned long y = 0x0F0F0F0F0F0F0F0F;
    unsigned long result;

    __asm__ __volatile__ (
        "and %0, %1, %2"
        : "=r" (result)
        : "r" (x), "r" (y)
    );

    printf("Result of AND operation: 0x%lx\n", result);

    return 0;
}
