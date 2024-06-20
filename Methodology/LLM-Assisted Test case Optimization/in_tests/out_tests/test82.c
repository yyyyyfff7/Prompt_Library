
#include <stdio.h>

int main() {
    int x = 10;
    int y = 15;

    asm volatile (
        "amomaxu.w.aqrl %0, %1, (%2)"
        : "+r" (x)
        : "r" (y), "r" (&x)
    );

    printf("The result after AMOMAXU.W instruction: %d\n", x);
    
    return 0;
}
