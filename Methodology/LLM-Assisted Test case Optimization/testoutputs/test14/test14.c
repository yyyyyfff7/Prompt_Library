#include <stdio.h>

int main() {
    unsigned long int value;
    unsigned long int csr = 0x300; // Example CSR, mstatus

    // Inline assembly to execute the CSRRS instruction
    __asm__ volatile (
        "li t0, 0x1\n"           // Load immediate value 0x1 into t0
        "csrrs %0, %1, t0\n"     // Set the CSR mstatus with value in t0, and store the result in value
        : "=r"(value)            // Output operand
        : "i"(csr)               // Input operand
        : "t0"                   // Clobbered register
    );

    printf("CSR value after CSRRS: %lx\n", value);

    return 0;
}
