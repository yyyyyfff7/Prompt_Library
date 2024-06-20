
#include <stdio.h>

int main() {
    printf("Executing 'c.nop' instruction...\n");

    asm volatile ("c.nop");

    printf("Completed 'c.nop' instruction\n");

    return 0;
}
