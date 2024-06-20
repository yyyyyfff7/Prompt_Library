
#include <stdio.h>

int main() {
    int value = 42;
    int *address = (int *)0x1000; // Replace 0x1000 with the target memory address

    __asm__ __volatile__ (
        "sw %0, 0(%1)"
        :
        : "r" (value), "r" (address)
    );

    printf("Word stored successfully.\n");
    
    return 0;
}
