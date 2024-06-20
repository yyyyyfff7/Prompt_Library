
#include <stdio.h>

int main() {
    double value;
    double* ptr = &value;
    
    __asm__ volatile (
        "lr.d.aqrl %0, (%1)"
        : "=f" (value)
        : "r" (ptr)
    );
    
    printf("%.2f\n", value);

    return 0;
}
