
#include <stdio.h>

int main() {
    float input_float = 123.456;
    unsigned int result;

    asm volatile ("fcvt.wu.s %0, %1, 0" : "=r" (result) : "f" (input_float));

    printf("Result: %u\n", result);

    return 0;
}
