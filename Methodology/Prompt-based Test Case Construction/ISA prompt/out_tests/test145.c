
#include <stdio.h>

int main() {
    double a = 3.14159;
    double b = 2.71828;
    double result;

    __asm__ __volatile__ (
        "fmax.d %[result], %[a], %[b]"
        : [result] "=f" (result)
        : [a] "f" (a), [b] "f" (b)
    );

    printf("The maximum of %.5f and %.5f is %.5f\n", a, b, result);
    return 0;
}
