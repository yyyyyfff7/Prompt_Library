
#include <stdio.h>

int main() {
    double value = 3.14;
    double *ptr = &value;

    asm volatile ("fsd %0, 0(%1)"
                  :
                  : "f" (value), "r" (ptr));

    printf("Stored value: %f\n", *ptr);

    return 0;
}
