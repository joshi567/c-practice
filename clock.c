#include<stdio.h>
int x,y;
int main(){
        scanf("%d %d",&x,&y);
       // printf("x:%d,y:%d\n",x,y);
        int a=(x*y)%12;
       // if(a==0){printf("12");}
       // else{printf("%d",a);};
      int ans= (a==0?12:a);
      printf("%d\n",ans);

}