#include <stdio.h>

int main() {
    float result, x1 = 1.5, x2 = 2.5, x3 = 3.5;

    asm volatile (
        "fnmadd.s %0, %1, %2, %3"
        : "=f" (result)
        : "f" (x1), "f" (x2), "f" (x3)
    );

    printf("Result: %f\n", result);

    return 0;
}
