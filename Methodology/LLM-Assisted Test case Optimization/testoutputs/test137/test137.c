
#include <stdio.h>

int main() {
    double input = 3.14;
    int output;

    asm("fcvt.w.d %0, %1, rm" : "=r" (output) : "f" (input));

    printf("Converted value: %d\n", output);

    return 0;
}
