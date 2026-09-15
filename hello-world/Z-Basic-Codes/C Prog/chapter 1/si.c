#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("given p:");
    scanf("%f",&p);
    printf("enter r:");
    scanf("%f",&r);
    printf("enter t:");
    scanf("%f",&t);
    si = (p*r*t)/100;
    printf("the si is:%.2f",si);
    return 0;
}