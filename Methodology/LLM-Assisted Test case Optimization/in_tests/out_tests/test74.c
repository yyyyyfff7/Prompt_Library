
#include <stdio.h>

int main() {
    int rs1 = 100, rs2 = 7;
    int rd;

    asm("remw %0, %1, %2"
        : "=r"(rd)
        : "r"(rs1), "r"(rs2));

    printf("Result: %d\n", rd);

    return 0;
}
