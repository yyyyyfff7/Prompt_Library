#include <stdio.h>

#define ARRAY_SIZE 10000

void sequentialAccess(int *array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = i;
    }
}

void stridedAccess(int *array, int size, int stride) {
    for (int i = 0; i < size; i += stride) {
        array[i] = i;
    }
}

int main() {
    int array[ARRAY_SIZE];

    // Sequential access
    sequentialAccess(array, ARRAY_SIZE);
    printf("Finished sequential access.\n");

    // Strided access with different strides
    stridedAccess(array, ARRAY_SIZE, 2);
    printf("Finished strided access with stride 2.\n");

    stridedAccess(array, ARRAY_SIZE, 4);
    printf("Finished strided access with stride 4.\n");

    stridedAccess(array, ARRAY_SIZE, 8);
    printf("Finished strided access with stride 8.\n");

    return 0;
}
