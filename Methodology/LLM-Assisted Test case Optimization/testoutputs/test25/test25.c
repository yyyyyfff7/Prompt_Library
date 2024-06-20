
#include <stdio.h>

int main() {
    unsigned char data[4] = {0x12, 0x34, 0x56, 0x78}; // Sample data array
    unsigned int result;

    // Inline assembly to load byte from data array at offset 2
    asm volatile (
        "lbu %0, 2(%1)"
        : "=r" (result)
        : "r" (data)
    );

    printf("Loaded byte: 0x%x\n", result);

    return 0;
}
