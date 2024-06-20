#include <stdio.h>

int main() {
    // Test inputs
    long long int a = 0xAAAAAAAAAAAAAAAA; // Alternating bit pattern
    long long int b = 0xFFFFFFFFFFFFFFFF; // All ones
    long long int c = 0x0000000000000000; // All zeros

    // Bitwise AND
    long long int andResult = a & b;
    printf("Bitwise AND: %llx & %llx = %llx\n", a, b, andResult);

    // Bitwise OR
    long long int orResult = a | c;
    printf("Bitwise OR: %llx | %llx = %llx\n", a, c, orResult);

    // Bitwise XOR
    long long int xorResult = a ^ b;
    printf("Bitwise XOR: %llx ^ %llx = %llx\n", a, b, xorResult);

    // Bitwise NOT
    long long int notResult = ~a;
    printf("Bitwise NOT: ~%llx = %llx\n", a, notResult);

    // Left shift
    long long int leftShift = a << 2;
    printf("Left shift: %llx << 2 = %llx\n", a, leftShift);

    // Right shift
    long long int rightShift = a >> 2;
    printf("Right shift: %llx >> 2 = %llx\n", a, rightShift);

    return 0;
}
