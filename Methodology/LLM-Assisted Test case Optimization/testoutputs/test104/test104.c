#include <stdio.h>

int main() {
    unsigned int input = 12345;
    float output;

    asm volatile ("fcvt.s.wu %0, %1" : "=f"(output) : "r"(input));

    printf("Converted value: %f\n", output);
    return 0;
}
