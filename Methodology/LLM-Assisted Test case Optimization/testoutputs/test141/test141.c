#include <stdio.h>

int main() {
    double value;
    double* ptr = &value;

    // Load the double-precision floating-point value from memory
    asm("fld %0, 0(%1)"
        : "=f" (value)
        : "r" (ptr));

    // Print the loaded value
    printf("Value: %f\n", value);

    return 0;
}
