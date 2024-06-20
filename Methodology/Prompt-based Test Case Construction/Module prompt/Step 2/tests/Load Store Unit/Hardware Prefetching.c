#include <stdio.h>

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

int main() {
    int array[ARRAY_SIZE];

    // Sequential access
    printf("Sequential access:\n");
    sequentialAccess(array, ARRAY_SIZE);

    // Strided access with different strides
    printf("Strided access with stride 2:\n");
    stridedAccess(array, ARRAY_SIZE, 2);

    printf("Strided access with stride 4:\n");
    stridedAccess(array, ARRAY_SIZE, 4);

    printf("Strided access with stride 8:\n");
    stridedAccess(array, ARRAY_SIZE, 8);

    return 0;
}
