
#include <stdio.h>

int main() {
    int rs1 = 10;
    int rs2 = 3;
    int rd;

    asm("remu %0, %1, %2" : "=r" (rd) : "r" (rs1), "r" (rs2));

    printf("The result of REMU operation is: %d\n", rd);

    return 0;
}
