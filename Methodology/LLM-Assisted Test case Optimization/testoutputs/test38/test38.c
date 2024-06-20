#include <stdio.h>

int main() {
    // Define memory and registers
    unsigned short memory[256]; // A small memory array to store data
    unsigned short data = 0xABCD; // Example data to store
    unsigned long base_addr = (unsigned long)memory; // Base address for memory

    // Inline assembly to perform SH instruction
    asm volatile (
        "li t0, 128\n"        // Load immediate 128 to t0 (memory offset)
        "mv t1, %0\n"         // Move base address to t1
        "mv t2, %1\n"         // Move data to t2
        "sh t2, 128(t1)\n"    // Store half-word data from t2 to memory[t1 + 128]
        :
        : "r" (base_addr), "r" (data)
        : "t0", "t1", "t2"
    );

    // Print the result to verify
    printf("Stored value: 0x%X\n", memory[128/2]);

    return 0;
}
