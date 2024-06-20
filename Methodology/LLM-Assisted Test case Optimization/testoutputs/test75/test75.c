
#include <stdint.h>

int64_t atomic_add(int64_t* ptr, int64_t value)
{
    int64_t result;

    __asm__ volatile (
        "amoadd.d.aqrl %[result], %[value], (%[ptr])"
        : [result] "=r" (result)
        : [value] "r" (value), [ptr] "r" (ptr)
        : "memory"
    );

    return result;
}

int main()
{
    int64_t value = 10;
    int64_t result = atomic_add(&value, 5);

    return 0;
}
