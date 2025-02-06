#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if (num/2==0 ){
        printf("Leap year");
    }
    else if(num/4==0){
         printf("Leap year");
    }
     else if(num/400==0){
         printf("Leap year");
     }
    else{
        printf("Not a Leap year");
    }
}