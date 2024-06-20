
#include <stdio.h>

int main() {
    float fd, fs1, fs2, fs3;
    int rm;

    fd = 2.0;
    fs1 = 3.0;
    fs2 = 4.0;
    fs3 = 5.0;
    rm = 0;

    asm volatile ("fnmsub.s %0, %1, %2, %3, %4"
                  : "=f" (fd)
                  : "f" (fs1), "f" (fs2), "f" (fs3), "r" (rm));

    printf("Result: %f\n", fd);

    return 0;
}
