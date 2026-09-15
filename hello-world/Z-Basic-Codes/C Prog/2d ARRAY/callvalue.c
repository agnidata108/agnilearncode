#include<stdio.h>
void change(int a){
    a=50;
}
int main(){
    int x=30;
    change(x);
    printf("%d",x);
}