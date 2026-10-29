#include<stdio.h>
int main(){
    register int i;
    int total = 0;
    for(i=0;i<5;i++){
        total += i;
    }
    printf("Total: %d\n", total);
    return 0;
}