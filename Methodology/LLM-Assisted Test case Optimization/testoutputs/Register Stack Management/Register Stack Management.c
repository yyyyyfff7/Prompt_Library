#include <stdio.h>

int main() {
    // Using a large number of variables (registers)
    int a = 10, b = 20, c = 30, d = 40, e = 50;
    int f = 60, g = 70, h = 80, i = 90, j = 100;
    int k = 110, l = 120, m = 130, n = 140, o = 150;
    int p = 160, q = 170, r = 180, s = 190, t = 200;

    // Performing various operations
    int sum = a + b + c + d + e + f + g + h + i + j;
    int product = k * l * m * n * o * p * q * r * s * t;
    int difference = sum - product;
    int quotient = product / sum;

    // Print the results
    printf("Sum: %d, Product: %d, Difference: %d, Quotient: %d\n",
           sum, product, difference, quotient);

    return 0;
}
