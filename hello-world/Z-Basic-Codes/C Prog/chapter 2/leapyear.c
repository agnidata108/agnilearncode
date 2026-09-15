#include<stdio.h>
int main(){
    int a;
    printf("enter the year:");
    scanf("%d",&a);
   if ((a%400==0) || (a%4==0 && a%100!=0 )){
   printf("it is the leap year");}
   else{
    printf("it is not a leap year");
   }
    return 0;
}