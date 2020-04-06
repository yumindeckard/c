#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b;
  scanf("%d %d", &a, &b);

  int t = 0;
  while (b != 0) {
    t = a % b;
    a = b;
    b = t;
  }
  printf("GCD is %d\n", a);
  return 0;
}
