
#include <stdio.h>

// Function declaration with inline assembly
double fsqrt(double a)
{
    double result;
    
    __asm__ ("fsqrt.d %0, %1, 0" : "=f"(result) : "f"(a));
    
    return result;
}

int main()
{
    double number = 16.0;
    double square;
    
    square = fsqrt(number);
    
    printf("The square root of %.2lf is %.2lf\n", number, square);
    
    return 0;
}
