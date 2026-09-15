#include<stdio.h>
int main(){
    int n;
    int a =100;
    printf("enter the no");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){//yaha pe a>0 bhi ho skta hai..
        printf("%d ",a);
        a=a-3;//100,97,94,91....
    }
    return 0;
}