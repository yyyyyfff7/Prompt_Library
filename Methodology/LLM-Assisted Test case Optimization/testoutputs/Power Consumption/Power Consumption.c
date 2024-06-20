#include <stdio.h>

#define INTENSIVE_ITERATIONS 10000000
#define IDLE_ITERATIONS 10000000

void computationIntensiveLoop() {
    int result = 0;
    for (int i = 0; i < INTENSIVE_ITERATIONS; i++) {
        result += i;
    }
    printf("Computation-intensive loop result: %d\n", result);
}

void idleLoop() {
    for (int i = 0; i < IDLE_ITERATIONS; i++) {
        // Idle loop with minimal computation
    }
    printf("Idle loop finished.\n");
}

void mixedWorkload() {
    int result = 0;
    for (int i = 0; i < INTENSIVE_ITERATIONS; i++) {
        if (i % 2 == 0) {
            result += i; // Active period
        } else {
            // Idle period
        }
    }
    printf("Mixed workload result: %d\n", result);
}

int main() {
    computationIntensiveLoop();
    idleLoop();
    mixedWorkload();
    return 0;
}
