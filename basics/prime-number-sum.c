#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool is_prime(int num) {
  if (num == 1) return false;
  if (num == 2) return true;
  if (num > 2 && num % 2 == 0) return false;

  for (int i = 3; i < sqrt(num); i = i + 2) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
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
  }

  for (int i = m; i <= n; i++) {
    bool isPrime = is_prime(i);
    if (isPrime) {
      count++;
      sum += i;
    }
  }

  printf("%d %d\n", count, sum);

  return 0;
}
