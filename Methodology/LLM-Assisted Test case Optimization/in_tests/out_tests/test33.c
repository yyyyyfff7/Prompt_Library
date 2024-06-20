
#include <stdio.h>

int main() {
    unsigned long a = 0xAAAAAAAAAAAAAAAA;
    unsigned long b = 0x5555555555555555;
    unsigned long result;

    asm volatile (
        "or %0, %1, %2\n"
        : "=r" (result)
        : "r" (a), "r" (b)
    );

    printf("Result: 0x%lx\n", result);
    return 0;
}
