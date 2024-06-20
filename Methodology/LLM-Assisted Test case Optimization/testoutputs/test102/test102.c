
#include <stdio.h>

int main() {
    unsigned long x = 0x123456789abcdef;
    float f;

    __asm__ __volatile__ (
        "fcvt.s.lu %[f], %[x], rtz"
        : [f] "=f" (f)
        : [x] "r" (x)
        : "memory"
    );

    printf("Unsigned long integer: 0x%016lx\n", x);
    printf("Converted floating-point value: %f\n", f);

    return 0;
}
