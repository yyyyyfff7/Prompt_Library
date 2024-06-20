
#include <stdio.h>

int main() {
    int result;
    int a = 10;
    int b = 5;

    asm("sub %0, %1, %2"
        : "=r" (result)
        : "r" (a), "r" (b));

    printf("Result: %d\n", result);

    return 0;
}
