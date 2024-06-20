#include <stdio.h>
#include <limits.h>

void test16x16Multiplication() {
    short a = 32767; // Maximum 16-bit integer
    short b = -32768; // Minimum 16-bit integer
    short c = 0;
    short d = 1;

    printf("16x16 Multiplication:\n");
    printf("%d * %d = %d\n", a, a, a * a);
    printf("%d * %d = %d\n", b, b, b * b);
    printf("%d * %d = %d\n", a, c, a * c);
    printf("%d * %d = %d\n", a, d, a * d);
    printf("%d * %d = %d\n", b, d, b * d);
}

void test32x32Multiplication() {
    int a = INT_MAX; // Maximum 32-bit integer
    int b = INT_MIN; // Minimum 32-bit integer
    int c = 0;
    int d = 1;

    printf("32x32 Multiplication:\n");
    printf("%d * %d = %d\n", a, a, a * a);
    printf("%d * %d = %d\n", b, b, b * b);
    printf("%d * %d = %d\n", a, c, a * c);
    printf("%d * %d = %d\n", a, d, a * d);
    printf("%d * %d = %d\n", b, d, b * d);
}

void test64x64Multiplication() {
    long long a = LLONG_MAX; // Maximum 64-bit integer
    long long b = LLONG_MIN; // Minimum 64-bit integer
    long long c = 0;
    long long d = 1;

    printf("64x64 Multiplication:\n");
    printf("%lld * %lld = %lld\n", a, a, a * a);
    printf("%lld * %lld = %lld\n", b, b, b * b);
    printf("%lld * %lld = %lld\n", a, c, a * c);
    printf("%lld * %lld = %lld\n", a, d, a * d);
    printf("%lld * %lld = %lld\n", b, d, b * d);
}

int main() {
    test16x16Multiplication();
    printf("\n");
    test32x32Multiplication();
    printf("\n");
    test64x64Multiplication();

    return 0;
}
