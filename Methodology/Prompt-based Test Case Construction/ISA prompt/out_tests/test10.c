
#include <stdio.h>

int main() {
    unsigned long a = 5;
    unsigned long b = 10;
    unsigned long result;

    __asm__ volatile (
        "bltu %[src1], %[src2], label_true\n"
        "li %[res], 0\n"
        "j label_end\n"
        "label_true:\n"
        "li %[res], 1\n"
        "label_end:\n"
        : [res] "=r" (result)
        : [src1] "r" (a), [src2] "r" (b)
        : 
    );

    printf("Result: %lu\n", result);
    return 0;
}
