#include<stdio.h>
int main(){
    int n ;
    int sum = 0;
    printf("enter the no.");
    scanf("%d",&n);
    
    while(n!=0){
        int lastdigit = n%10;
        if(lastdigit%2==0){
        sum = sum+lastdigit;
        }
        n=n/10;
    }   
    printf("the sum is%d",sum);
    return 0;
}