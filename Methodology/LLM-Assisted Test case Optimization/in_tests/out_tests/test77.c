
#include <stdio.h>

int main() {
    long rs1 = 10;
    long rs2 = 3;
    long rd;

    __asm__ __volatile__ ("amoand.d %0, %1, (%2)" 
                          : "=r" (rd) 
                          : "r" (rs2), "r" (rs1));

    printf("Value of rd after AMOAND.D operation: %ld\n", rd);

    return 0;
}
