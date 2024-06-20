
#include <stdio.h>

int main() {
    unsigned long csr_value;
    unsigned long rd;

    // Inline assembly to execute csrrsi instruction
    __asm__ volatile (
        "li t0, 0x5\n"          // Load immediate 5 into temporary register t0
        "csrrsi %0, 0xC00, 5\n" // Execute csrrsi, reading the CSR (0xC00 is an example CSR address) and setting rd
        : "=r"(csr_value)       // Output operand
    );

    rd = csr_value;
    printf("CSR value: %lu\n", rd);

    return 0;
}
