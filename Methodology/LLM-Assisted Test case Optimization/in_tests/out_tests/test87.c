
#include <stdio.h>

int main() {
    long data = 0x123456789abcdef0;
    long update = 0x0f0f0f0f0f0f0f0f;

    printf("Before AMOOR.D: 0x%lx\n", data);

    __asm__ __volatile__(
        "amo.or.d %0, %1, (%2)"
        : "+r" (data)
        : "r" (update), "r" (&data)
    );

    printf("After AMOOR.D: 0x%lx\n", data);

    return 0;
}
