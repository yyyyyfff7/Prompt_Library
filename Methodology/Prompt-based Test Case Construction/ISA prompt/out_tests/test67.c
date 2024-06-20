
#include <stdio.h>

int main() {
    long int rs1 = 100;
    long int rs2 = 200;
    long int result;

    asm volatile (
        "mulh %0, %1, %2"
        : "=r" (result)
        : "r" (rs1), "r" (rs2)
    );

    printf("Result of MULH: %ld\n", result);

    return 0;
}
