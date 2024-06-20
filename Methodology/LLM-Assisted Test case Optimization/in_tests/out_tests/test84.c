
#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;

    // Execute the AMOMIN.W instruction
    asm volatile("amomin.w.aqrl %0, %1, (%2)"
                 : "=r" (b)
                 : "r" (a), "r" (&b)
                 :);

    printf("The minimum value is: %d\n", b);

    return 0;
}
