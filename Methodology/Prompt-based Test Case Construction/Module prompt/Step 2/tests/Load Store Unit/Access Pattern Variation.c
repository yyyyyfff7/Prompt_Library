#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10000

void sequentialAccess(int *array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = i; // Sequential access
    }
}

void stridedAccess(int *array, int size, int stride) {
    for (int i = 0; i < size; i += stride) {
        array[i] = i; // Strided access
    }
}

void pseudoRandomAccess(int *array, int size) {
    int seed = 123; // Pseudo-random seed
    for (int i = 0; i < size; i++) {
        int index = (seed * i) % size; // Pseudo-random index
        array[index] = i; // Random access
    }
}

int main() {
    int *array = (int *)malloc(ARRAY_SIZE * sizeof(int));

    printf("Sequential access:\n");
    sequentialAccess(array, ARRAY_SIZE);

    printf("Strided access with stride 2:\n");
    stridedAccess(array, ARRAY_SIZE, 2);

    printf("Pseudo-random access:\n");
    pseudoRandomAccess(array, ARRAY_SIZE);

    free(array);

    return 0;
}
