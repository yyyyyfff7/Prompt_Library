
#include <stdio.h>
#include <stdint.h>

int main() {
    int64_t rs1 = 10;
    int64_t rs2 = 20;
    int64_t rd;

    asm volatile ("amomax.d.aqrl %0, %2, (%1)"
                  : "=r" (rd)
                  : "r" (&rs1), "r" (rs2));

    printf("Result: %ld\n", rd);

    return 0;
}
