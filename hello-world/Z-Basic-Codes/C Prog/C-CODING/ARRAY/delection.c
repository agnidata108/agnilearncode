#include<stdio.h>
int main(){
    int arr[50],num,pos,size;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enetr the element of array");
        for(int i=0;i<=size-1;i++){
            scanf("%d",&arr[i]);
        }
        printf("enter the postion where u want to delete");
        scanf("%d",&pos);
        for(int i=pos-1;i<size;i++){
            arr[i]=arr[i+1];
        }
        size--;
        printf("array of element is");
    for(int i=0;i<size;i++)
    {
        printf("  %d",arr[i]);
    }
    return 0;