
#include <stdio.h>
#include <stdint.h>

float fmul_s(float fs1, float fs2);

int main() {
    float fs1 = 2.5;
    float fs2 = 3.5;
    float result = fmul_s(fs1, fs2);
    
    printf("Result: %f\n", result);
    
    return 0;
}

float fmul_s(float fs1, float fs2) {
    float fd;
    
    asm("fmul.s %0, %1, %2, 0"
        : "=f" (fd)
        : "f" (fs1), "f" (fs2));
    
    return fd;
}
