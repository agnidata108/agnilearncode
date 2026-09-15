#include<stdio.h>
int main(){
    int i,n=10;
    for(i=0;i<n;i++){
        
        if(i==6){
            continue;// skip the itration now.!!!!
        }
 printf("%d\n",i);       
    }
    return 0;
}