
#include <stdio.h>

int main() {
    float dividend = 10.0;
    float divisor = 3.0;
    float result;

    asm volatile (
        "fdiv.s %0, %1, %2"
        : "=f" (result)
        : "f" (dividend), "f" (divisor)
    );

    printf("Result of division: %f\n", result);

    return 0;
}
