#include <stdio.h>

int main() {
    // Small loop with a few instructions
    for (int i = 0; i < 10000; i++) {
        int a = i * 2;
        int b = a + 1;
        int c = b / 3;
        (void)c; // Avoid unused variable warning
    }

    printf("Finished small loop with a few instructions.\n");

    // Small loop with more instructions
    for (int j = 0; j < 10000; j++) {
        int x = j * 2;
        int y = x + 1;
        int z = y / 3;
        int w = z * 4;
        int v = w - 5;
        int u = v / 6;
        (void)u; // Avoid unused variable warning
    }

    printf("Finished small loop with more instructions.\n");

    return 0;
}
