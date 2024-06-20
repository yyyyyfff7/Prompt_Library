
#include <stdio.h>

int main() {
    double a = 3.14159;
    double b = 2.71828;
    double result;

    __asm__ __volatile__ (
        "fmin.d %[result], %[a], %[b]"
        : [result] "=f" (result)
        : [a] "f" (a), [b] "f" (b)
        : "memory"
    );

    printf("The minimum of %f and %f is %f\n", a, b, result);
    return 0;
}
