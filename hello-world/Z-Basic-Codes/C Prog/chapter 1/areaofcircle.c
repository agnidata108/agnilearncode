#include<stdio.h>
int main(){
float radius , pie  , area , heigth ,volume;
printf("the radius");
scanf("%f",&radius);
printf("the height");
scanf("%f", &heigth);
pie = 3.14;
 area= pie*radius*radius;
printf("the area is %.2f" ,area);
volume=pie*radius*radius*heigth;
printf("the volumeof cylinder is %.2f", volume);


return 0;
}