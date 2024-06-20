
#include <stdio.h>

int main() {
    int a = 10;

    asm volatile (
        "c.bnez %0, skip\n\t"
        "li a0, 1\n\t"
        "li a7, 93\n\t"
        "ecall\n\t"
        "skip:\n\t"
        :
        : "r" (a)
        : "a0", "a7"
    );

    printf("Program executed successfully\n");

    return 0;
}
