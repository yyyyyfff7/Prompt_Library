#include <stdio.h>

int main() {
    // Arithmetic operation
    int a = 5;
    int b = 3;
    int sum = a + b;

    // Logic operation using the result of the arithmetic operation
    if (sum > a) {
        printf("The sum (%d) is greater than a (%d).\n", sum, a);
    } else {
        printf("The sum (%d) is not greater than a (%d).\n", sum, a);
    }

    // Another example: using the result of a multiplication in a comparison
    int product = a * b;
    if (product == a * b) {
        printf("The product (%d) is equal to a (%d) times b (%d).\n", product, a, b);
    } else {
        printf("The product (%d) is not equal to a (%d) times b (%d).\n", product, a, b);
    }

    return 0;
}
