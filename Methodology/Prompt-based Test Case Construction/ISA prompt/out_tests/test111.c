
#include <stdio.h>

int main() {
    float result;

    asm volatile (
        "flw %0, 12(x2)" : "=f" (result)
    );

    printf("Result: %f\n", result);

    return 0;
}
