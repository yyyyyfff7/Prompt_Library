
#include <stdio.h>

int main() {
    int a = 10;
    int b = 15;
    int result;

    asm("xor %0, %1, %2"
        : "=r" (result)
        : "r" (a), "r" (b));

    printf("Result of XOR: %d\n", result);

    return 0;
}
