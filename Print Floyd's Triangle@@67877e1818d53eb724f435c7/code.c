#include<stdio.h>
int main(){
   int num,row,column,count=1;
   scanf("%d %d %d",&num);
   printf("\n");
   for(row=1;row<=num;row++){
    for(col=1;col<=row;col++)
    {printf("%d ",count++);}
   }
   printf("\n");
   return0;
}