#include <stdio.h>
#include <stdint.h>

int main() {
    int x = 0;

    __asm__ __volatile__ (
        ".option rvc\n\t"
        "c.j label1\n\t"
        "label2:\n\t"
        "addi %[x], %[x], 1\n\t"
        "j end\n\t"
        "label1:\n\t"
        "c.j label2\n\t"
        "end:\n\t"
        : [x] "+r" (x)
    );

    printf("x = %d\n", x);
    return 0;
}
