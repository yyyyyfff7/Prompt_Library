
#include <stdio.h>

int main() {
    long long int data = 0x1234567890ABCDEF;

    __asm__ __volatile__ (
        "sd %[data], 0(sp)\n\t"
        "c.sdsp %[data], 0(sp)\n\t"
        : /* no output */
        : [data] "r" (data)
        : "memory"
    );

    long long int result1, result2;
    __asm__ __volatile__ (
        "ld %[result1], 0(sp)\n\t"
        "ld %[result2], 8(sp)\n\t"
        : [result1] "=r" (result1),
          [result2] "=r" (result2)
        : /* no input */
        : "memory"
    );

    printf("Original data: 0x%016llX\n", data);
    printf("Result1 (sd): 0x%016llX\n", result1);
    printf("Result2 (c.sdsp): 0x%016llX\n", result2);

    return 0;
}
