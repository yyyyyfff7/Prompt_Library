
#include <stdio.h>

int main() {
    float f1 = 1.5;
    float f2 = 2.5;
    float result;

    asm volatile ("fadd.s %0, %1, %2, 0"
                  : "=f" (result)
                  : "f" (f1), "f" (f2)
                  );

    printf("Result: %f\n", result);

    return 0;
}
