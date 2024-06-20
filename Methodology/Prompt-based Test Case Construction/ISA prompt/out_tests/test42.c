
#include <stdio.h>

int main() {
    int result;
    int rs1 = 5; // Example value for rs1
    int rs2 = 2; // Example value for rs2

    __asm__ __volatile__ (
        "sllw %0, %1, %2\n"
        : "=r" (result)
        : "r" (rs1), "r" (rs2)
    );

    printf("Result: %d\n", result);
    return 0;
}
