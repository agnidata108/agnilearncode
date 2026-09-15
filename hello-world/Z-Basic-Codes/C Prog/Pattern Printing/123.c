#include<stdio.h>
int main(){
    int n;
    printf("enter no. of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){//no. of line/no.ofrow ->i
        for(int j= 1; j<=n;j++){//no.of column ->j
            printf("%d  ",j);}
            printf("\n");}//har line k baad enter maarne kliye
    return 0;
}