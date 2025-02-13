
#include <stdio.h>

int square(int x) {
  return x * x;
}
int main() {
  int a = 10;
  int b = square(a);
  printf("square of %d is %d\n", a, b);
  return 0;
}
