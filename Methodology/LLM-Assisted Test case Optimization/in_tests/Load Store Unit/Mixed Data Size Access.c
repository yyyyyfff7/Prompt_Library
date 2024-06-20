#include <stdio.h>
#include <stdint.h> // For fixed-width integer types

int main() {
    // Array for storing different data sizes
    uint8_t byteArray[4];
    uint16_t shortArray[2];
    uint32_t intArray[1];
    uint64_t longArray[1];

    // Store operations with different data sizes
    byteArray[0] = 0xAB;
    byteArray[1] = 0xCD;
    byteArray[2] = 0xEF;
    byteArray[3] = 0x12;

    shortArray[0] = 0x1234;
    shortArray[1] = 0x5678;

    intArray[0] = 0x9ABCDEF0;

    longArray[0] = 0x123456789ABCDEF0;

    // Load operations and verification
    printf("Byte array: ");
    for (int i = 0; i < 4; i++) {
        printf("%02X ", byteArray[i]);
    }
    printf("\n");

    printf("Short array: ");
    for (int i = 0; i < 2; i++) {
        printf("%04X ", shortArray[i]);
    }
    printf("\n");

    printf("Int array: %08X\n", intArray[0]);
    printf("Long array: %016llX\n", longArray[0]);

    return 0;
}
