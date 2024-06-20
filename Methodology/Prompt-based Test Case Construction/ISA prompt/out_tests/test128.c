
#include <stdio.h>

int main() {
    double value = 10.5;
    int result;

    asm("fclass.d %0, %1" : "=r" (result) : "f" (value));

    printf("Classification of %f: %d\n", value, result);

    return 0;
}
