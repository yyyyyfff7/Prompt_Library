
#include <stdio.h>

int main() {
    double a = 3.14159;
    double b = 2.71828;
    double c = 1.41421;
    double result;

    __asm__ __volatile__ (
        "fmsub.d %[result], %[a], %[b], %[c], rne"
        : [result] "=f" (result)
        : [a] "f" (a), [b] "f" (b), [c] "f" (c)
        : "memory"
    );

    printf("The result of (a * b) - c is: %f\n", result);
    return 0;
}
