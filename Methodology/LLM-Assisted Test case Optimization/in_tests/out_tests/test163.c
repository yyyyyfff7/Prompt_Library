
#include <stdio.h>

int main() {
    int initial_sp;

    // Save the initial value of the stack pointer
    __asm__ __volatile__ ("mv %0, sp" : "=r" (initial_sp));

    // Adjust the stack pointer by 16 * 4 = 64 bytes
    __asm__ __volatile__ ("c.addi16sp sp, 4");

    int new_sp;
    __asm__ __volatile__ ("mv %0, sp" : "=r" (new_sp));

    printf("Initial stack pointer: %p\n", (void*)initial_sp);
    printf("New stack pointer: %p\n", (void*)new_sp);

    return 0;
}
