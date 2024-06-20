
#include <stdio.h>

int main() {
    int a = 10;
    int b = 2;
    int result;

    asm ("srl %0, %1, %2" : "=r" (result) : "r" (a), "r" (b));

    printf("Result: %d\n", result);

    return 0;
}
