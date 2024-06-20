
#include <stdio.h>

int main() {
    int value = 0;
    int addr = 0x1000;

    asm volatile (
        "lr.w.aqrl %0, (%1)"
        : "=r" (value)
        : "r" (addr)
        : "memory"
    );

    printf("Value loaded: %d\n", value);

    return 0;
}
