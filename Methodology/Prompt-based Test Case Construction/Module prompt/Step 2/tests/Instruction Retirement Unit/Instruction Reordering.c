#include <stdio.h>

int main() {
    // Sequence with data dependencies
    int a = 10;
    int b = a + 5;  // Depends on the value of a
    int c = b * 2;  // Depends on the value of b
    printf("Data-dependent sequence: a = %d, b = %d, c = %d\n", a, b, c);

    // Independent sequence
    int d = 20;
    int e = 30;
    int f = d + e;  // Independent of the above sequence
    printf("Independent sequence: d = %d, e = %d, f = %d\n", d, e, f);

    // Mixed sequence with dependencies and independent instructions
    int g = f * 2;  // Depends on the value of f
    int h = 40;     // Independent
    int i = g + h;  // Depends on the values of g and h
    printf("Mixed sequence: g = %d, h = %d, i = %d\n", g, h, i);

    return 0;
}
