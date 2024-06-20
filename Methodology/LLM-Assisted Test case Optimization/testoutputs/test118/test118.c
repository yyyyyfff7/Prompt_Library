#include <stdio.h>

int main() {
    float var = 3.14;
    int result;
    
    asm volatile ("fmv.x.w %0, %1" : "=r" (result) : "f" (var));
    
    printf("Result: %d\n", result);

    return 0;
}
