
#include <stdio.h>

int main() {
    int var = 10;
    int value = 5;

    __asm__ volatile (
        "amoadd.w.aqrl %0, %1, (%2)"
        : "=r" (var)
        : "r" (value), "r" (&var)
    );

    printf("Result: %d\n", var);

    return 0;
}
