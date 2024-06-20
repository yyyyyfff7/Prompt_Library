
#include <stdio.h>

int main() {
    double a = 3.14, b = -2.71, result;

    asm volatile (
        "fsgnj.d %0, %1, %2"
        : "=f" (result)
        : "f" (a), "f" (b)
    );

    printf("Result: %lf\n", result);

    return 0;
}
