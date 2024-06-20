#include <stdio.h>

int main() {
    // Independent arithmetic operations
    int a = 10;
    int b = 20;
    int c = 30;

    // Independent logic operations
    int d = a & b; // AND
    int e = b | c; // OR
    int f = c ^ a; // XOR

    // More independent arithmetic operations
    int g = a + b;
    int h = c - a;
    int i = b * c;

    // Print the results
    printf("Arithmetic results: a + b = %d, c - a = %d, b * c = %d\n", g, h, i);
    printf("Logic results: a & b = %d, b | c = %d, c ^ a = %d\n", d, e, f);

    return 0;
}
