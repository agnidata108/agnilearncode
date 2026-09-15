#include<stdio.h>
int main(){
    int  m1, m2, m3, m4,m5 ,sum , percentage;
    printf("enter value of 5 subject");
    scanf("%d %d %d %d %d" , &m1, &m2 , &m3 , &m4 , &m5);
    sum = m1 + m2 + m3 + m4 + m5 ;
    percentage = sum/5;
    printf("%d %d" , sum , percentage);

    return 9;
}