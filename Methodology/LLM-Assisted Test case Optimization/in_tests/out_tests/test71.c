
#include <stdio.h>

int main() {
    int a = 17, b = 5;
    int result;

    __asm__ __volatile__ (
        "rem %0, %1, %2"
        : "=r" (result)
        : "r" (a), "r" (b)
        : "memory"
    );

    printf("The result of %d %% %d is: %d\n", a, b, result);
    return 0;
}
