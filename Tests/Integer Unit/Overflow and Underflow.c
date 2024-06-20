#include <stdio.h>
#include <limits.h>

int main() {
    // Overflow test
    long long int max = LLONG_MAX;
    long long int overflow = max + 1; // This will cause overflow
    printf("Overflow test: %lld + 1 = %lld\n", max, overflow);

    // Underflow test for unsigned integers
    unsigned long long int min_unsigned = 0;
    unsigned long long int underflow_unsigned = min_unsigned - 1; // This will cause underflow
    printf("Underflow test (unsigned): %llu - 1 = %llu\n", min_unsigned, underflow_unsigned);

    // Note: Underflow in the context of signed integers typically refers to
    // floating-point underflow, which is different from integer underflow.

    return 0;
}
