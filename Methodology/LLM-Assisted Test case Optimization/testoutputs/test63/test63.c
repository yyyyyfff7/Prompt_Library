
#include <stdio.h>

int main() {
    unsigned int dividend = 10;
    unsigned int divisor = 3;
    unsigned int result;

    asm (
        "divu %0, %1, %2"
        : "=r" (result)
        : "r" (dividend), "r" (divisor)
    );

    printf("Result of division: %u\n", result);

    return 0;
}
