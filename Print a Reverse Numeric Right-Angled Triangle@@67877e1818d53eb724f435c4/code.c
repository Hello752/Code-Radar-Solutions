#include<stdio.h>
int main(){
   int num,row,col,count=1;
   scanf("%d",&num);
   for(row=1;row<=num;row++){
    for(col=1;col<=row;col--){count=count++;}
    {printf("%d",num);}
   
    printf("\n");}
   return 0;
}