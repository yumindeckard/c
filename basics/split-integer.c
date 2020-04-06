#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    int mask = 1;
    int tmp = x;
    while (tmp > 9) {
        tmp /= 10;
        mask *= 10;
    }

    do {
        int d = x / mask;
        printf("%d", d);
        x %= mask;
        mask /= 10;

        if (mask > 0) {
            printf(" ");
        }
    } while (mask > 0);

    printf("\n");

    return 0;
}