#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Please define 2 numbers: \n");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);

    return 0;
}