
#include <stdio.h>

int main() {
    int rd, rs1, rs2;

    rd = 0;
    rs1 = 10;
    rs2 = 2;

    asm("sra %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2));

    printf("Result: %d\n", rd);

    return 0;
}
