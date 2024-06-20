
#include <stdio.h>

int main() {
    long long int data = 0x1234567887654321LL;
    long long int *ptr = &data;

    // Use inline assembly to store the 8-byte data using c.sd instruction
    __asm__ __volatile__ (
        "c.sd %[data], 0(%[ptr])"
        : // no outputs
        : [data] "r" (data), [ptr] "r" (ptr)
        : "memory"
    );

    printf("Value stored: 0x%016llX\n", data);
    return 0;
}
