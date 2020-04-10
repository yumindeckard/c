#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n;
  printf("请输入一个数:\n");
  scanf("%d", &n);

  int min = pow(10, n - 1);
  int max = pow(10, n) - 1;

  for (int i = min; i <= max; i++) {
    int t = i;
    int sum = 0;
    while (t != 0) {
      int digit = t % 10;
      sum += pow(digit, n);
      t /= 10;
    }

    if (sum == i) {
      printf("%d\n", i);
    }
  }

  return 0;
}
