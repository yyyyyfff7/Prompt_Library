
#include <stdio.h>

int main() {
    float num1 = 3.14;
    float num2 = 2.71;
    int result;

    asm volatile (
        "flt.s %0, %1, %2"
        : "=r" (result)
        : "f" (num1), "f" (num2)
    );

    printf("Result: %d\n", result);

    return 0;
}
