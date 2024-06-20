
#include <stdio.h>

int main() {
    int x = 0b1010101010101010;
    int result;

    __asm__ __volatile__(
        "c.andi %[result], %[x], 0b101010"
        : [result] "=r" (result)
        : [x] "r" (x)
    );

    printf("Original value: 0b%b\n", x);
    printf("Result after c.andi: 0b%b\n", result);

    return 0;
}
