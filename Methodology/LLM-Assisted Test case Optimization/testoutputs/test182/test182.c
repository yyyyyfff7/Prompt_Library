#include <stdio.h>

int main() {
    int value;
    int* stack_pointer = &value; // Use stack_pointer as a reference

    asm volatile (
        "lw %0, 0(%1)" // Load word from stack pointer into %0
        : "=r"(value) // Output operand
        : "r"(stack_pointer) // Input operand
    );

    printf("Value loaded from stack pointer: %d\n", value);

    return 0;
}
