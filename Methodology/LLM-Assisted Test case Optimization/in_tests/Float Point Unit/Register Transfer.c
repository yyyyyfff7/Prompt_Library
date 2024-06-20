#include <stdio.h>
#include <float.h> // For FLT_MAX
#include <math.h>  // For NaN and INFINITY

int main() {
    // Transfer between floating-point registers (simulated by variables)
    float regA = 3.5f;
    float regB = regA; // Transfer value from regA to regB
    printf("Transfer between float registers: regA = %f, regB = %f\n", regA, regB);

    // Transfer between floating-point and general-purpose registers (simulated)
    float floatReg = 2.5f;
    int intReg = (int)floatReg; // Transfer value from floatReg to intReg
    printf("Transfer from float to int register: floatReg = %f, intReg = %d\n", floatReg, intReg);

    // Transfer special values (NaN and infinity)
    float nanValue = NAN;
    float infinityValue = INFINITY;
    float regC = nanValue;
    float regD = infinityValue;
    printf("Transfer special values: NaN = %f, Infinity = %f\n", regC, regD);

    // Transfer maximum representable value
    float maxValue = FLT_MAX;
    float regE = maxValue;
    printf("Transfer maximum float value: %e\n", regE);

    return 0;
}
