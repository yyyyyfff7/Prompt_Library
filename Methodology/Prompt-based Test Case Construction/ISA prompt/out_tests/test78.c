
#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int c = 0;

    asm volatile ("amoand.w.aqrl %0, %1, (%2)"
                  : "=r" (c)
                  : "r" (b), "r" (&a));

    printf("c = %d\n", c);

    return 0;
}
