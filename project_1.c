//***NUMBER GUESSING GAME***
#include <stdio.h>
#include <stdlib.h>
int actual_num,guess_num,guess=0;
int main(){
   actual_num=rand()%100+1;
   // printf(" enter actual_num\n");
   // scanf("%d",&actual_num);
    do{
    printf("enter guess_num:\n");
    scanf("%d",&guess_num);
    guess++;
 if(actual_num>guess_num){
        printf("ur guess_num is lower than actual_num\n");
    }else if(guess_num>actual_num){
        printf("ur guess_num is higher than actual_num\n");
    }else{printf("guess_num and actual_num is same\n"
                 "guess chances:%d\n",guess);}
}
while(guess_num!=actual_num);}