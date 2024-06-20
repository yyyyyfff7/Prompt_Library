
#include <stdio.h>

int main() {
    long value = 0x123456789ABCDEF0;
    long memory[2] = {0, 0};
    long *mem_ptr = memory;

    __asm__ volatile (
        "sd %1, 8(%0)"
        :
        : "r" (mem_ptr), "r" (value)
        : "memory"
    );

    printf("Stored value: 0x%lx\n", memory[1]);

    return 0;
}
