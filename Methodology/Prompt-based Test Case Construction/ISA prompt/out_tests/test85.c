
#include <stdio.h>

int main() {
    long long int a = 100, b = 50;
    long long int result;

    __asm__ __volatile__ (
        "amominu.d %0, %2, (%1)"
        : "=r" (result)
        : "r" (&a), "r" (b)
        : "memory"
    );

    printf("Result: %lld\n", result);
    return 0;
}
