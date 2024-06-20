#include <stdio.h>

int main() {
    // If-else statement
    int a = 5;
    if (a > 0) {
        printf("a is positive\n");
    } else {
        printf("a is non-positive\n");
    }

    // For loop
    printf("For loop: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // While loop
    printf("While loop: ");
    int b = 3;
    while (b > 0) {
        printf("%d ", b);
        b--;
    }
    printf("\n");

    // Do-while loop
    printf("Do-while loop: ");
    int c = 3;
    do {
        printf("%d ", c);
        c--;
    } while (c > 0);
    printf("\n");

    // Switch-case statement
    int d = 2;
    switch (d) {
        case 1:
            printf("d is 1\n");
            break;
        case 2:
            printf("d is 2\n");
            break;
        case 3:
            printf("d is 3\n");
            break;
        default:
            printf("d is not 1, 2, or 3\n");
            break;
    }

    return 0;
}
