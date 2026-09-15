#include<stdio.h>
int linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;

}
int main(){
    int arr[7]={1,3,5,6,7,8,9,};
    int target=7;
    linearsearch(arr,7,target);
int ans = linearsearch(arr,7,target);
if(ans!=0){
    printf("%d",ans);
}
else{
    printf("target not found:");
}
return 0;
}