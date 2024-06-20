
#include <stdio.h>

int main() {
    long int source_array[5] = {10, 20, 30, 40, 50};
    long int destination;
    int index = 2; // Index to load from, can be changed as needed

    // Inline assembly to perform the LD instruction
    asm volatile (
        "ld %[dest], %[offset](%[base])"
        : [dest] "=r" (destination) 
        : [base] "r" (&source_array[0]), [offset] "i" (index * sizeof(long int))
    );

    // Print the result
    printf("Loaded value: %ld\n", destination);

    return 0;
}
