#include <stdio.h>

int main() {
    double fd, fs1, fs2, fs3;

    fs1 = 3.5;
    fs2 = 2.0;
    fs3 = 1.5;

    asm volatile (
        "fnmsub.d %[result], %[fs1], %[fs2], %[fs3]"
        : [result] "=f" (fd)
        : [fs1] "f" (fs1), [fs2] "f" (fs2), [fs3] "f" (fs3)
    );

    printf("Result: %lf\n", fd);

    return 0;
}
