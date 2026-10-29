#include <stdio.h>

int main() {
    int size;

    printf("Enter the number of strings: ");
    scanf("%d", &size);
    getchar();

    char names[size][100];

    for (int i = 0; i < size; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(names[i], 100, stdin);

        int len = 0;
        while (names[i][len] != '\0') len++;
        if (len > 0 && names[i][len - 1] == '\n') {
            names[i][len - 1] = '\0';
        }
    }

    printf("\n----- Array Elements -----\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %s\n", i + 1, names[i]);
    }

    return 0;
}