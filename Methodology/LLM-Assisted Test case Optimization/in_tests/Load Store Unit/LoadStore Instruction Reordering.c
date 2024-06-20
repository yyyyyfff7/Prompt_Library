#include <stdio.h>

#define ARRAY_SIZE 10

void mixedLoadStore(int *array, int size) {
    // Independent store instructions
    for (int i = 0; i < size; i++) {
        array[i] = i * 10; // Store operation
    }

    // Dependent load and store instructions
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i]; // Load operation
        array[i] = sum;  // Store operation
    }
}

int main() {
    int array[ARRAY_SIZE];

    printf("Before mixed load/store operations:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    mixedLoadStore(array, ARRAY_SIZE);

    printf("After mixed load/store operations:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
