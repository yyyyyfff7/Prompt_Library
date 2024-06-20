
#include <stdio.h>

int main() {
    float a = 5.0;
    float b = 3.0;
    int result;

    asm volatile (
        "fle.s %[result], %[a], %[b]"
        : [result] "=r" (result)
        : [a] "f" (a), [b] "f" (b)
    );

    printf("Result: %d\n", result);

    return 0;
}
