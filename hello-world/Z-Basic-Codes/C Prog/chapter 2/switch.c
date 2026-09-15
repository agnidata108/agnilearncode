#include<stdio.h>
int main(){
    int a;
    printf("entered the value of a");
    scanf("%d",&a);
    switch(a){
    case 1://curly bracket se hamesha srt hoga
    printf("you entered 1");//colon seybol hameha lagega cases ke numbering ke baad
    break;
    case 2:
    printf("you entered 2");
    break;
     case 3:
    printf("you entered 3");
    break;
    case 4:
    printf("you entered 4");
    break;
    default:
    printf("nothing matched");
    }
    
    return 0;
}