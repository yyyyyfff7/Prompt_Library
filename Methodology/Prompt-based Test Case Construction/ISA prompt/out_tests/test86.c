
#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int result;

    __asm__ __volatile__ (
        "amominu.w.aqrl %0, %1, (%2)"
        : "=r" (result)
        : "r" (b), "r" (&a)
    );

    printf("Minimum value: %d\n", result);

    return 0;
}
