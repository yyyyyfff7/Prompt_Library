
#include <stdio.h>

int main() {
    int a = 100;
    int b = 25;
    int result;

    __asm__ __volatile__ (
        "divw %0, %1, %2"
        : "=r" (result)
        : "r" (a), "r" (b)
        : "memory"
    );

    printf("Result: %d\n", result);
    return 0;
}
