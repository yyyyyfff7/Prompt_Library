
#include <stdio.h>

int main() {
    int x = 10;
    int y;

    asm volatile (
        "srai %0, %1, 1"
        : "=r" (y)
        : "r" (x)
    );

    printf("Result: %d\n", y);

    return 0;
}
