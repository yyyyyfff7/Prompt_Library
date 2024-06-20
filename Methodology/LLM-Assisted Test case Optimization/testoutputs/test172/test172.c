#include <stdio.h>

int main() {
    float a = 1.5;
    float b = 2.5;
    double c;

    __asm__ __volatile__(
        "fcvt.d.s %0, %1\n\t" // Convert float to double
        : "=f" (c)
        : "f" (a)
    );

    printf("c = %lf\n", c);

    return 0;
}
