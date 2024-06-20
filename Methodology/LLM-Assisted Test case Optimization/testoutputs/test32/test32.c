
#include <stdio.h>

void test_mret() {
    asm volatile (
        "csrr t0, mepc\n"
        "addi t0, t0, 4\n"
        "csrw mepc, t0\n"
        "mret\n"
    );
}

int main() {
    printf("Before mret\n");
    test_mret();
    printf("After mret\n");
    return 0;
}
