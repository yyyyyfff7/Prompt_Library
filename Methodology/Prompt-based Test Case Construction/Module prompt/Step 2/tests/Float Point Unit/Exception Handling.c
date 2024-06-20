#include <stdio.h>
#include <float.h> // For FLT_MAX
#include <math.h>  // For sqrt()

int main() {
    // Division by zero
    float divByZero = 1.0f / 0.0f;
    printf("Division by zero: %f\n", divByZero);

    // Overflow
    float overflow = FLT_MAX * 2.0f;
    printf("Overflow: %f\n", overflow);

    // Underflow
    float underflow = FLT_MIN / 2.0f;
    printf("Underflow: %e\n", underflow);

    // Invalid operation (square root of a negative number)
    float invalidOp = sqrt(-1.0f);
    printf("Invalid operation (sqrt of -1): %f\n", invalidOp);

    return 0;
}
