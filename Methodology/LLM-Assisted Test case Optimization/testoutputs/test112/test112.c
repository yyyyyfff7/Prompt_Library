#include <stdio.h>
#include <stdint.h>

int main() {
    float a = 2.5f, b = 3.7f, c = 1.2f;
    float result;

    __asm__ __volatile__ (
        "fmadd.s %0, %1, %2, %3"
        : "=f" (result)
        : "f" (a), "f" (b), "f" (c)
        : "memory"
    );

    printf("The result of the FMADD.S operation is: %f\n", result);
    return 0;
}
