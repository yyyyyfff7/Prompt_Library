#include <stdio.h>

#define ITERATION_COUNT 100000000

void forLoopTest() {
    int sum = 0;
    for (int i = 0; i < ITERATION_COUNT; i++) {
        sum += 1;
    }
    printf("For loop sum: %d\n", sum);
}

void whileLoopTest() {
    int sum = 0;
    int i = 0;
    while (i < ITERATION_COUNT) {
        sum += 1;
        i++;
    }
    printf("While loop sum: %d\n", sum);
}

void doWhileLoopTest() {
    int sum = 0;
    int i = 0;
    do {
        sum += 1;
        i++;
    } while (i < ITERATION_COUNT);
    printf("Do-while loop sum: %d\n", sum);
}

int main() {
    forLoopTest();
    whileLoopTest();
    doWhileLoopTest();
    return 0;
}
