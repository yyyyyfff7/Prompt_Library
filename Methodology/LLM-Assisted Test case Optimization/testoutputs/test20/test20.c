
#include <stdio.h>

int main() {
    int x = 0;
    int y = 1;
    asm volatile ("fence iorw, iorw");
    x = y;
    printf("x = %d\n", x);
    return 0;
}
