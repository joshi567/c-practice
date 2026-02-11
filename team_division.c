#include<stdio.h>
int main(){
  int a,b;//a=total no of friends,b=no of teams wanted to form
  scanf("%d %d",&a,&b);
  printf("The number of friends in each team:%d\n"
   "The number of friend left out:%d\n",(a/b),(a%b));
}