#include <stdio.h>

#define ARRAY_SIZE 10000

void doubleStore(int array1[], int array2[], int size) {
    // Simulate double emission of store instructions
    for (int i = 0; i < size; i++) {
        array1[i] = i;        // Store operation 1
        array2[i] = size - i; // Store operation 2
    }
}

void doubleLoad(int array1[], int array2[], int size) {
    // Simulate double emission of load instructions
    for (int i = 0; i < size; i++) {
        int value1 = array1[i]; // Load operation 1
        int value2 = array2[i]; // Load operation 2
        (void)value1; // Avoid unused variable warning
        (void)value2; // Avoid unused variable warning
    }
}

int main() {
    int array1[ARRAY_SIZE];
    int array2[ARRAY_SIZE];

    printf("Testing double emission of store instructions:\n");
    doubleStore(array1, array2, ARRAY_SIZE);

    printf("Testing double emission of load instructions:\n");
    doubleLoad(array1, array2, ARRAY_SIZE);

    return 0;
}
