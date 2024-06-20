#include <stdio.h>

#define ARRAY_SIZE 1000000
#define STRIDE 4096 // Larger than typical cache line size

void cacheAccessPattern(int *array, int size, int stride) {
    // Access elements with a large stride to increase the likelihood of cache misses
    for (int i = 0; i < size; i += stride) {
        array[i] = i; // Store operation
    }

    // Sequential access to verify values
    for (int i = 0; i < size; i += stride) {
        if (array[i] != i) { // Load operation
            printf("Mismatch at index %d: expected %d, got %d\n", i, i, array[i]);
        }
    }
}

int main() {
    int *array = (int *)malloc(ARRAY_SIZE * sizeof(int));

    printf("Testing cache access pattern with large stride:\n");
    cacheAccessPattern(array, ARRAY_SIZE, STRIDE);

    free(array);

    return 0;
}
