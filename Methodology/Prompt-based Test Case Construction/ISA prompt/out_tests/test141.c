
#include <stdio.h>

int main() {
    double value;
    double* ptr;

    // Load the double-precision floating-point value from memory
    asm("fld %[result], %[address]"
        : [result] "=f" (value)
        : [address] "r" (ptr));

    // Print the loaded value
    printf("Value: %f\n", value);

    return 0;
}
