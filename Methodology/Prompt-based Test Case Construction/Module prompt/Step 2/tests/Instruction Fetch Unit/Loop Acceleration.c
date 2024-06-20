#include <stdio.h>

#define ITERATIONS 10000000

void arithmeticLoop() {
    int result = 0;
    for (int i = 0; i < ITERATIONS; i++) {
        result += i;
    }
    printf("Arithmetic loop result: %d\n", result);
}

void memoryAccessLoop() {
    int array[100] = {0};
    for (int i = 0; i < ITERATIONS; i++) {
        array[i % 100] = i;
    }
    printf("Memory access loop last element: %d\n", array[99]);
}

int main() {
    arithmeticLoop();
    memoryAccessLoop();
    return 0;
}
