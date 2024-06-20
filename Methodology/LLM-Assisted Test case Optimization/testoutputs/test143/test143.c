#include <stdio.h>

int main() {
    double a = 10.5;
    double b = 7.5;
    int result;

    asm volatile (
        "flt.d %0, %1, %2\n\t"
        : "=r" (result) 
        : "f" (a), "f" (b));

    printf("Result: %d\n", result);

    return 0;
}
