#include <stdio.h>
#include <stdlib.h>

void triggerDivisionByZero() {
    int a = 10;
    int b = 0;
    int result = a / b; // This will cause a division by zero exception
    printf("Result of division: %d\n", result);
}

void triggerMemoryAccessViolation() {
    int *ptr = NULL;
    *ptr = 10; // This will cause a memory access violation exception
}

int main() {
    // Trigger division by zero exception
    printf("Attempting to trigger division by zero exception...\n");
    triggerDivisionByZero();

    // Trigger memory access violation exception
    printf("Attempting to trigger memory access violation exception...\n");
    triggerMemoryAccessViolation();

    return 0;
}
