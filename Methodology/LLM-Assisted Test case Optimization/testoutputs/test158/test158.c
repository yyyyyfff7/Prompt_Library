#include <stdio.h>

double fsub_d(double fs1, double fs2)
{
    double result;
  
    asm volatile(
         "fsub.d %0, %1, %2"
         : "=f" (result)
         : "f" (fs1), "f" (fs2)
    );
  
    return result;
}

int main() {
    double fs1 = 10.5;
    double fs2 = 5.2;
    double result = fsub_d(fs1, fs2);

    printf("Result: %lf\n", result);
  
    return 0;
}
