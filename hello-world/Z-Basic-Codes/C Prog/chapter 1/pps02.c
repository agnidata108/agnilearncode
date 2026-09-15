#include<stdio.h>
#include<math.h> // power laane k liye
int main(){
    float principal , rate, time , si, ci;
    printf("enter principal");
    scanf("%f", &principal);
    printf("enter rate");
    scanf("%f" , &rate);
    printf("enter time");
    scanf("%f" ,&time);
    si = (principal * rate* time)/100;
    ci = principal*pow((1+rate/100),time)-principal;
    printf("%.2f", si);
    printf("\n%.2f" , ci);
    return 0;
}