#include <stdio.h>

int main(int argc, char const *argv[]) {
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d*%d=%d\t", j, i, j * i);
      // if (j * i < 10 && j > 1) {
      //   printf(" ");
      // }
      if (j == i) {
        printf("\n");
      }
    }
  }
  return 0;
}
