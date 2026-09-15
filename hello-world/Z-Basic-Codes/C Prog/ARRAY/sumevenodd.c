#include<stdio.h>
int main(){
    int arr[6]={1,3,5,7,9,11};
    int sumeven=0;
    int sumodd=0;
    for(int i=0; i<=5;i++){
        if(i%2==0){
            sumeven=sumeven+arr[i];
        }
        else{
            sumodd=sumodd+arr[i];
        }
    }
        int result=sumodd-sumeven;
        printf("%d",result);
    
    
    return 0;

}