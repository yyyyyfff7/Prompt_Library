
#include <stdint.h>

int main() {
    uint64_t value;

    // Load a double-word value from the stack
    __asm__ __volatile__ (
        "c.ldsp %[result], 24(sp)"
        : [result] "=r" (value)
    );

    // Print the loaded value
    printf("Loaded value: %016llx\n", value);

    return 0;
}
