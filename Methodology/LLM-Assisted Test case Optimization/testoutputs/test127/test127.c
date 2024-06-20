
#include <stdio.h>

int main() {
    double result, a = 10.5, b = 20.3;

    asm volatile (
        "fadd.d %0, %1, %2;"
        : "=f" (result)
        : "f" (a), "f" (b)
    );

    printf("Result: %f\n", result);

    return 0;
}
