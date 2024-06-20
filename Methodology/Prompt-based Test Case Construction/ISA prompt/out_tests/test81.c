
#include <stdio.h>

int main() {
    unsigned long long a = 10;
    unsigned long long b = 15;

    __asm__ __volatile__ ("amomaxu.d.aqrl %0, %1, (%2)"
                          : "+r" (a)
                          : "r" (b), "r" (&a));

    printf("Result: %llu\n", a);

    return 0;
}
