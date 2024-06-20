#include <stdio.h>

int main() {
    int result;

    // Inline assembly code for lui instruction
    asm ("lui %0, 100" : "=r" (result));

    printf("Result: %d\n", result);

    return 0;
}
