
#include <stdio.h>

#define CSR_MSTATUS 0x300

int main() {
    unsigned long result;

    // Using inline assembly to execute the CSRRWI instruction
    asm volatile("csrrwi %0, %1, %2"
                 : "=r"(result)   // Output operand: result variable to store the value read from the CSR
                 : "i"(CSR_MSTATUS), "i"(0x5) // Input operands: CSR address and immediate value
                 : /* No clobbered registers */
                 );

    printf("Value of mstatus after CSRRWI: 0x%lx\n", result);

    return 0;
}
