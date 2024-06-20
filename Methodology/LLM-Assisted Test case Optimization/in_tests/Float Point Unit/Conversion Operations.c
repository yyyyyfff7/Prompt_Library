#include <stdio.h>
#include <float.h> // For FLT_MAX and DBL_MAX

int main() {
    // Conversions between floating-point precisions
    // Single to double
    float singleValue = FLT_MAX;
    double doubleFromSingle = (double)singleValue;
    printf("Single to double: %f -> %lf\n", singleValue, doubleFromSingle);

    // Double to single
    double doubleValue = DBL_MAX;
    float singleFromDouble = (float)doubleValue;
    printf("Double to single: %lf -> %f\n", doubleValue, singleFromDouble);

    // Conversions between floating-point and integer types
    // Float to int
    float floatValue = 123.456f;
    int intFromFloat = (int)floatValue;
    printf("Float to int: %f -> %d\n", floatValue, intFromFloat);

    // Int to float
    int intValue = 789;
    float floatFromInt = (float)intValue;
    printf("Int to float: %d -> %f\n", intValue, floatFromInt);

    // Double to int
    double doubleValue2 = 456.789;
    int intFromDouble = (int)doubleValue2;
    printf("Double to int: %lf -> %d\n", doubleValue2, intFromDouble);

    // Int to double
    int intValue2 = 123;
    double doubleFromInt = (double)intValue2;
    printf("Int to double: %d -> %lf\n", intValue2, doubleFromInt);

    return 0;
}
