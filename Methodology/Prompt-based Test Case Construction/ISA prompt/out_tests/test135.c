
#include <stdio.h>

// Function to convert double precision floating-point to unsigned long integer
unsigned long convertFloatToUnsignedLong(double num) {
    unsigned long result;

    // RISC-V assembly inline code
    asm("fcvt.lu.d %0, %1" : "=r" (result) : "f" (num));

    return result;
}

int main() {
    double num = 12.345;
    unsigned long result;

    result = convertFloatToUnsignedLong(num);

    printf("Result: %lu\n", result);

    return 0;
}
