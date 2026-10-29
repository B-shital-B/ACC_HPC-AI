#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int add(int a,int b)
{
    return a+b;
}

int mul(int a,int b)
{
    return a*b;
}

int apply(int(*op)(int,int),int x,int y)
{
    return op(x,y);

}

int main(){
    printf("%d\n",apply(add ,2,3));
    printf("%d\n",apply(mul,3,4));
}