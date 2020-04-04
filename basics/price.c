#include <stdio.h>

int main()
{
  int price = 0;

  printf("What's the price? ");
  scanf("%d", &price);

  printf("The change: %d\n", 100 - price);

  return 0;
}