
#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;
    int result;

    asm volatile (
        "C.JALR t0"
        : "=r" (result)
        : "r" (x), "r" (y)
    );

    printf("Return value: %d\n", result);

    return 0;
}
