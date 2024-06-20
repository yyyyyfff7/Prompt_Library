
#include <stdio.h>

int main() {
    int value = 10;
    asm volatile ("c.jr zero");
    printf("The value is: %d\n", value);
    return 0;
}
