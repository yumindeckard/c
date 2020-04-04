#include <stdio.h>

int main()
{
  int hr1;
  int min1;

  int hr2;
  int min2;

  scanf("%d %d", &hr1, &min1);
  scanf("%d %d", &hr2, &min2);

  int t1 = hr1 * 60 + min1;
  int t2 = hr2 * 60 + min2;
  int t = t2 - t1;

  printf("Time difference is %d hours and %d minutes.\n", t / 60, t % 60);
}