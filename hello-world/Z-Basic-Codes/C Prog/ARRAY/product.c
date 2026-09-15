#include<stdio.h>
int main(){
     int product= 1;
    int arr[5]={2,3,4,5,6};
   
for(int i=0;i<=4;i++){
    product=product*arr[i];
}
printf("%d",product);

    return 0;
}
