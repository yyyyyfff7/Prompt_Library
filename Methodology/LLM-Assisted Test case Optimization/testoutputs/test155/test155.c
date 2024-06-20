
#include <stdio.h>

int main() {
    double fs1 = 2.5;
    double fs2 = -4.8;
    double fd;

    __asm__ ("fsgnjn.d %[fd], %[fs1], %[fs2]"
             : [fd] "=f" (fd)
             : [fs1] "f" (fs1), [fs2] "f" (fs2));

    printf("Result: %f\n", fd);

    return 0;
}
