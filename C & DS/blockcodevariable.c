#include<stdio.h>
#include<stdlib.h>

int size=1;

int main(){
    int i=0;
    printf("%d",size);
    {
        int j=0;
        printf("%d",size);

    }
    printf("from function: \n");
    printf("global var: %d\n" "local var:%d\n" ,size,i);
}