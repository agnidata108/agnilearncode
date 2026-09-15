#include<stdio.h>
int main(){
    int  n,i;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("The Table is:%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}