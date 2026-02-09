#include<stdio.h>
int main(){
    int R,H;
    float pie=3.14;
    scanf("%d %d",&R,&H);
    float capacity=(pie*R*R*H);
    printf("%.0f\n",(capacity));
}