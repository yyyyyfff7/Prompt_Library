
#include <stdio.h>

void inline_asm_fence_i() {
    asm volatile("fence.i" ::: "memory");
}

int main() {
    printf("Executing fence.i instruction for instruction flow synchronization.\n");
    inline_asm_fence_i();
    printf("Fence.i instruction executed.\n");
    return 0;
}
