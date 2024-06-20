
#include <stdio.h>

int main() {
    float a = 1.5;
    float b = 2.5;
    float c;

    __asm__ __volatile__(
        "fcvt.d.w %0, %1\n\t"
        "c.li a3, 0x08\n\t"
        "c.fsd %0, 0(a3)"
        : "=f" (c)
        : "f" (a)
        : "a3"
    );

    printf("c = %f\n", c);

    return 0;
}
