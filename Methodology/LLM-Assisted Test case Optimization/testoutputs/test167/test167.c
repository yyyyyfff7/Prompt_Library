#include <stdint.h>

int main() {
    int32_t x = 0;

    __asm__ __volatile__ (
        "li t0, 0\n\t"
        "beqz t0, label\n\t"
        "li t0, 1\n\t"
        "label:\n\t"
        "mv %[result], t0\n\t"
        : [result] "=r" (x)
        :
        : "t0"
    );

    return x;
}
