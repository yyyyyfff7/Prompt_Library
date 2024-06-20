#include <stdio.h>

int main() {
    float fs1 = 3.14;
    float fs2 = -2.71;
    float fd;

    __asm__ __volatile__ (
        "fsgnj.s %0, %1, %2"
        : "=f" (fd)
        : "f" (fs1), "f" (fs2)
    );

    printf("Result: %f\n", fd);
    return 0;
}
