#include <stdio.h>

int main() {
    int n, i, j, term;

    printf("Enter number of levels: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        term = 1;

        for (j = 0; j < n - i - 1; j++)
            printf("  ");

        for (j = 0; j <= i; j++) {
            printf("%4d", term);
            term = term * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}