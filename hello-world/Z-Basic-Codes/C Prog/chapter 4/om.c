#include<stdio.h>
int main(){
    int n=10, i;
    for(i=10;i>=1;i--){
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}