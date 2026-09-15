#include<stdio.h>
int main(){
    int marks[10]={23,56,78,90,24,5,35,78,90,20};
    for(int i=0;i<=9;i++){
        if(marks[i]<35)
        {
            printf("\n%d  ",marks[i]);
        printf("\n%d  ",i);}
    }
return 0;
}
