
#include <stdio.h>

int main() {
    int rd = 0; // destination register
    int rs2 = 10; // source register 2

    asm volatile ("c.and %0, %1" : "=r" (rd) : "r" (rs2));

    printf("Result: %d\n", rd);

    return 0;
}
