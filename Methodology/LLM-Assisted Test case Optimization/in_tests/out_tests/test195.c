
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int result;

    asm volatile (
        "c.xor %0, %1, %2"
        : "=r" (result)
        : "r" (a), "r" (b)
    );

    printf("Result of c.xor: %d\n", result);
    return 0;
}
