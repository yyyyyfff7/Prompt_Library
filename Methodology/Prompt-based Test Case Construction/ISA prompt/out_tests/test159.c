
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int result;

    asm("c.add %0, %1" : "=r" (result) : "r" (a), "r" (b));

    printf("Result of the signed addition: %d\n", result);

    return 0;
}
