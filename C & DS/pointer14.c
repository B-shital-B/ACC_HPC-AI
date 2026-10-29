#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *names[3];
    int i;
    names[0]=malloc(5*sizeof(char));
    strcpy(names[0],"Amit");
    names[1]=malloc(5*sizeof(char));
      strcpy(names[1],"sam");
    names[2]=malloc(5*sizeof(char));
      strcpy(names[2],"riya");

    for(int i = 0; i < 3; i++){
        printf("%s" ,names[i]) ; 
    }


    for(int i=0;i<3;i++ ){
    free(names[i]);
    }
    
}