#include <stdio.h>

void swap(int *p1, int *p2);

int main(int argc, char const *argv[]) {
  int a = 1;
  int b = 2;
  swap(&a, &b);
  printf("swap ab: a: %d b: %d\n", a, b);
  return 0;
}

void swap(int *p1, int *p2) {
  int tmp = *p1;
  *p1 = *p2;
  *p2 = tmp;
}