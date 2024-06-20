Here's a C program that uses the FMADD.S RISC-V instruction:

#include <stdio.h>
#include <stdint.h>

int main() {
    float a = 2.5f, b = 3.7f, c = 1.2f;
    float result;

    __asm__ __volatile__ (
        "fmadd.s %[result], %[a], %[b], %[c], rne"
        : [result] "=f" (result)
        : [a] "f" (a), [b] "f" (b), [c] "f" (c)
        : "memory"
    );

    printf("The result of the FMADD.S operation is: %f\n", result);
    return 0;
}