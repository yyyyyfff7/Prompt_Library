
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int result;

    asm("mul %0, %1, %2"
        : "=r" (result)
        : "r" (a), "r" (b));

    printf("The result of the multiplication is: %d\n", result);

    return 0;
}
