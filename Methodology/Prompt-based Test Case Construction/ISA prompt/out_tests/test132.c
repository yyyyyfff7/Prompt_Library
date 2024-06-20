
#include <stdio.h>

int main() {
    int rs1 = 10;
    double fd;

    asm ("fcvt.d.w %0, %1" : "=f" (fd) : "r" (rs1));

    printf("Converted double: %lf\n", fd);

    return 0;
}
