#include <stdio.h>
#include <limits.h> // For LLONG_MAX and LLONG_MIN

int main() {
    // Comparison between equal numbers
    long long int a = 1000000000000LL;
    long long int b = 1000000000000LL;
    printf("a == b: %s\n", (a == b) ? "true" : "false");

    // Comparison between different numbers
    long long int c = 2000000000000LL;
    printf("a < c: %s\n", (a < c) ? "true" : "false");
    printf("c > a: %s\n", (c > a) ? "true" : "false");

    // Comparison with boundary cases
    long long int max = LLONG_MAX;
    long long int min = LLONG_MIN;
    printf("max == LLONG_MAX: %s\n", (max == LLONG_MAX) ? "true" : "false");
    printf("min == LLONG_MIN: %s\n", (min == LLONG_MIN) ? "true" : "false");
    printf("min != max: %s\n", (min != max) ? "true" : "false");
    printf("min < max: %s\n", (min < max) ? "true" : "false");

    return 0;
}
