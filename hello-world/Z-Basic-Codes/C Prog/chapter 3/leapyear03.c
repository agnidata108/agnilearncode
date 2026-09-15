#include<stdio.h>
int main(){
    int a;
    printf("enter year:");
    scanf("%d",&a);//for a year divisible by 4 and 400 but not divisible by 100
    if((a%400==0)||(a%4==0)&&(a%100!=0)){
        printf("It is the leap year");}
        else{
printf("The given is not a leap year");
        }
    return 0;
}