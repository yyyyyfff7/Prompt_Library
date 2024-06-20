
#include <stdio.h>

int main() {
    unsigned long source = 0xFFFFFFFF12345678;
    unsigned long destination;

    asm volatile (
        "lwu %[dest], 0(%[src])\n"
        : [dest] "=r" (destination)
        : [src] "r" (&source)
    );

    printf("LWU result: 0x%lx\n", destination);

    return 0;
}
