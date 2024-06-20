#include <stdio.h>

int main() {
    double fs1 = 3.14159;
    long long rd;
    
    asm volatile ("fmv.x.d %0, %1" : "=r" (rd) : "f" (fs1));
    
    printf("Value read from fs1: %lld\n", rd);
    
    return 0;
}
