#include<stdio.h>
int main(){
    float p,r;//r is in pecernt
    int T;//in years
   scanf("%f %f %d",&p,&r,&T);
   float i=(p*T*r)/100;
   printf("Interest:%.2f\n",i);
   printf("Total Amount:%.2f\n",p+i);
   printf("Discount:%.2f\n",(0.02)*i);
   printf("Final Settlement Amount:%.2f\n",(p+i)-((0.02)*i));

}