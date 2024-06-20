
#include <stdio.h>

int main() {
    float a = 10.5;
    float b = 6.8;
    float result;

    asm volatile (
        "fmin.s %0, %1, %2"
        : "=f" (result)
        : "f" (a), "f" (b)
    );

    printf("The minimum value between %f and %f is %f\n", a, b, result);

    return 0;
}
