
#include <stdio.h>

int main() {
    float a = 3.14159;
    float b = 2.71828;
    float result;

    __asm__ __volatile__ (
        "fmax.s %[result], %[a], %[b]"
        : [result] "=f" (result)
        : [a] "f" (a), [b] "f" (b)
        : "memory"
    );

    printf("The maximum of %.5f and %.5f is %.5f\n", a, b, result);
    return 0;
}
