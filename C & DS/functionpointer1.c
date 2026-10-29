#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int add(int a,int b)
{
    return a+b;
}

void something()
{
    printf("from something.");
}

int main()
{
    int (* fun_ptr)(int,int);
    fun_ptr = &add;
    int result = fun_ptr (5,3);

    printf("The result of addition is: %d\n",result);
    printf("something");
    
}