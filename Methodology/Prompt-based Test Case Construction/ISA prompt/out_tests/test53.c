
#include <stdio.h>

int main() {
    int x = 10;
    int shamt = 2;

    __asm__ __volatile__(
        "srli %0, %0, %1"
        : "+r" (x)
        : "i" (shamt)
    );

    printf("Result: %d\n", x);

    return 0;
}
