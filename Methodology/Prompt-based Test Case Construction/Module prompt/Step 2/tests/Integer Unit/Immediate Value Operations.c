#include <stdio.h>

int main() {
    // Addition with immediate value
    int a = 10;
    int b = a + 5;  // Adding immediate value 5 to a
    printf("a + 5 = %d\n", b);

    // Subtraction with immediate value
    int c = 20;
    int d = c - 7;  // Subtracting immediate value 7 from c
    printf("c - 7 = %d\n", d);

    // Bitwise AND with immediate value
    unsigned int e = 0xF0;
    unsigned int f = e & 0x0F;  // Performing bitwise AND with immediate value 0x0F
    printf("0xF0 & 0x0F = %x\n", f);

    // Bitwise OR with immediate value
    unsigned int g = 0x0F;
    unsigned int h = g | 0xF0;  // Performing bitwise OR with immediate value 0xF0
    printf("0x0F | 0xF0 = %x\n", h);

    // Bitwise XOR with immediate value
    unsigned int i = 0xAA;
    unsigned int j = i ^ 0x55;  // Performing bitwise XOR with immediate value 0x55
    printf("0xAA ^ 0x55 = %x\n", j);

    return 0;
}
