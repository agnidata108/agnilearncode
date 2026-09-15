#include<stdio.h>
int main(){
    int n; printf("enter a number:");
    scanf("%d",&n);
    int sum = 0;
    int lastdigit=0;
    int temp = n;
    while(n!=0)
    {lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
    }
    printf(" the sum is%d",sum);
    int r=0;
    while(temp>0){
          r = r*10;
        r=r+(temp%10);
       temp=temp/10;
    }
    printf("reverse of the no. is%d",r);
    return 0;
}
