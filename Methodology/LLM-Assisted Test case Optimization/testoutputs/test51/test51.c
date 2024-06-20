
#include <stdio.h>

int main() {
    int result;

    __asm__ __volatile__ (
        "sret"
        : "=r" (result)
        :
        : "memory"
    );

    printf("SRET instruction executed successfully.\n");
    return 0;
}
