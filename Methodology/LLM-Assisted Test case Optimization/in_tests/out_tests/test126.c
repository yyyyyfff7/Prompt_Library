
#include <stdio.h>

int main() {
    float x = 3.14;
    float y;

    // Use inline assembly to store the value of x to memory
    __asm__ __volatile__ (
        "fsw %[x], 0(%[y])"
        : // no outputs
        : [x] "f" (x), [y] "r" (&y)
        : "memory"
    );

    printf("The stored value is: %f\n", y);
    return 0;
}
