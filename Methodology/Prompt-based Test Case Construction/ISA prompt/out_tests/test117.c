
#include <stdio.h>

int main() {
    float rs1 = 3.14;
    float fd;

    __asm__ volatile ("fmv.w.x %0, %1" : "=f"(fd) : "f"(rs1));

    printf("fd = %f\n", fd);

    return 0;
}
