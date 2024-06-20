#include <stdio.h>

int main() {
    register int x1 asm("x1");
    register int x2 asm("x2") = 0;
    register int x3 asm("x3");

    // Use addi as an alternative for adding an immediate value
    asm volatile ("addi %[x1], %[x2], 12" : [x1] "=r" (x1) : [x2] "r" (x2) : "memory");

    printf("Result of addi: x1 = %d\n", x1);

    return 0;
}
