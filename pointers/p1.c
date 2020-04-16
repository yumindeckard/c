#include <stdio.h>

void f(int *p);

int main(int argc, char const *argv[]) {
  int i = 9;
  printf("i addr: %p\n", &i);
  f(&i);
  printf("i new value: %d\n", i);
  return 0;
}

void f(int *p) {
  printf("p is: %p\n", p);
  printf("p target original value is %d\n", *p);
  *p = 26;
}