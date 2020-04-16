#include <stdio.h>

void f(int *p);

int main(int argc, char const *argv[]) {
  int i = 9;
  printf("i addr: %p\n", &i);
  f(&i);
  return 0;
}

void f(int *p) {
  printf("p is: %p\n", p);
  printf("p target value is %d\n", *p);
}