#include<stdio.h>
int main(){
    int n,m;
    printf("enter no. of rows");
    scanf("%d",&n);
    printf("enter no. of column");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){//outerloop no. of rows k liye
        for(int i= 1; i<=m;i++){//innner loop no. of column
            printf("*");}
            printf("\n");}//har line k baad enter maarne kliye
    return 0;
}