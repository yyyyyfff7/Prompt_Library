
#include <stdio.h>

int main() {
    int16_t half_word;
    int64_t base_address = 0x80000000;
    int64_t offset = 4;
    int64_t result;

    // Sample memory array for demonstration
    int16_t memory[] = {0x1234, 0x5678, 0x9ABC, 0xDEF0, 0x1357};

    // Load half-word from memory using inline assembly
    asm volatile (
        "lh %0, %1(%2)"
        : "=r" (half_word)
        : "i" (offset), "r" (base_address)
    );

    // Simulate the memory access (base_address + offset)
    result = memory[offset / 2];

    printf("Loaded half-word: 0x%04x\n", half_word);
    printf("Expected result: 0x%04x\n", result);

    return 0;
}
