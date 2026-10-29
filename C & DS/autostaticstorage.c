#include<stdio.h>
#include<stdlib.h>
void counter()
{
auto int i=0;
static int j=0;
i++;
j++;
printf("%d\n",i);
printf("%d\n",j);
}
int main(){
counter();
counter();
counter();
 {
  int k=0;
       printf("%d\n",k);
 }
//each undeclared identifier is reported only once for each function it appears in.
 printf("%d\n",k);
    return 0;
}
