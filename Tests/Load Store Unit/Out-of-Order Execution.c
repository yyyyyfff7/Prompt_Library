#include <stdio.h>

#define ARRAY_SIZE 10

void mixedLoadStore(int *loadArray, int *storeArray, int size) {
    // Independent load instructions
    for (int i = 0; i < size; i++) {
        storeArray[i] = loadArray[i]; // Load and store operations
    }

    // Store instructions that depend on previously loaded values
    for (int i = 0; i < size; i++) {
        storeArray[i] = storeArray[i] * 2; // Dependent store operation
    }
}

int main() {
    int loadArray[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int storeArray[ARRAY_SIZE];

    printf("Before mixed load/store operations:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", storeArray[i]);
    }
    printf("\n");

    mixedLoadStore(loadArray, storeArray, ARRAY_SIZE);

    printf("After mixed load/store operations:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", storeArray[i]);
    }
    printf("\n");

    return 0;
}
