#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    do (num/2==0 ){
        printf("Leap year");
    }
     while(num/4==0){
         printf("Leap year");
    }
       do(num/400==0){
         printf("Leap year");
     }
         while{
        printf("Not a Leap year");
    }
}