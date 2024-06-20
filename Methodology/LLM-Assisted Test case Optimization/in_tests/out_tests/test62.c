
#include <stdio.h>

int main() {
    int a = 100;
    int b = 7;
    int result;

    __asm__ __volatile__ (
        "div %0, %1, %2"
        : "=r" (result)
        : "r" (a), "r" (b)
        : "memory"
    );

    printf("Result: %d\n", result);
    return 0;
}
