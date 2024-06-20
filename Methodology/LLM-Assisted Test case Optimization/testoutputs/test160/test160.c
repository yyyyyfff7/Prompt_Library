#include<stdio.h>

int main() {
    int x = 5;
    int result;

    // C.ADDI is a compressed instruction and might not be supported by inline assembly syntax.
    // Using ADDI instruction instead
    asm("addi %[result], %[x], 10" : [result] "=r" (result) : [x] "r" (x));

    printf("Result: %d\n", result);

    return 0;
}
