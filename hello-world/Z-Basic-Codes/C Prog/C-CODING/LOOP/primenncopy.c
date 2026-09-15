#include<stdio.h>
int main(){
    int n;
    printf("enter the no. n");
    scanf("%d",&n);
    int a =0; 
    for(int i = 2;i<=n-1;i++){
        if(n%i==0){
           a=1;
            break;
        }
    }
if(a==1)printf("the given no. is compsite\n");
else printf("the given no. prime\n");
    return 0;
}