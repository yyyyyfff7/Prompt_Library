#include <stdint.h>
#include <stdio.h>

int main(void) {
    int32_t a = 42;
    int32_t b = 20;
    int32_t c;

    __asm__ volatile(
        "subw %0, %1, %2"
        : "=r" (c)
        : "r" (a), "r" (b)
    );

    printf("Result: %d\n", c);

    return 0;
}
