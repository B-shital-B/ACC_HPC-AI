#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void my_callback()
{
    printf("callback executed ! \n");
}
void process_task(void (*ptr_to_callback ())){
    printf("starting task...\n");
    ptr_to_callback();

}
int main()
{
    process_task(my_callback);
    return 0;
}