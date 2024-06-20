#include <stdio.h>

int main() {
    int a = 10;
    int count = 2;

    asm volatile (
        "srli %0, %1, %2" : "=r" (a) : "r" (a), "i" (count)
    );

    printf("Result: %d\n", a);

    return 0;
}
