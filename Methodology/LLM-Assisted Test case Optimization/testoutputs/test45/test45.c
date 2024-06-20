
#include <stdio.h>

int main() {
    int number = 5;
    int result;

    asm (
        "sltiu %0, %1, 10"
        : "=r" (result)
        : "r" (number)
    );

    printf("Result: %d\n", result);

    return 0;
}
