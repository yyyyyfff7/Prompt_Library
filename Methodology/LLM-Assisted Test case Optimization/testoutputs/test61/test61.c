
#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;

    __asm__ __volatile__(
        "xori %[result], %[value1], %[value2]"
        : [result] "=r" (a)
        : [value1] "r" (a), [value2] "i" (b)
    );

    printf("XOR of %d and %d is %d\n", 10, 5, a);

    return 0;
}
