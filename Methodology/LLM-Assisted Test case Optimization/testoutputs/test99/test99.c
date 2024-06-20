
#include <stdio.h>

int main() {
    float f = 3.14159;
    long l;

    __asm__ __volatile__ (
        "fcvt.l.s %0, %1, rtz"
        : "=r" (l)
        : "f" (f)
        : "memory"
    );

    printf("Float value: %f\nLong value: %ld\n", f, l);
    return 0;
}
