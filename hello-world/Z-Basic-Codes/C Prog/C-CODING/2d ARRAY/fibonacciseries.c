#include<stdio.h>
int fab(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fab(n-1)+fab(n-2);
}
int main(){
    int n =5;
    for(int i = 0;i<5;i++){
        printf("%d",fab(i));
    }
return 0;
}
