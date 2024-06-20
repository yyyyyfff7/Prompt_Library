#include <stdio.h>

int main() {
    // Division with different operand sizes and values
    long long int a = 9223372036854775807LL; // Maximum 64-bit integer
    long long int b = 2LL;
    long long int result1 = a / b;
    printf("Division: %lld / %lld = %lld\n", a, b, result1);

    int c = 100;
    int d = -3;
    int result2 = c / d;
    printf("Division: %d / %d = %d\n", c, d, result2);

    // Dividing by zero (undefined behavior in C, but included for completeness)
    int e = 10;
    int f = 0;
    // int result3 = e / f; // This will cause a runtime error

    // Dividing by one
    int g = 50;
    int h = 1;
    int result4 = g / h;
    printf("Division: %d / %d = %d\n", g, h, result4);

    // Dividing negative numbers
    int i = -20;
    int j = -4;
    int result5 = i / j;
    printf("Division: %d / %d = %d\n", i, j, result5);

    return 0;
}
