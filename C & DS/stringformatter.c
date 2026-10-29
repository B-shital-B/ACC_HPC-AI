#include<stdio.h>

int main(){
     int day ,month,year;
     
     sscanf("24/04/2026","%d/%d/%d",&day,&month,&year);
     char buf[32];
     snprintf(buf,sizeof(buf),"%02d/%02d/%04d",day,month,year);
     printf("You entered: %s\n",buf);
     
     return 0;

}