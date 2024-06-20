#include <stdio.h>

int main() {
    // Conditional branch (if-else statement)
    int a = 10;
    int b = 20;
    if (a > b) {
        printf("a is greater than b\n");
    } else {
        printf("a is not greater than b\n");
    }

    // Loop (for loop)
    printf("For loop:\n");
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }

    // Loop (while loop)
    printf("While loop:\n");
    int c = 5;
    while (c > 0) {
        printf("c = %d\n", c);
        c--;
    }

    // Conditional branch (switch-case statement)
    printf("Switch-case statement:\n");
    int d = 2;
    switch (d) {
        case 1:
            printf("d is 1\n");
            break;
        case 2:
            printf("d is 2\n");
            break;
        default:
            printf("d is not 1 or 2\n");
            break;
    }

    return 0;
}
