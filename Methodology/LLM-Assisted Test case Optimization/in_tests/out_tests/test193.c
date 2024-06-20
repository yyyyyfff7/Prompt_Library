
#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int result;

    __asm__ __volatile__ (
        "c.sub %[rd], %[rs2]"
        : [rd] "=r" (result)
        : [rs2] "r" (b)
        : "memory"
    );

    printf("a = %d, b = %d, result = %d\n", a, b, result);
    return 0;
}
