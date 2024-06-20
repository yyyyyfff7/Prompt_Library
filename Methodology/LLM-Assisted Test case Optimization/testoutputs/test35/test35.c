
#include <stdio.h>

int main() {
    volatile char memory[16];
    int index = 5;
    char value = 'A';

    __asm__ volatile (
        "sb %1, %0(%2)\n"
        :
        : "i"(index), "r"(value), "r"(memory)
        : "memory"
    );

    printf("Stored value: %c\n", memory[index]);

    return 0;
}
