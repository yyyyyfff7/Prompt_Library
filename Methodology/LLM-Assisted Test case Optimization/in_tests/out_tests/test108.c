
#include <stdio.h>

int main() {
    float a = 10.5;
    float b = 10.5;
    int result;

    asm("feq.s %0, %1, %2"
        : "=r" (result)
        : "f" (a), "f" (b)
    );

    printf("Result: %d\n", result);

    return 0;
}
