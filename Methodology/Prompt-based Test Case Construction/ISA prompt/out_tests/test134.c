
#include <stdio.h>

int main() {
    double input = 3.14;
    long output;

    asm("fcvt.l.d %0, %1, 0" : "=r" (output) : "f" (input));

    printf("Converted value: %ld\n", output);

    return 0;
}
