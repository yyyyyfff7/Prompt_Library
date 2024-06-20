
#include <stdio.h>

int main() {
    int rs1 = 5;
    int rs2 = 10;
    int rd;

    asm volatile (
        "slt %0, %1, %2\n"
        : "=r" (rd)
        : "r" (rs1), "r" (rs2)
    );

    printf("Result of slt: %d\n", rd);

    return 0;
}
