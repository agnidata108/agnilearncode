#include<stdio.h>
int main(){
    int marks1,marks2,marks3, sum , percentage;
printf("marks of subject 1:\n");
scanf("%d",&marks1);
printf("marks of subject 2:\n");
scanf("%d",&marks2);
printf("marks of subject 3:\n");
scanf("%d",&marks3);
sum =marks1+marks2+marks3;
percentage=(sum/3)*100;// asuuming that the marks are out of 100
if (marks1>=33&&marks2>=33&&marks3>=33&&percentage>=40)
 printf("then u are passed congratulation\n");
else
printf("fail");
printf("total marks\n%d",sum);
printf("percentage\n%d",percentage);
return 0;
}
