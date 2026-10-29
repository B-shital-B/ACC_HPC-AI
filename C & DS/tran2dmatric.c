#include <stdio.h>

int main(void) {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    if (rows <= 0 || cols <= 0) {
        printf("Rows and columns must be positive integers.\n");
        return 1;
    }

    int matrix[10][10];
    int transpose[10][10];

    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid matrix element.\n");
                return 1;
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Original matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Transposed matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
