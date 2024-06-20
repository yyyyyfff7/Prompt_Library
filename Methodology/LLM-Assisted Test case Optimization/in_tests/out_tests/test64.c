
#include <stdio.h>

int main() {
    unsigned int a = 100;
    unsigned int b = 25;
    unsigned int result;

    __asm__ __volatile__ (
        "divuw %0, %1, %2"
        : "=r" (result)
        : "r" (a), "r" (b)
        : "memory"
    );

    printf("100 / 25 = %u\n", result);

    return 0;
}
