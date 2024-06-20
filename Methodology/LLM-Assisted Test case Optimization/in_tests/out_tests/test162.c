
#include <stdio.h>

int main() {
    register int x1 asm("x1");
    register int x2 asm("x2");
    register int x3 asm("x3");

    // Use c.addi4spn to add an immediate value to the stack pointer
    asm volatile ("c.addi4spn %[x1], x2, 12" : [x1] "=r" (x1) :: "memory");

    printf("Result of c.addi4spn: x1 = %d\n", x1);

    return 0;
}
