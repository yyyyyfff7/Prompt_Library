#include <stdio.h>
#include <limits.h> // For LLONG_MAX and LLONG_MIN

int main() {
    // Addition
    long long int a = 9223372036854775807; // Maximum 64-bit integer
    long long int b = -9223372036854775807; // Minimum 64-bit integer
    long long int sum = a + b;
    printf("Addition: %lld + %lld = %lld\n", a, b, sum);

    // Subtraction
    long long int c = 0;
    long long int d = -10;
    long long int difference = c - d;
    printf("Subtraction: %lld - %lld = %lld\n", c, d, difference);

    // Multiplication
    long long int e = 1000000000;
    long long int f = -2000000000;
    long long int product = e * f;
    printf("Multiplication: %lld * %lld = %lld\n", e, f, product);

    // Division
    long long int g = -9223372036854775807;
    long long int h = 2;
    long long int quotient = g / h;
    printf("Division: %lld / %lld = %lld\n", g, h, quotient);

    return 0;
}
