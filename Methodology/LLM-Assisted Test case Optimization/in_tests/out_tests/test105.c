
#include <stdio.h>

int main() {
    float f = 10.5;
    int result;

    asm ("fcvt.w.s %0, %1, rne" : "=r" (result) : "f" (f));

    printf("The result of FCVT.W.S instruction is: %d\n", result);
    return 0;
}
