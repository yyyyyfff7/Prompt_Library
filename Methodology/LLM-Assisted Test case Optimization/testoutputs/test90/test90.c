
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    __asm__ __volatile__ (
        "amoswap.w.aqrl %[result], %[source], (%[address])"
        : [result] "=r" (a)
        : [source] "r" (b), [address] "r" (&a)
        : "memory"
    );

    printf("a = %d, b = %d\n", a, b);
    return 0;
}
