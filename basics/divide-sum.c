#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n;
  double fenzi, fenmu;
  double sum = 0.0;
  scanf("%d", &n);

  fenzi = 2.0;
  fenmu = 1.0;

  for (int i = 1; i <= n; i++) {
    sum += fenzi / fenmu;
    double t = fenzi;
    fenzi = fenzi + fenmu;
    fenmu = t;
  }
  printf("%.2f\n", sum);
  return 0;
}
