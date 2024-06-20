
#include <stdio.h>

int main() {
    int rs1 = 10;
    int rs2 = 5;
    int rd;

    asm volatile ( "subw %0, %1, %2"
                   : "=r" (rd)
                   : "r" (rs1), "r" (rs2)
                 );

    printf("Result: %d\n", rd);

    return 0;
}
