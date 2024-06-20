
#include <stdio.h>

int main() {
    double fs1 = 3.14;
    double fs2 = 2.71;
    int result;

    asm volatile (
        "fle.d %0, %1, %2"
        : "=r" (result)
        : "f" (fs1), "f" (fs2)
    );

    printf("Result: %d\n", result);

    return 0;
}
