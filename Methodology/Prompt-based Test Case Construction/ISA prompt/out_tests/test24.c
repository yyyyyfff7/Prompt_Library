
#include <stdio.h>

int main() {
    unsigned char data[8] = {0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0};
    int index = 3; // index of the byte to load
    int result;

    // Load byte using inline assembly
    __asm__ volatile (
        "lb %0, %1(%2)"
        : "=r" (result)
        : "i" (index), "r" (data)
    );

    printf("Loaded byte: 0x%x\n", result);
    return 0;
}
