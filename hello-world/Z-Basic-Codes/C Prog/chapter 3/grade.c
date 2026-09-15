#include<stdio.h>
int main(){
    char grade;
    int marks ;
    printf("enter marks");
    scanf("%d" ,&marks);
    if(marks<=100 && marks >=90)
    grade = 'A';
     else if (marks<=90 && marks>=80)
     grade = 'B';
     else if (marks<=80 && marks>=60)
     grade = 'C';
     else 
     grade = 'D';
     {printf(" the grade is:%c",grade);
     }
    return 0;
}