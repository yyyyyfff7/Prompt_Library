
#include<stdio.h>

int main() {
    int x = 5;
    int result;

    // C.ADDI rd, nzimm6
    asm("c.addi %[result], %[x], 10" : [result] "=r" (result) : [x] "r" (x));

    printf("Result: %d\n", result);

    return 0;
}
