#include <stdio.h>

// pointer for returning multiple values

void minmax(int a[], int size, int *min, int *max);

int main(int argc, char const *argv[]) {
  int a[] = {1, 2, 3, 5, 4};
  int min, max;
  minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
  printf("min %d, max %d\n", min, max);
  return 0;
}

void minmax(int a[], int size, int *min, int *max) {
  *min = a[0];
  *max = a[0];
  for (int i = 0; i < size; i++) {
    if (a[i] < *min) {
      *min = a[i];
    }

    if (a[i] > *max) {
      *max = a[i];
    }
  }
}