#include <stdio.h>

int main() {
    double fs1 = 10.5;
    double fs2 = 2.0;
    double fd;

    asm volatile (
        "fmul.d %0, %1, %2"
        : "=f" (fd)
        : "f" (fs1), "f" (fs2)
    );

    printf("Result: %f\n", fd);

    return 0;
}
