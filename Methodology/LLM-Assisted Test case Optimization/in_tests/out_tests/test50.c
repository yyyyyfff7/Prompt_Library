
#include <stdio.h>

int main() {
    int a = 20;
    int b = 4;
    int result;

    // Perform SRAW operation using inline assembly
    asm ("sraw %0, %1, %2"
         : "=r" (result)
         : "r" (a), "r" (b)
    );

    printf("Result of SRAW operation: %d\n", result);

    return 0;
}
