
#include <stdio.h>

int main() {
    double value = 3.14159;
    unsigned int result;

    __asm__ __volatile__ (
        "fcvt.wu.d %[result], %[value], rtz"
        : [result] "=r" (result)
        : [value] "f" (value)
        : "memory"
    );

    printf("The unsigned integer value is: %u\n", result);
    return 0;
}
