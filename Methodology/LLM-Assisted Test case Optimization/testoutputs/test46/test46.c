
#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int result;

    asm volatile (
        "sltu %0, %1, %2"
        : "=r" (result)
        : "r" (a), "r" (b)
    );

    printf("Result: %d\n", result);

    return 0;
}
