
#include <stdio.h>

int main() {
    unsigned long x = 10, y = 5, result = 0;

    __asm__ (
        "bgeu %[rs1], %[rs2], label1\n"
        "j label2\n"
        "label1:\n"
        "li %[result], 1\n"
        "label2:\n"
        : [result] "=r" (result)
        : [rs1] "r" (x), [rs2] "r" (y)
    );

    printf("Result: %lu\n", result);
    return 0;
}
