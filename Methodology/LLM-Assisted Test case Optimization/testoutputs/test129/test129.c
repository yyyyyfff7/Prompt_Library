
#include <stdio.h>

int main() {
    long input = 123456789;
    double result;

    asm volatile (
        "fcvt.d.l %0, %1, rne"
        : "=f" (result)
        : "r" (input)
    );

    printf("Input: %ld\n", input);
    printf("Result: %lf\n", result);

    return 0;
}
