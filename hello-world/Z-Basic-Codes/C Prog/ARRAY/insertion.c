#include<stdio.h>
int main(){
    int arr[50],num,pos,size;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enetr the element of array");
        for(int i=0;i<=size-1;i++){
            scanf("%d",&arr[i]);
        }
        printf("enter the what no. to be stored");
        scanf("%d",&num);
        printf("enter the postion where u want to store");
        scanf("%d",&pos);
        for(int i=size-1;i>=pos;i--){
            arr[i+1]=arr[i];
        }
        arr[pos-1]=num;
        size++;
        printf("array of element is");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}