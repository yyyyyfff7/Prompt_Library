#include <stdio.h>

int main() {
    unsigned int x = 50;
    unsigned int n = 2;
    unsigned int result;

    asm volatile (
        "srli %0, %1, %2"
        : "=r" (result)
        : "r" (x), "i" (n)
    );

    printf("Result: %u\n", result);

    return 0;
}
