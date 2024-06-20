
#include <stdio.h>

int main() {
    double rs1 = 3.14;
    double fd;

    asm volatile("fmv.d.x %0, %1" : "=f" (fd) : "f" (rs1));

    printf("fd = %f\n", fd);

    return 0;
}
