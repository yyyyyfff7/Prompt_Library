
#include <stdio.h>

int main() {
    unsigned long x = 5;
    unsigned long result;

    asm volatile (
        "slli %0, %1, 2\n"
        : "=r" (result)
        : "r" (x)
    );

    printf("Result of SLLI: %lu\n", result);

    return 0;
}
