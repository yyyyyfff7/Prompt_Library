
#include <stdio.h>

int main() {
    float fs1 = 3.14f;
    double fd;

    asm volatile ("fcvt.d.s %0, %1" : "=f" (fd) : "f" (fs1));

    printf("Double value: %lf\n", fd);

    return 0;
}
