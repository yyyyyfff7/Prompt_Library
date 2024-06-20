
// Inline assembly C program using ADDIW instruction (RV64GC architecture)

#include <stdint.h>

int main() {
    int32_t a = 5;
    int32_t b = 10;
    int32_t result;

    // Inline assembly to perform ADDIW instruction
    asm volatile (
        "addiw %0, %1, 7\n\t"  // ADDIW rd, rs1, imm12
        : "=r" (result)       // Output constraint (result)
        : "r" (a)             // Input constraint (a)
        :                     // No clobbered registers
    );

    // Print the result
    printf("Result of ADDIW operation: %d\n", result);

    return 0;
}
