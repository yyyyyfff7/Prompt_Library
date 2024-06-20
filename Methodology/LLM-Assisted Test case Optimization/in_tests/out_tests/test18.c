
#include <stdio.h>

void trigger_breakpoint() {
    asm volatile ("ebreak");
}

int main() {
    printf("Triggering breakpoint...\n");
    trigger_breakpoint();
    printf("Breakpoint triggered.\n");
    return 0;
}
