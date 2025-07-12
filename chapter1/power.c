#include <stdio.h>

int power(int base, int exponent);
int main() {
    int i; 
    for (i = 0; i < 10; ++i) 
        printf("%d %d\n", power(2, i), power(-3, i));
    return 0;
}

int power(int base, int exponent) {
  int n, p;
  p = 1;
  for (n = 1; n <= exponent; ++n)
      p = p * base;
  return p;
}
