#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b;
  int min;

  scanf("%d %d", &a, &b);
  if (a == b) {
    printf("GCD is %d\n", a);
    return 0;
  } else if (a > b) {
    min = b;
  } else {
    min = a;
  }

  int ret = 0;
  for (int i = 1; i <= min; i++) {
    if (a % i == 0 && b % i == 0) {
      ret = i;
    }
  }

  printf("GCD is %d\n", ret);

  return 0;
}
