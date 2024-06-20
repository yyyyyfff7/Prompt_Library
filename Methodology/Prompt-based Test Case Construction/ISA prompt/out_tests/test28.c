
#include <stdio.h>

int main() {
    unsigned short int halfword;
    unsigned long int result;

    // Let's assume we have a memory location with an address.
    unsigned long int address = 0x1000; // Example address

    // Assembly code to load unsigned half-word
    __asm__ volatile (
        "lhu %0, 0(%1)"
        : "=r" (result)
        : "r" (address)
    );

    // Print the result
    printf("Loaded half-word: %lx\n", result);

    return 0;
}
