#include <stdio.h>

#define ARRAY_SIZE 100000

void continuousStore(int *array, int size) {
    // Continuous store instructions
    for (int i = 0; i < size; i++) {
        array[i] = i; // Store operation
    }
}

void continuousLoad(int *array, int size) {
    // Continuous load instructions
    for (int i = 0; i < size; i++) {
        int value = array[i]; // Load operation
        (void)value; // Avoid unused variable warning
    }
}

int main() {
    int *array = (int *)malloc(ARRAY_SIZE * sizeof(int));

    printf("Testing continuous store instructions:\n");
    continuousStore(array, ARRAY_SIZE);

    printf("Testing continuous load instructions:\n");
    continuousLoad(array, ARRAY_SIZE);

    free(array);

    return 0;
}
