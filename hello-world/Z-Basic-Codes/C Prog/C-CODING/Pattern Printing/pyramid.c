#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of line:");
    scanf("%d",&n);
    int mld=n/2+1;//middle of line
    int nst = 1;//no. of star
    int nsp=n/2;//no. of space
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        printf("\n");
            if(i<mld){
                nsp--;
                nst=nst+2;
            }
            else{
                nst=nst-2;
                nsp++;
            }
        
        }
    return 0;
}