#include <stdio.h>

float convert(long value) {
    float result;
    __asm__ __volatile__ (
        "fcvt.s.l %0, %1"
        : "=f" (result)
        : "r" (value)
    );
    return result;
}

int main() {
    long value = 10;
    float result = convert(value);
    return 0;
}
