#include <stdio.h>

int getGCD(int a, int b);  // 函数原型 function prototype

int main(int argc, char const *argv[]) {
  int m, n;
  scanf("%d %d", &m, &n);

  int gcd = getGCD(m, n);

  m = m / gcd;
  n = n / gcd;

  printf("%d/%d\n", m, n);

  return 0;
}

int getGCD(int a, int b) {
  int t = 0;
  while (b != 0) {
    t = a % b;
    a = b;
    b = t;
  }
  return a;
}