#include <stdio.h>
#include <math.h> // For sqrt()

int main() {
    // Floating-point division
    float divSingle = 10.0f / 3.0f;
    double divDouble = 10.0 / 3.0;

    printf("Single-precision division: %f\n", divSingle);
    printf("Double-precision division: %lf\n", divDouble);

    // Square root
    float sqrtSingle = sqrtf(16.0f);
    double sqrtDouble = sqrt(16.0);

    printf("Single-precision square root: %f\n", sqrtSingle);
    printf("Double-precision square root: %lf\n", sqrtDouble);

    // Test with different operand values
    float smallValue = 0.0001f;
    float largeValue = 1e8f;

    printf("Square root of small value: %f\n", sqrtf(smallValue));
    printf("Square root of large value: %f\n", sqrtf(largeValue));

    // Division by a small value
    printf("Division by a small value: %f\n", 1.0f / smallValue);

    // Division by a large value
    printf("Division by a large value: %f\n", 1.0f / largeValue);

    return 0;
}
