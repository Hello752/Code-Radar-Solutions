#include<stdio.h>
int main(){
   int num,row,col,count;
   scanf("%d",&num);
   for(row=1;row<=num;row++){
    for(col=1;col<=row;col--){if(count>=1){printf("%d",count);}}
  
   
    printf("\n");}
   return 0;
}