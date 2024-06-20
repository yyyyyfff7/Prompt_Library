
#include <stdio.h>

int main() {
    double value = 3.14;

    asm volatile (
        "c.fsdsp %0, 0(sp)"
        :
        : "f" (value)
    );

    printf("Value stored at stack pointer location\n");
    return 0;
}
