
#include <stdio.h>
#include <stdint.h>

int main() {
    long long a = 10, b = 20;
    long long result;

    __asm__ __volatile__ (
        "amomin.d.aq %[result], %[b], (%[a])"
        : [result] "=r" (result)
        : [a] "r" (&a), [b] "r" (b)
        : "memory"
    );

    printf("The minimum of %lld and %lld is %lld\n", a, b, result);
    return 0;
}
