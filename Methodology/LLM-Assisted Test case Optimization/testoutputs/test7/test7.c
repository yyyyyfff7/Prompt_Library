
#include <stdio.h>

int main() {
    int rs1 = 5;
    int rs2 = 3;
    int result = 0;

    asm volatile (
        "bge %[rs1], %[rs2], label_true\n\t"
        "mv %[result], x0\n\t"    // result = 0
        "j end_label\n\t"
        "label_true:\n\t"
        "li %[result], 1\n\t"     // result = 1
        "end_label:\n\t"
        : [result] "=r" (result)
        : [rs1] "r" (rs1), [rs2] "r" (rs2)
        : "x0"
    );

    printf("Result: %d\n", result);
    return 0;
}
