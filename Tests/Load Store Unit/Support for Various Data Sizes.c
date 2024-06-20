#include <stdio.h>
#include <stdint.h> // For fixed-width integer types

int main() {
    // Data sizes: byte, half-word, word, double-word, four-word
    uint8_t byteValue = 0xAB;
    uint16_t halfWordValue = 0xABCD;
    uint32_t wordValue = 0xABCDEF01;
    uint64_t doubleWordValue = 0xABCDEF0123456789;
    uint64_t fourWordValue[4] = {0xABCDEF0123456789, 0xABCDEF0123456789, 0xABCDEF0123456789, 0xABCDEF0123456789};

    // Store and load operations
    uint8_t loadedByteValue = byteValue;
    uint16_t loadedHalfWordValue = halfWordValue;
    uint32_t loadedWordValue = wordValue;
    uint64_t loadedDoubleWordValue = doubleWordValue;
    uint64_t loadedFourWordValue[4];
    for (int i = 0; i < 4; i++) {
        loadedFourWordValue[i] = fourWordValue[i];
    }

    // Verify the accuracy of loaded values
    printf("Byte value: 0x%02X, Loaded byte value: 0x%02X\n", byteValue, loadedByteValue);
    printf("Half-word value: 0x%04X, Loaded half-word value: 0x%04X\n", halfWordValue, loadedHalfWordValue);
    printf("Word value: 0x%08X, Loaded word value: 0x%08X\n", wordValue, loadedWordValue);
    printf("Double-word value: 0x%016llX, Loaded double-word value: 0x%016llX\n", doubleWordValue, loadedDoubleWordValue);
    printf("Four-word value: 0x%016llX%016llX%016llX%016llX\n", fourWordValue[0], fourWordValue[1], fourWordValue[2], fourWordValue[3]);
    printf("Loaded four-word value: 0x%016llX%016llX%016llX%016llX\n", loadedFourWordValue[0], loadedFourWordValue[1], loadedFourWordValue[2], loadedFourWordValue[3]);

    return 0;
}
