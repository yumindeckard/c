#include <stdio.h>

int main()
{
  const int TOTAL = 100;
  int price = 0;

  printf("What's the price? ");
  scanf("%d", &price);

  printf("The change: %d\n", TOTAL - price);

  return 0;
}