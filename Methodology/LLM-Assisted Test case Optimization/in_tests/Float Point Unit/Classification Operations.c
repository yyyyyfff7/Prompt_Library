#include <stdio.h>
#include <math.h> // For isnan() and isinf()

void classifyFloat(float num) {
    if (num == 0.0f) {
        printf("%f is zero.\n", num);
    } else if (isnan(num)) {
        printf("%f is NaN (Not a Number).\n", num);
    } else if (isinf(num)) {
        printf("%f is infinity.\n", num);
    } else if (num > 0.0f && num < FLT_MIN) {
        printf("%f is subnormal (positive).\n", num);
    } else if (num < 0.0f && num > -FLT_MIN) {
        printf("%f is subnormal (negative).\n", num);
    } else if (num >= FLT_MIN && num <= FLT_MAX) {
        printf("%f is normal (positive).\n", num);
    } else if (num <= -FLT_MIN && num >= -FLT_MAX) {
        printf("%f is normal (negative).\n", num);
    } else {
        printf("%f is unclassified.\n", num);
    }
}

int main() {
    // Test cases
    float values[] = {0.0f, 1.0f, -1.0f, FLT_MIN / 2.0f, -FLT_MIN / 2.0f,
                      FLT_MAX * 2.0f, -FLT_MAX * 2.0f, NAN, INFINITY, -INFINITY};

    for (int i = 0; i < sizeof(values) / sizeof(values[0]); i++) {
        classifyFloat(values[i]);
    }

    return 0;
}
