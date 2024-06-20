
#include <stdio.h>

int main() {
  double fs1 = 3.14;
  double fs2 = 3.14;
  int result;

  asm("feq.d %[result], %[fs1], %[fs2]"
      : [result] "=r" (result)
      : [fs1] "f" (fs1), [fs2] "f" (fs2));

  printf("FS1 == FS2: %d\n", result);

  return 0;
}
