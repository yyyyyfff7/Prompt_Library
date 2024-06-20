#include <stdio.h>
#include <float.h> // For FLT_MAX

int main() {
    // Test cases for single-precision floating-point numbers
    float a = 3.5f;
    float b = -2.0f;
    float c = 0.0f;

    // Addition
    float addition = a + b;
    printf("Addition: %f + %f = %f\n", a, b, addition);

    // Subtraction
    float subtraction = a - b;
    printf("Subtraction: %f - %f = %f\n", a, b, subtraction);

    // Comparison
    if (a > b) {
        printf("Comparison: %f is greater than %f\n", a, b);
    } else {
        printf("Comparison: %f is not greater than %f\n", a, b);
    }

    // Operations with zero
    float zeroAddition = a + c;
    printf("Zero Addition: %f + %f = %f\n", a, c, zeroAddition);

    float zeroSubtraction = a - c;
    printf("Zero Subtraction: %f - %f = %f\n", a, c, zeroSubtraction);

    // Operations with special values (infinity)
    float infinity = FLT_MAX * 2.0f; // Simulate infinity
    float infAddition = a + infinity;
    printf("Infinity Addition: %f + %f = %f\n", a, infinity, infAddition);

    float infSubtraction = a - infinity;
    printf("Infinity Subtraction: %f - %f = %f\n", a, infinity, infSubtraction);

    // Operations with NaN (Not a Number)
    float nanValue = 0.0f / 0.0f; // Simulate NaN
    float nanAddition = a + nanValue;
    printf("NaN Addition: %f + %f = %f\n", a, nanValue, nanAddition);

    return 0;
}
