
#include <stdio.h>

int main() {
    int rs1 = 5;
    unsigned int rs2 = 3;
    int result;

    asm volatile (
        "MULHSU %0, %1, %2"
        : "=r" (result)
        : "r" (rs1), "r" (rs2)
    );

    printf("Result: %d\n", result);

    return 0;
}
