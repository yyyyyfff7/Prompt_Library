
#include <stdio.h>

int main() {
    unsigned long result;
    unsigned long value_to_write = 0x12345678; // Example value to write to CSR
    unsigned long csr_address = 0x300; // Example CSR address, like mstatus

    __asm__ volatile (
        "csrrw %0, %1, %2"
        : "=r" (result)               // Output: result will contain the old CSR value
        : "i" (csr_address), "r" (value_to_write) // Input: csr_address, value_to_write
    );

    printf("Old CSR value: 0x%lx\n", result);
    printf("New CSR value written: 0x%lx\n", value_to_write);

    return 0;
}
