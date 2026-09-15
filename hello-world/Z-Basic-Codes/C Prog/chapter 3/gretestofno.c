#include<stdio.h>
int main(){
int a=40 ,b=50 ,c=90,d=47;
if ((a>b)&&(a>c)&&(a>d)){
printf(" greatest no.%d",a); }
else if((b>a)&&(b>c)&&(b>d)){
    printf(" greatest no.%d",b);
}
else if((c>a)&&(c>b)&&(c>d)){
    printf(" greatest no.%d",c);
}
else{
    printf(" greatest no.%d",d);
}
    return 0;
}