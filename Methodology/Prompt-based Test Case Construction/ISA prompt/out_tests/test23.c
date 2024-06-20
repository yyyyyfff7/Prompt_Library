
#include <stdio.h>

int target_function() {
    return 42;
}

int main() {
    int result;
    int (*target)() = target_function;
    
    asm volatile (
        "jalr %0, %1, 0"
        : "=r" (result)
        : "r" (target)
    );
    
    printf("Result: %d\n", result);
    return 0;
}
