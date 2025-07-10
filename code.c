#include <stdio.h>

int main(void)
{
  unsigned int x[32];
  unsigned int s = 0;

  for (s = 0; s < 32; s++) {
    unsigned int *p = x;

    *p = 1;
    printf("x[%u] = %u\n", s, *p);
    p++;
  }
  
  printf("code.c\n");
  return 0;
}
