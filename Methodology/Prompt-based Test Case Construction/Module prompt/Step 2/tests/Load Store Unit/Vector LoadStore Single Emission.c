#include <stdio.h>

#define ARRAY_SIZE 10000

void vectorStore(int array[], int value, int size) {
    // Simulate storing a value into a vector register and then into an array
    for (int i = 0; i < size; i++) {
        array[i] = value; // Store operation
    }
}

void vectorLoad(int array[], int size) {
    // Simulate loading an array of data into vector registers
    for (int i = 0; i < size; i++) {
        int value = array[i]; // Load operation
        (void)value; // Avoid unused variable warning
    }
}

int main() {
    int array[ARRAY_SIZE];

    printf("Testing vector store operation:\n");
    vectorStore(array, 42, ARRAY_SIZE);

    printf("Testing vector load operation:\n");
    vectorLoad(array, ARRAY_SIZE);

    return 0;
}
