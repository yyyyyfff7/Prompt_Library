
#include <stdio.h>

int main() {
    int value = 42;
    
    asm volatile (
        "c.swsp %0, 0(sp)"
        :
        : "r" (value)
    );
    
    printf("Stored value: %d\n", value);
    
    return 0;
}
