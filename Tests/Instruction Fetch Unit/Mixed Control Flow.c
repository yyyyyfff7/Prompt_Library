#include <stdio.h>

void printMessage(int value) {
    if (value % 2 == 0) {
        printf("Value %d is even.\n", value);
    } else {
        printf("Value %d is odd.\n", value);
    }
}

int main() {
    // Nested loops
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Nested loop iteration: i = %d, j = %d\n", i, j);
        }
    }

    // If-else statement
    int a = 10;
    if (a > 5) {
        printf("a (%d) is greater than 5.\n", a);
    } else {
        printf("a (%d) is not greater than 5.\n", a);
    }

    // Switch-case statement
    int b = 2;
    switch (b) {
        case 1:
            printf("b is 1.\n");
            break;
        case 2:
            printf("b is 2.\n");
            break;
        default:
            printf("b is not 1 or 2.\n");
            break;
    }

    // Function call within a loop
    for (int k = 0; k < 5; k++) {
        printMessage(k);
    }

    return 0;
}
