
#include <stdio.h>

int main() {
    unsigned int rd, rs1, rs2;

    rd = 4;
    rs1 = 17;
    rs2 = 3;

    asm volatile ("remuw %0, %1, %2"
                  : "=r"(rd)
                  : "r"(rs1), "r"(rs2));

    printf("Result: %u\n", rd);

    return 0;
}
