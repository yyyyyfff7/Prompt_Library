
#include <stdio.h>

int main() {
    unsigned long long csr_value;

    asm volatile (
        "li t0, 0x1\n\t"        // Load immediate 1 into temporary register t0
        "csrrci %[result], 0x300, 1\n\t" // Clear bit 0 of CSR 0x300 (mstatus) and store result in csr_value
        : [result] "=r" (csr_value) // Output operand
        : // No input operands
        : "t0" // Clobbers
    );

    printf("CSR value after CSRR CI: %llx\n", csr_value);

    return 0;
}
