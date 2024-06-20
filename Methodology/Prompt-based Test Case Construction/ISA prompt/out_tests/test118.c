
#include <stdio.h>

int main() {
    float var = 3.14;
    float result;
    
    asm volatile ("fmv.x.w %0, %1" : "=f" (result) : "f" (var));
    
    printf("Result: %f\n", result);

    return 0;
}
