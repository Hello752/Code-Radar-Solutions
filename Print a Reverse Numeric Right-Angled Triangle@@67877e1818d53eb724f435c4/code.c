#include<stdio.h>
int main(){
   int num,row,col;
   scanf("%d",&num);
   for(row=0;row<num;row++){
    for(col=0;col<row;col--){
    printf("%d ",col);}

   
   printf("\n");}
   return 0;
}