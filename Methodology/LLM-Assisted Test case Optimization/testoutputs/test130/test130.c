#include <stdio.h>

int main() {
    unsigned long rs1 = 123456789; // Replace with your desired value
    double fd;

    asm volatile (
        "fcvt.d.lu %0, %1"
        : "=f" (fd)
        : "r" (rs1)
    );

    printf("Result: %lf\n", fd);

    return 0;
}
