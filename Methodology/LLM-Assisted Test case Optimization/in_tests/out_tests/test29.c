
#include <stdio.h>

int main() {
    unsigned long long result;
    unsigned long long immediate = 0x12345;

    // Using inline assembly to execute the LUI instruction
    __asm__ volatile (
        "lui %0, %1"
        : "=r"(result)
        : "i"(immediate)
    );

    printf("The result of LUI instruction is: 0x%llx\n", result);
    return 0;
}
