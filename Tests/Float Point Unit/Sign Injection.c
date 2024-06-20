#include <stdio.h>
#include <math.h> // For copysign, NAN, and INFINITY

int main() {
    // Normal numbers
    float positiveNumber = 3.5f;
    float negativeNumber = -2.0f;

    float injectedPositive = copysign(positiveNumber, negativeNumber); // Make positiveNumber negative
    float injectedNegative = copysign(negativeNumber, positiveNumber); // Make negativeNumber positive

    printf("Original: %f, Sign injected: %f\n", positiveNumber, injectedPositive);
    printf("Original: %f, Sign injected: %f\n", negativeNumber, injectedNegative);

    // Zero
    float zero = 0.0f;
    float injectedZero = copysign(zero, negativeNumber); // Make zero negative

    printf("Original: %f, Sign injected: %f\n", zero, injectedZero);

    // Special values: NaN and infinity
    float nanValue = NAN;
    float infinityValue = INFINITY;

    float injectedNaN = copysign(nanValue, negativeNumber); // Make NaN negative
    float injectedInfinity = copysign(infinityValue, negativeNumber); // Make infinity negative

    printf("Original: NaN, Sign injected: %f\n", injectedNaN);
    printf("Original: Infinity, Sign injected: %f\n", injectedInfinity);

    return 0;
}
