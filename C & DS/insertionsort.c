#include<stdio.h>
#include<stdbool.h>


void insertionsort(int arr[] , int n){
    int i,j,key;
    

    for (i =0; i<n; i++){
        key = arr[i];
        j=i-1;

     while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j=j-1;
     }
     arr[j+1]=key;
    }
}
 void printarray(int arr[],int size){
    for (int i=0;i<size;i++)
{
    printf("%d\t",arr[i]);
}
printf("\t");


}

int main(){
    int arr[]= {64,34,25,12,22,11,90};
    int n=sizeof(arr) / sizeof(arr[0]);

    printf("Original array:  \t");
    printarray(arr,n);

    insertionsort (arr,n);

    printf("Sorted array:  \t");
    printarray(arr,n);
    return 0;
}