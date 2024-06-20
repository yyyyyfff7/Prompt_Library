
#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;

    printf("Before max: a = %d, b = %d\n", a, b);

    asm volatile (
        "amoadd.w.aqrl %0, %1, (%2)"
        : "=r" (b)
        : "r" (a), "r" (&b)
    );

    printf("After max: a = %d, b = %d\n", a, b);

    return 0;
}
