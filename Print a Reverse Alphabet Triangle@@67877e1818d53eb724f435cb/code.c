#include<stdio.h>
int main(){
   char num,row,col,count=1;
   scanf("%c",&num);
   for(row=1;row<=num;row++){
    for(col=1;col<=row-1;col++)
    {printf("%d ",count++);}
   
    printf("\n");}
   return 0;
}