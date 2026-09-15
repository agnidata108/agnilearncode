#include<stdio.h>
int gretest(int arr[],int n){
    int max =arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[8]={1,2,89,45,23,56,65,90};
    int result=gretest(arr,8);
    printf("%d",result);
    return 0;
}