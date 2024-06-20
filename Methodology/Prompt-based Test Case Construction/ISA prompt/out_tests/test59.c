
#include <stdio.h>

int main() {
    printf("Before WFI instruction\n");
    
    // Inline assembly using WFI instruction
    asm volatile ("wfi");
    
    printf("After WFI instruction\n");
    
    return 0;
}
