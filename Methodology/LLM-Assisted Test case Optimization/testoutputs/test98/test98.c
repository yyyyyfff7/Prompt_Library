#include <stdio.h>
#include <math.h>

int main() {
    float num1 = 3.14;
    float num2 = -2.5;
    float num3 = 0.0;
    float num4 = NAN;

    int result1, result2, result3, result4;

    __asm__ __volatile__ (
        "fclass.s %0, %1\n\t"
        : "=r" (result1)
        : "f" (num1)
    );

    __asm__ __volatile__ (
        "fclass.s %0, %1\n\t"
        : "=r" (result2)
        : "f" (num2)
    );

    __asm__ __volatile__ (
        "fclass.s %0, %1\n\t"
        : "=r" (result3)
        : "f" (num3)
    );

    __asm__ __volatile__ (
        "fclass.s %0, %1\n\t"
        : "=r" (result4)
        : "f" (num4)
    );

    printf("Classification results:\n");
    printf("num1 (3.14): %d\n", result1);
    printf("num2 (-2.5): %d\n", result2);
    printf("num3 (0.0): %d\n", result3);
    printf("num4 (NAN): %d\n", result4);

    return 0;
}
