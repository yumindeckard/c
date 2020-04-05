#include <stdio.h>

int main() {
    int n = 0;
    double sum = 0.0;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("Sum is: %.2f\n", sum);  // what is %.2f ?
}