#include <stdio.h>
#include <stdint.h> // For fixed-width integer types

int main() {
    // Test values for sign and zero extension
    uint8_t byteValue = 0xA0; // 8-bit unsigned value
    uint16_t halfWordValue = 0xFFA0; // 16-bit unsigned value

    // Sign extension
    int8_t signExtendedByte = (int8_t)byteValue; // Extend 8-bit value to 32-bit signed value
    int16_t signExtendedHalfWord = (int16_t)halfWordValue; // Extend 16-bit value to 32-bit signed value

    // Zero extension
    uint32_t zeroExtendedByte = (uint32_t)byteValue; // Extend 8-bit value to 32-bit unsigned value
    uint32_t zeroExtendedHalfWord = (uint32_t)halfWordValue; // Extend 16-bit value to 32-bit unsigned value

    // Print the results
    printf("Original byte value: 0x%02X\n", byteValue);
    printf("Sign-extended byte value: 0x%08X\n", signExtendedByte);
    printf("Zero-extended byte value: 0x%08X\n", zeroExtendedByte);

    printf("Original half-word value: 0x%04X\n", halfWordValue);
    printf("Sign-extended half-word value: 0x%08X\n", signExtendedHalfWord);
    printf("Zero-extended half-word value: 0x%08X\n", zeroExtendedHalfWord);

    return 0;
}
