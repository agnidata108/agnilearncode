#include<stdio.h>
int main(){
float length , breadth , area;
printf("enter length");
scanf("%f", &length);
printf("enter breadth");
scanf("%f", &breadth);
area = length*breadth;
printf(" the area of rectange is: %.2f" , area);
    return 0;
}
