#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);

  for (int a = 2; a < x; a++) {
    if (x % a == 0) {
      printf("no, it is not a prime.\n");
      return 0;
    }
  }

  printf("yes, it is a prime.\n");

  return 0;
}