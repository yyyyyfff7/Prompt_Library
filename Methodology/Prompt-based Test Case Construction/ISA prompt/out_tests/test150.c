
#include <stdio.h>

int main() {
    double fs1 = 3.14159;
    double rd;
    
    asm volatile ("fmv.x.d %0, %1" : "=f" (rd) : "f" (fs1));
    
    printf("Value read from fs1: %f\n", rd);
    
    return 0;
}
