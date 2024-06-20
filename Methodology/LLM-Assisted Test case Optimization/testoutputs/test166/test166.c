#include <stdio.h>

int main() {
    int x = 0b1010101010101010;
    int result;

    __asm__ __volatile__(
        "andi %[result], %[x], 0b101010"
        : [result] "=r" (result)
        : [x] "r" (x)
    );

    printf("Original value: 0b1010101010101010\n");
    printf("Result after andi: 0b%08b\n", result);

    return 0;
}
