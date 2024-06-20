#include <stdio.h>

int main() {
    int rd, imm6;

    // Set the immediate value
    imm6 = 42;

    // Execute the li instruction using inline assembly
    asm ("li %0, %1" : "=r" (rd) : "i" (imm6));

    // Print the result
    printf("The value in register rd is: %d\n", rd);

    return 0;
}
