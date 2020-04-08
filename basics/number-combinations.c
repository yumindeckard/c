#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a;
  scanf("%d", &a);
  if (a > 6 || a < 1) {
    return 0;
  }

  int count = 0;
  int i, j, k;

  i = a;
  while (i <= a + 3) {
    j = a;
    while (j <= a + 3) {
      k = a;
      while (k <= a + 3) {
        if (i != j) {
          if (i != k) {
            if (j != k) {
              count++;
              printf("%d%d%d", i, j, k);
              if (count == 6) {
                printf("\n");
                count = 0;
              } else {
                printf(" ");
              }
            }
          }
        }
        k++;
      }
      j++;
    }
    i++;
  }

  return 0;
}
