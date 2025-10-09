#include<stdio.h>
#include<math.h>
int main(){
    float num;
    scanf("%f",&num);
    printf("The integer part of float:%d\n",(int)num);
   printf("The rounded up value:%d\n",(int)ceil(num));
   printf("The rounded down value:%d\n",(int)floor(num));
}