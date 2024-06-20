
#include <stdio.h>

int main() {
    float fs1 = 10.5f;
    float fs2 = -7.2f;
    float result;

    // Inline assembly using fsgnjx.s instruction
    asm volatile (
        "fsgnjx.s %0, %1, %2\n\t"  // fsgnjx.s result, fs1, fs2
        : "=f" (result)           // Output: result (floating point)
        : "f" (fs1), "f" (fs2)    // Inputs: fs1, fs2 (floating point)
    );

    printf("Result: %.2f\n", result);

    return 0;
}
