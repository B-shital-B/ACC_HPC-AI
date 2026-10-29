#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int rows =3, cols=4;
    int **matrix = malloc(rows * sizeof(int *));
    printf("%d",sizeof(int*));
    for (int i=0;i<rows; i++)
    matrix[i]=malloc(cols * sizeof(int));

    matrix[1][2] =42;

    for(int i=0; i<rows; i++)
    free(matrix[i]);
    free(matrix);

    printf("%d\n",sizeof(matrix));

}