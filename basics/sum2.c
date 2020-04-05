#include <stdio.h>

int main() {
    int n = 0;
    double sum = 0.0;
    double sign = 1.0;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += sign / i;
        sign = -sign;
    }

    printf("Sum is: %.2f\n", sum);  // what is %4.2f ?
}