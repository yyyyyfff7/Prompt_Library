#include <stdio.h>

int main() {
    double result;
    double fs1 = 3.0;
    double fs2 = 4.0;
    double fs3 = 5.0;

    asm volatile (
        "fnmadd.d %[result], %[fs1], %[fs2], %[fs3]"
        : [result] "=f" (result)
        : [fs1] "f" (fs1), [fs2] "f" (fs2), [fs3] "f" (fs3)
    );

    printf("Result: %f\n", result);

    return 0;
}
