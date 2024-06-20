
#include <stdio.h>

int main() {
    unsigned int rs1 = 42;
    double fd;

    // Inline assembly using FCVT.D.WU instruction
    asm volatile (
        "fcvt.d.wu %[fd], %[rs1]"
        : [fd] "=f" (fd)
        : [rs1] "r" (rs1)
    );

    printf("Unsigned integer: %u\n", rs1);
    printf("Double precision floating-point: %lf\n", fd);

    return 0;
}
