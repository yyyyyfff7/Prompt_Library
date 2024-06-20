
#include <stdio.h>

int main() {
    printf("Before breakpoint\n");

    // RISC-V inline assembly code
    asm volatile("c.ebreak");

    printf("After breakpoint\n");

    return 0;
}
