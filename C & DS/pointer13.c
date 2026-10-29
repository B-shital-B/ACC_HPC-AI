#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    void *vp;
    int x=10;
    vp=&x;

    int src[4]={1,2,3,4},dst[4];
    memcpy(dst,src,4*sizeof(int));
    

}