#include <stdio.h>

int main() {
    int signedInteger = 1234;
    float result;
    
    asm("fcvt.s.w %0, %1" : "=f"(result) : "r"(signedInteger));

    printf("Converted float value: %f\n", result);

    return 0;
}
