#include<stdio.h>
int main(){
   int num,row,col;
   scanf("%d",&num);
   for(row=num;row>=1;row--){
    for(col=1;col<=row;col++){
    printf("%d ",col);}

   
   printf("\n");}
   return 0;
}