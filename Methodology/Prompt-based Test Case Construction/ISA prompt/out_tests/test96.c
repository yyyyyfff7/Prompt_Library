
#include <stdio.h>

int main() {
    int value = 42;
    int new_value = 100;
    
    __asm__ __volatile__(
        "mv a0, %0\n"
        "mv a1, %1\n"
        "mv a2, %2\n"
        "li a7, 0x1a\n"  // SC.W opcode
        "sc.w zero, a2, (a1)\n"
        "li %0, 0\n"
        : "+r" (value)
        : "r" (&value), "r" (new_value)
        : "a0", "a1", "a2", "a7"
    );

    printf("Value after SC.W: %d\n", value);

    return 0;
}
