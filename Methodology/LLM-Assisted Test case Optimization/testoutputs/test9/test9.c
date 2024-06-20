
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int result = 0;

    asm volatile (
        "blt %1, %2, label_blt\n\t"  // if a < b, branch to label_blt
        "j end\n\t"                  // else, jump to end
        "label_blt:\n\t"
        "li %0, 1\n\t"               // set result to 1 if branch taken
        "end:"
        : "=r" (result)              // output operands
        : "r" (a), "r" (b)           // input operands
    );

    printf("Result: %d\n", result);
    return 0;
}
