#include <stdio.h>

int main() {
    // Ordinary multiplication
    float mulSingle = 3.5f * 2.0f;
    double mulDouble = 3.5 * 2.0;

    printf("Single-precision multiplication: %f\n", mulSingle);
    printf("Double-precision multiplication: %lf\n", mulDouble);

    // Fused multiply-add operations
    // Since standard C doesn't provide a built-in FMA operation, we'll simulate it
    float fmaSingle = (3.5f * 2.0f) + 1.0f;
    double fmaDouble = (3.5 * 2.0) + 1.0;

    printf("Single-precision FMA (simulated): %f\n", fmaSingle);
    printf("Double-precision FMA (simulated): %lf\n", fmaDouble);

    // Test with different operand values
    float smallValue = 0.0001f;
    float largeValue = 1e8f;

    printf("Multiplication with small value: %f\n", 3.5f * smallValue);
    printf("Multiplication with large value: %f\n", 3.5f * largeValue);

    // FMA with different operand values (simulated)
    printf("FMA with small value (simulated): %f\n", (3.5f * smallValue) + 1.0f);
    printf("FMA with large value (simulated): %f\n", (3.5f * largeValue) + 1.0f);

    return 0;
}
