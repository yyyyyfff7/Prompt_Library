
#include <stdio.h>

int main() {
    int x, result;

    // Inline assembly code for c.lui instruction
    asm ("c.lui %0, 100" : "=r" (result));

    printf("Result: %d\n", result);

    return 0;
}
