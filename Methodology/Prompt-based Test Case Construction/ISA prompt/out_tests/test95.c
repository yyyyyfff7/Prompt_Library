
#include <stdio.h>

int main() {
    long long int address = 0x1000;
    long long int data = 0x1234567890ABCDEF;
    long long int result;

    // Use sc.d instruction to conditionally store data to memory
    __asm__ __volatile__ (
        "sc.d.aqrl %[result], %[data], (%[address])"
        : [result] "=r" (result)
        : [address] "r" (address), [data] "r" (data)
        : "memory"
    );

    printf("Value stored in memory: 0x%016llX\n", result);

    return 0;
}
