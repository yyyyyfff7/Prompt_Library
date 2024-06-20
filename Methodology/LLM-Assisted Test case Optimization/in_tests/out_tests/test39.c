
#include <stdio.h>

int main() {
    unsigned long x = 1;
    unsigned long y = 2;
    unsigned long result;

    asm volatile (
        "sll %0, %1, %2\n"
        : "=r" (result)
        : "r" (x), "r" (y)
    );

    printf("Result of SLL: %lu\n", result);
    return 0;
}
