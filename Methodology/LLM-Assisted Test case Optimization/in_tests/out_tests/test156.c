
#include <stdio.h>

double fsgnjx_double(double fs1, double fs2);

int main() {
   double fs1 = 10.5;
   double fs2 = -5.2;
   double result = fsgnjx_double(fs1, fs2);

   printf("Result: %lf\n", result);
   return 0;
}

double fsgnjx_double(double fs1, double fs2) {
    double result;
    asm("fsgnjx.d %0, %1, %2" : "=f" (result) : "f" (fs1), "f" (fs2));
    return result;
}
