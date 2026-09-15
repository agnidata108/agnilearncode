#include<stdio.h>
int main(){
    int m ,n,p;
    printf("enter the no. of rows and column:");
    scanf("%d%d",&m,&n);
    printf("enter no. 2nd of column:");
    scanf("%d",&p);
    int a[m][n],b[n][p],c[m][p];
    printf("enter the element of a:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the element of b:");
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i =0;i<m;i++){
        for(int j=0;j<p;j++){
            c[i][j]=0;
        }
    }
 
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            for(int k =0;k<n;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];

            }
        }
    }
       printf("resultant:\n");
       for(int i=0;i<m; i++){
        for(int j=0;j<p;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
       }
    return 0;
}