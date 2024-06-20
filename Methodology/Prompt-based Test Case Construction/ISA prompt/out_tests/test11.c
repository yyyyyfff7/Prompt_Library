
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int result = 0;

    asm volatile (
        "bne %[src1], %[src2], not_equal\n"
        "li %[dest], 0\n"
        "j end\n"
        "not_equal:\n"
        "li %[dest], 1\n"
        "end:\n"
        : [dest] "=r" (result)
        : [src1] "r" (a), [src2] "r" (b)
    );

    if(result) {
        printf("a and b are not equal.\n");
    } else {
        printf("a and b are equal.\n");
    }

    return 0;
}
