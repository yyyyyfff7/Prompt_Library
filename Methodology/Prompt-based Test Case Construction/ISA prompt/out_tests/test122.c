
#include<stdio.h>

int main() {
    float fs1 = 2.5;
    float fs2 = -1.3;
    float fd;

    asm volatile(
        "fsgnjn.s %0, %1, %2"
        : "=f" (fd)
        : "f" (fs1), "f" (fs2)
    );

    printf("fd = %f\n", fd);

    return 0;
}
