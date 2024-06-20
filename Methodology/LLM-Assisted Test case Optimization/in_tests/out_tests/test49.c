
#include <stdio.h>

int main() {
    int x = 0x12345678;
    
    __asm__ __volatile__ (
        "sraiw %0, %1, 4"
        : "=r" (x)
        : "r" (x)
        :
    );
    
    printf("Result: 0x%08X\n", x);
    
    return 0;
}
