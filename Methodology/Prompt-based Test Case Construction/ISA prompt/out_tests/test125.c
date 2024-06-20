
#include <stdio.h>

int main() {
    float a = 10.5f;
    float b = 3.2f;
    float result;

    __asm__ __volatile__ (
        "fsub.s %[result], %[a], %[b], rne"
        : [result] "=f" (result)
        : [a] "f" (a), [b] "f" (b)
        : "memory"
    );

    printf("The result of %.2f - %.2f is %.2f\n", a, b, result);
    return 0;
}
