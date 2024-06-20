
#include <stdio.h>

double fmadd(double a, double b, double c, int rm) {
    double result;
    asm volatile ("fmadd.d %0, %1, %2, %3"
                  : "=f" (result)
                  : "f" (a), "f" (b), "f" (c)
                  :);

    return result;
}

int main() {
    double a = 2.5;
    double b = 3.5;
    double c = 4.5;
    int rm = 0;

    double result = fmadd(a, b, c, rm);

    printf("Result: %.2f\n", result);

    return 0;
}
