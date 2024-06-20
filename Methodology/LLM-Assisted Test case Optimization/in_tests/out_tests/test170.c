
#include <stdio.h>

int main() {
    double data;
    double *ptr = &data;

    __asm__ __volatile__ (
        "c.fld %0, 0(a0)"
        : "=f" (*ptr)
        : "r" (ptr)
    );

    printf("Loaded value: %f\n", data);

    return 0;
}
