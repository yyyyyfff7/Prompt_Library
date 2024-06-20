
#include <stdio.h>

int main() {
    long long data[] = {10, 20};
    long long result;

    asm volatile (
        "ld %0, 0(%1)\n"
        "amoxor.d.aqrl %0, %2, (%1)"
        : "+r" (result)
        : "r" (data), "r" (30)
    );

    printf("Result: %lld\n", result);

    return 0;
}
