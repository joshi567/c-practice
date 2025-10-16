#include<stdio.h>
#include<math.h>
int main(){
    int s,d,n;
    scanf("%d %d %d",&s,&d,&n);
    float a=(d/n);
    float p=(s-a);
    printf("%.0f\n",p);
   // printf("%.0f\n",round(p));
}