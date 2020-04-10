#include <stdio.h>

int is_prime(int num) {
  if (num == 2) {
    return 1;
  }

  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main(int argc, char const *argv[]) {
  int m, n;
  scanf("%d %d", &m, &n);

  if (m < 1 || n > 500 || m > n) {
    printf("1 <= m <= n <= 500");
    return 0;
  }

  int count = 0;
  int sum = 0;

  if (m == 1) {
    m = 2;
    count = -1;
    sum = -2;
  }

  for (int i = m; i <= n; i++) {
    int isPrime = is_prime(i);
    if (isPrime) {
      count++;
      sum += i;
    }
  }

  printf("%d %d\n", count, sum);

  return 0;
}
