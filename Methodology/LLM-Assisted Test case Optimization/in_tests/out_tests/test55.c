
#include <stdio.h>

int main() {
    int x = 10;
    int y = 2;
    asm volatile (
        "srlw %0, %1, %2"
        : "=r" (x)
        : "r" (x), "r" (y)
    );
    printf("Result: %d\n", x);
    return 0;
}
