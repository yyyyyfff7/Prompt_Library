
#include <stdint.h>

void sfence_vma() {
    // Define two registers for the sfence.vma instruction
    uint64_t rs1 = 0;
    uint64_t rs2 = 0;

    // Inline assembly to execute the sfence.vma instruction
    __asm__ volatile ("sfence.vma %0, %1" :: "r"(rs1), "r"(rs2));
}

int main() {
    // Call the function to execute sfence.vma
    sfence_vma();

    return 0;
}
