#include <stdio.h>
#include <math.h> // For sqrt()

int main() {
    // Addition followed by multiplication
    float addMulSingle = (3.5f + 2.0f) * 4.0f;
    double addMulDouble = (3.5 + 2.0) * 4.0;

    printf("Single-precision addition followed by multiplication: %f\n", addMulSingle);
    printf("Double-precision addition followed by multiplication: %lf\n", addMulDouble);

    // Division followed by square root
    float divSqrtSingle = sqrtf(16.0f / 4.0f);
    double divSqrtDouble = sqrt(16.0 / 4.0);

    printf("Single-precision division followed by square root: %f\n", divSqrtSingle);
    printf("Double-precision division followed by square root: %lf\n", divSqrtDouble);

    // Complex expression
    float complexSingle = (3.5f * 2.0f) / (1.0f + sqrtf(4.0f));
    double complexDouble = (3.5 * 2.0) / (1.0 + sqrt(4.0));

    printf("Single-precision complex expression: %f\n", complexSingle);
    printf("Double-precision complex expression: %lf\n", complexDouble);

    // Test with different operand values
    float smallValue = 0.0001f;
    float largeValue = 1e8f;

    float complexSmallSingle = (smallValue * 2.0f) / (1.0f + sqrtf(4.0f));
    float complexLargeSingle = (largeValue * 2.0f) / (1.0f + sqrtf(4.0f));

    printf("Single-precision complex expression with small value: %f\n", complexSmallSingle);
    printf("Single-precision complex expression with large value: %f\n", complexLargeSingle);

    return 0;
}
