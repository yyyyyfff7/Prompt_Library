
#include <stdio.h>

int main() {
    printf("Executing ECALL...\n");
    
    // Inline assembly to execute an ECALL instruction
    __asm__ volatile ("ecall");

    return 0;
}
