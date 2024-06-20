
#include <stdio.h>

int main() {
    int a = 10;
    int b;
  
    asm ("c.mv %0, %1" : "=r" (b) : "r" (a));

    printf("Value of b: %d\n", b);
  
    return 0;
}
