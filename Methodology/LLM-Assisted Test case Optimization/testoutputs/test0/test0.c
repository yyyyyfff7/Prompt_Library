
#include <stdio.h>

int main() {
    int result;
    int rs1 = 5;
    int imm12 = 10;

    __asm__ volatile (
        "addi %[result], %[rs1], %[imm12]\n"
        : [result] "=r" (result)
        : [rs1] "r" (rs1), [imm12] "i" (imm12)
    );

    printf("Result: %d\n", result);
    return 0;
}
