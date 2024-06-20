
#include <stdio.h>

int main() {
    int x = 0x12345678;
    int result;

    __asm__ __volatile__ (
        "srliw %0, %1, 4"
        : "=r" (result)
        : "r" (x)
        : "memory"
    );

    printf("Original value: 0x%08X\n", x);
    printf("Shifted value: 0x%08X\n", result);

    return 0;
}
