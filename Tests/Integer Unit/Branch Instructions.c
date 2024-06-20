#include <stdio.h>

int main() {
    // If-else statement
    int a = 10;
    if (a > 5) {
        printf("a is greater than 5\n");
    } else {
        printf("a is not greater than 5\n");
    }

    // For-loop
    printf("For-loop:\n");
    for (int i = 0; i < 3; i++) {
        printf("i = %d\n", i);
    }

    // While-loop
    printf("While-loop:\n");
    int b = 3;
    while (b > 0) {
        printf("b = %d\n", b);
        b--;
    }

    // Switch-case statement
    printf("Switch-case statement:\n");
    int c = 2;
    switch (c) {
        case 1:
            printf("c is 1\n");
            break;
        case 2:
            printf("c is 2\n");
            break;
        default:
            printf("c is not 1 or 2\n");
            break;
    }

    // Nested branches and loops
    printf("Nested branches and loops:\n");
    for (int j = 0; j < 2; j++) {
        if (j % 2 == 0) {
            int k = 0;
            while (k < 3) {
                printf("j = %d, k = %d\n", j, k);
                k++;
            }
        } else {
            printf("j = %d is odd\n", j);
        }
    }

    return 0;
}
