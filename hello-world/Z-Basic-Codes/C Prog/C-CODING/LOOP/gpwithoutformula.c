#include<stdio.h>
int main(){
    int n;
    printf("enter no.");
    scanf("%d",&n);
    int a =1;
    for(int i=1;i<=n;i++){
        printf("%d",a);
        a=a*2;//1,2,4,6,8...
    }
    return 0;
}