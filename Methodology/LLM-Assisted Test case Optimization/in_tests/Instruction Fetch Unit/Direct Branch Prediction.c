#include <stdio.h>

int main() {
    // Predictable direct branch using if-else statement with a constant condition
    if (1) {
        printf("This branch is always taken.\n");
    } else {
        printf("This branch is never taken.\n");
    }

    // Predictable direct branch using for-loop with a fixed number of iterations
    for (int i = 0; i < 5; i++) {
        printf("Iteration %d\n", i);
    }

    // Another example of a predictable direct branch
    int a = 10;
    if (a > 5) {
        printf("This branch is always taken because a is always greater than 5.\n");
    } else {
        printf("This branch is never taken.\n");
    }

    return 0;
}
