
#include <stdio.h>

double fsub_d(double fs1, double fs2, int rm)
{
    double result;
  
    asm volatile(
         "fsub.d %[result], %[fs1], %[fs2], %[rm]"
         : [result] "=f" (result)
         : [fs1] "f" (fs1), [fs2] "f" (fs2), [rm] "i" (rm)
    );
  
    return result;
}

int main() {
    double fs1 = 10.5;
    double fs2 = 5.2;
    double result = fsub_d(fs1, fs2, 0);

    printf("Result: %lf\n", result);
  
    return 0;
}
