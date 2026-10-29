#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){

    int arr[3][4];
    int (*p)[4]=arr;
    

    p=p+1;
    printf("%d\n",(*p)[2]);
    

    int (*rowPtr)[4]=malloc(sizeof(int [4]));   

}