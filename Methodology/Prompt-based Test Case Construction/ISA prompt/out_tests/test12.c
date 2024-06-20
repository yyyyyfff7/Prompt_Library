
#include <stdio.h>

int main() {
    unsigned long csr_value;
    unsigned long rs1_value = 0x1; // Example value to clear specific bits

    // Inline assembly to perform CSRRC instruction
    asm volatile (
        "csrrc %0, mstatus, %1"
        : "=r"(csr_value)
        : "r"(rs1_value)
    );

    // Print the value of the CSR after the CSRRC instruction
    printf("CSR value after CSRRC: 0x%lx\n", csr_value);

    return 0;
}
