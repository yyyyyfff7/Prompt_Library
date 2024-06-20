
#include <stdio.h>

int main() {
    float input = 123.45;
    unsigned long result;

    asm ("fcvt.lu.s %0, %1, 0" : "=r" (result) : "f" (input));

    printf("Converted value: %lu\n", result);

    return 0;
}
