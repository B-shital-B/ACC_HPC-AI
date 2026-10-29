#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void selectionsort(int arr[], int n){
    int i, j, min_idx, temp;

    for(i=0; i<n-1; i++){
        min_idx = i;  // initialize min_idx
        for(j=i+1; j<n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);  // space for readability
    }
    printf("\n");
}

int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\t");
    printArray(arr, n);

    selectionsort(arr, n);

    printf("Sorted array:\t");
    printArray(arr, n);

    return 0;
}
