#include <stdio.h>

int main() {
    // Long chain of dependent instructions
    float result = 1.0f;
    for (int i = 1; i <= 1000000; i++) {
        result = result * 1.01f + i; // Each operation depends on the result of the previous one
    }

    printf("Result of the long chain of dependent operations: %f\n", result);

    return 0;
}
