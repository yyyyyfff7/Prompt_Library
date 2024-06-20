
#include <stdio.h>

int main() {
    double d = 3.14;
    float f;
  
    asm volatile ("fcvt.s.d %0, %1, 0" : "=f"(f) : "f"(d));

    printf("Double: %f\n", d);
    printf("Converted float: %f\n", f);

    return 0;
}
