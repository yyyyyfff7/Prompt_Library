#include <stdio.h>

// Function prototypes
void functionA();
void functionB();
void functionC();

int main() {
    // Array of function pointers for indirect branching
    void (*functions[3])() = {functionA, functionB, functionC};

    // Variable to control the case in the switch statement
    int caseControl = 2;

    // Indirect branch using function pointers
    for (int i = 0; i < 3; i++) {
        functions[i](); // Calling function through pointer
    }

    // Indirect branch using switch-case statement with variable cases
    switch (caseControl) {
        case 0:
            printf("Case 0\n");
            break;
        case 1:
            printf("Case 1\n");
            break;
        case 2:
            printf("Case 2\n");
            break;
        default:
            printf("Default case\n");
            break;
    }

    return 0;
}

void functionA() {
    printf("Function A called\n");
}

void functionB() {
    printf("Function B called\n");
}

void functionC() {
    printf("Function C called\n");
}
