
#include <stdio.h>

int main() {
    double a = 10.5;
    double b = 7.5;
    int result;

    asm volatile ("fld.d %1, f0\n\t"
                  "fld.d %2, f1\n\t"
                  "flt.d %0, f0, f1\n\t"
                  : "=r" (result) 
                  : "f" (a), "f" (b));

    printf("Result: %d\n", result);

    return 0;
}
