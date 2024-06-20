
#include <stdio.h>

int main() {
    int x = 5;
    int shift_amount = 3;

    // Inline assembly code to shift x left by shift_amount
    asm (
        "c.slli %0, %1, %2"
        : "=r" (x)
        : "r" (x), "i" (shift_amount)
    );

    printf("Result: %d\n", x);

    return 0;
}
