#include<stdio.h>
int main(){
    int n ;
    printf("enter the no.");
    scanf("%d",&n);
    int sum=0;//1-2+3-4+5-6+7....ntimes
    for(int i=1;i<=n;i++){
        if(i%2!=0)
            sum = sum+i;
            else
                sum = sum-i;
            }
            printf("the addition is:%d",sum);
    return 0;
}