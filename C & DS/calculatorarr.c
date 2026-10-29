#include <stdio.h>

int main() {
    int n, i, j, temp;
    int arr[100];
    int sum = 0, max, min;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
        sum += arr[i];

    avg = (float)sum / n;

    max = arr[0];
    min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    printf("\nReversed array: ");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
    printf("\n");

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Ascending order: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Descending order: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}