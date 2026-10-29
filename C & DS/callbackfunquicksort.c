#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int compare_ints(const void *a,const void *b)
{
    int arg1 = *(const int *)a;
    int arg2 = *(const int *)b;


    // if(arg1<arg2)return-1;
    // if(arg1>arg2)return 1;
     if(arg1<arg2)return+1;
    if(arg1>arg2)return- 1;
    return 0;
}

int main(){
    int str1,str2;
    int array[]={65,23,89,12,44,90,4};
    size_t array_len=sizeof(array)/ sizeof (array[0]);

    qsort(array,array_len,sizeof(array[0]),compare_ints);

    printf("sorted array:\n");
    for(size_t i=0;i<array_len;i++){
    printf("%d\n",array[i]);
    }
    printf("\n");
    printf("1st string :\n"&str1="shital");
    printf("1st string :\n"&str1="Bhadre");
    printf("string is:\n",strcpy());

    return 0;


}