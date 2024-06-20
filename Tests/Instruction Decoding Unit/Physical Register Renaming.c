#include <stdio.h>

int main() {
    // Simulating a series of arithmetic operations using the same register
    int registerValue = 10;

    // Operation 1
    registerValue = registerValue + 5; // registerValue is now 15

    // Operation 2 (depends on the result of Operation 1)
    registerValue = registerValue * 2; // registerValue is now 30

    // Operation 3 (depends on the result of Operation 2)
    registerValue = registerValue - 10; // registerValue is now 20

    // Operation 4 (depends on the result of Operation 3)
    registerValue = registerValue / 2; // registerValue is now 10

    printf("Final value: %d\n", registerValue);

    return 0;
}
