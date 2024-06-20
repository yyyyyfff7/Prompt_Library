
#include <stdio.h>

int main() {
    int a = 5;
    int b = 7;
    int result;

    asm("mulw %0, %1, %2"
        : "=r" (result)
        : "r" (a), "r" (b));

    printf("The result of multiplication is: %d\n", result);

    return 0;
}
