#include <stdio.h>

// Simple pseudo-random number generator
int pseudo_rand(int *seed) {
    *seed = (*seed * 1103515245 + 12345) & 0x7fffffff;
    return *seed;
}

int main() {
    int seed = 123; // Initial seed for pseudo-random number generator

    // Branch with pseudo-random condition (difficult to predict)
    for (int i = 0; i < 10; i++) {
        if (pseudo_rand(&seed) % 2 == 0) {
            printf("Iteration %d: Even pseudo-random number\n", i);
        } else {
            printf("Iteration %d: Odd pseudo-random number\n", i);
        }
    }

    // Branch with a pattern that changes over time (difficult to predict)
    for (int i = 0; i < 10; i++) {
        if (i % 4 == 0) {
            printf("Iteration %d: Pattern 0\n", i);
        } else if (i % 4 == 1) {
            printf("Iteration %d: Pattern 1\n", i);
        } else if (i % 4 == 2) {
            printf("Iteration %d: Pattern 2\n", i);
        } else {
            printf("Iteration %d: Pattern 3\n", i);
        }
    }

    return 0;
}
