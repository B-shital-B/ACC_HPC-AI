#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct player { 
    int id;
    int score;}
int main(){



struct player player1;


memset(&player1,,sizeof(player1));

printf("After memset:\n");
printf("player 1 ID:%d,score:%d\n\n",player1.id,player1.score);


player1.id=99;
player1.score=1500;

struct player player2;

memcpy(&player2,&player1,sizeof(struct player));

printf("After memcpy:\n");
printf("player2 ID:%d\n",player2.id,player2.score);

return 0;
}