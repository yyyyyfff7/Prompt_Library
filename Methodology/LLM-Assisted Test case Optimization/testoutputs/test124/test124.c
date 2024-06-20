// Program to compute the square root of a single precision floating-point number

#include <stdio.h>

float computeSquareRoot(float x) {
    float result;

    // Inline assembly code to execute fsqrt.s instruction
    __asm__ __volatile__(
        "fsqrt.s %0, %1"
        : "=f" (result)
        : "f" (x)
    );

    return result;
}

int main() {
    float x = 16.0;
    float squareRoot;

    squareRoot = computeSquareRoot(x);

    printf("Square root of %.2f is %.2f\n", x, squareRoot);

    return 0;
}
