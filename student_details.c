#include<stdio.h>
int main(){
   char name[50],grade;
   float CGPA;
   int age;
   printf("enter your name,age,CGPA,grade:\n");
   scanf("%s %d %f %c",name,&age,&CGPA,&grade);
  // scanf(" %c",&grade);
   printf("Student Details:\n");
   printf("Name:%s\nAge:%d\nCGPA:%.2f\nGrade:%c\n",name,age,CGPA,grade);
   
}