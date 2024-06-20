
#include <stdio.h>

void direct_jump() {
    // Label to jump to
    asm volatile (
        "label:\n\t"
        "addi t0, zero, 1\n\t"  // Set t0 to 1
    );

    // Perform the jump
    asm volatile (
        "jal t1, label\n\t"  // Jump to the label
        "nop\n\t"            // No operation, just a placeholder
    );

    // Ensure the variable is set
    int result;
    asm volatile (
        "mv %0, t0\n\t"
        : "=r" (result)
    );

    printf("Jump successful, t0 = %d\n", result);
}

int main() {
    direct_jump();
    return 0;
}
