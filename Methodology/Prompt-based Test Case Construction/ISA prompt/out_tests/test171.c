
#include <stdio.h>

int main() {
    double result;

    asm volatile ("c.fldsp %0, 0(x2)" : "=f" (result));

    printf("Result: %f\n", result);

    return 0;
}
