
#include <stdio.h>

int main() {
    double result, fs1 = 10.0, fs2 = 2.0;
    asm ("fdiv.d %0, %1, %2" : "=f" (result) : "f" (fs1), "f" (fs2));
    printf("Result of the double precision floating-point division: %lf\n", result);
    return 0;
}
