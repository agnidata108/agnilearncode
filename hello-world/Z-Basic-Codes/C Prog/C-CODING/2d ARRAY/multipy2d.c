#include<stdio.h>
int main(){
    int n;
printf("enter the no. row nd column");
scanf("%d",&n);
int a[n][n],b[n][n],c[n][n];
printf(" enter the element of 1st array\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    scanf("%d",&a[i][j]);
}
}
printf("enter the element of 2nd array:\n");
for(int i=0;i<n;i++){
    for(int j= 0;j<n;j++){
        scanf("%d",&b[i][j]);
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        c[i][j]=a[i][j]+b[i][j];
    }
}
printf("Resultant matrix:\n");
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",c[i][j]);
        }
    printf("\n");
}
return 0;
}