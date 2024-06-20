#include <stdio.h>

int main() {
    int value = 10;
    asm volatile ("jr zero"); // Regular jump instruction
    printf("The value is: %d\n", value);
    return 0;
}
