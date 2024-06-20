#include <stdio.h>

int main() {
    // Sequence of independent arithmetic operations on different variables
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int e = 50;

    int sumA = a + 5;
    int sumB = b + 5;
    int sumC = c + 5;
    int sumD = d + 5;
    int sumE = e + 5;

    printf("Sums: %d, %d, %d, %d, %d\n", sumA, sumB, sumC, sumD, sumE);

    // Sequence of independent logic operations on different variables
    int f = 3;
    int g = 4;
    int h = 5;
    int i = 6;
    int j = 7;

    int andFG = f & g;
    int orGH = g | h;
    int xorHI = h ^ i;
    int notI = ~i;
    int andJI = j & i;

    printf("Logic results: %d, %d, %d, %d, %d\n", andFG, orGH, xorHI, notI, andJI);

    return 0;
}
