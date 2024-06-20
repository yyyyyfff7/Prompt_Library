
#include <stdio.h>

int main() {
    int x = 10;

    __asm__ __volatile__ (
        "c.addiw %0, 20"
        : "+r" (x)
        :
        : "memory"
    );

    printf("The result is: %d\n", x);
    return 0;
}
