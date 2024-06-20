
#include <stdio.h>

int main() {
    unsigned long long result;
    unsigned long rs1 = 50000;
    unsigned long rs2 = 30000;

    asm ("mulhu %0, %1, %2"
         : "=r" (result)
         : "r" (rs1), "r" (rs2)
    );

    printf("Result: %llu\n", result);

    return 0;
}
