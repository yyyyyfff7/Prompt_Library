#include <stdio.h>

int main() {
    float fs1 = 10.5, fs2 = 5.2, fs3 = 3.0;
    float fd;

    asm volatile (
        "fmsub.s %0, %1, %2, %3"
        : "=f" (fd)
        : "f" (fs1), "f" (fs2), "f" (fs3)
    );

    printf("Result: %f\n", fd);

    return 0;
}
