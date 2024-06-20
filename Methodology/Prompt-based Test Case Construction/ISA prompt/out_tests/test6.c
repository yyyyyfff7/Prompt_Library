
#include <stdio.h>

int main() {
    int a = 5;
    int b = 5;
    int result = 0;

    asm volatile (
        "beq %[input_a], %[input_b], equal_label\n\t"
        "j end_label\n\t"
        "equal_label:\n\t"
        "li %[output], 1\n\t"
        "end_label:\n\t"
        : [output] "=r" (result)
        : [input_a] "r" (a), [input_b] "r" (b)
        : "cc"
    );

    printf("Result: %d\n", result);
    return 0;
}
