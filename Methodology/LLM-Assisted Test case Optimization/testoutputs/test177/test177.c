
#include <stdint.h>

// Declare a constant array of double words
const uint64_t myArray[] = {1, 2, 3, 4, 5};

int main() {
    uint64_t result;
    uint64_t* arrayPtr = (uint64_t*)myArray;
    
    // Load a double word from the array at index 2
    asm volatile ("c.ld %0, 2<<3(%1)"
                  : "=r" (result)
                  : "r" (arrayPtr));
    
    // Output the loaded value
    printf("Loaded value: %lu\n", result);
    
    return 0;
}
