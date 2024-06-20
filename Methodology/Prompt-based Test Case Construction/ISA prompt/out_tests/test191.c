
#include <stdint.h>

int main() {
    uint32_t arr[10] = {0};

    uint32_t rs1 = 0;  // base address
    uint32_t rs2 = 42; // value to store
    uint32_t uimm5 = 5; // immediate offset

    asm volatile ("c.sw %0, %1(%2)" :: "r"(rs2), "i"(uimm5 << 2), "r"(rs1));

    // Verify the result
    if (arr[uimm5] == rs2) {
        return 0; // Success
    } else {
        return -1; // Failure
    }
}
