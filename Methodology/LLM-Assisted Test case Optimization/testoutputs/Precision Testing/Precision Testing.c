#include <stdio.h>
#include <math.h> // For fabs()

int main() {
    // Single-precision addition
    float addSingle = 1.0f / 10.0f + 1.0f / 10.0f + 1.0f / 10.0f;
    float expectedAddSingle = 0.3f;
    printf("Single-precision addition: %f (expected: %f), difference: %e\n", 
           addSingle, expectedAddSingle, fabs(addSingle - expectedAddSingle));

    // Double-precision addition
    double addDouble = 1.0 / 10.0 + 1.0 / 10.0 + 1.0 / 10.0;
    double expectedAddDouble = 0.3;
    printf("Double-precision addition: %lf (expected: %lf), difference: %e\n", 
           addDouble, expectedAddDouble, fabs(addDouble - expectedAddDouble));

    // Single-precision multiplication
    float mulSingle = 1.0f / 3.0f * 3.0f;
    float expectedMulSingle = 1.0f;
    printf("Single-precision multiplication: %f (expected: %f), difference: %e\n", 
           mulSingle, expectedMulSingle, fabs(mulSingle - expectedMulSingle));

    // Double-precision multiplication
    double mulDouble = 1.0 / 3.0 * 3.0;
    double expectedMulDouble = 1.0;
    printf("Double-precision multiplication: %lf (expected: %lf), difference: %e\n", 
           mulDouble, expectedMulDouble, fabs(mulDouble - expectedMulDouble));

    // Testing precision with small values
    float smallValueSingle = 1.0e-30f;
    float smallMulSingle = smallValueSingle * 1.0e30f;
    printf("Single-precision small value multiplication: %f (expected: 1.0), difference: %e\n", 
           smallMulSingle, fabs(smallMulSingle - 1.0f));

    double smallValueDouble = 1.0e-300;
    double smallMulDouble = smallValueDouble * 1.0e300;
    printf("Double-precision small value multiplication: %lf (expected: 1.0), difference: %e\n", 
           smallMulDouble, fabs(smallMulDouble - 1.0));

    return 0;
}
