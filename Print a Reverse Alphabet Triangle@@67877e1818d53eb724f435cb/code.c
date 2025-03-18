#include<stdio.h>
int main(){
    int n;
   char N,col,count=1;
   scanf("%d %c",&n,&N);
   for(row=1;N<=n;N++){
    for(col=1;col<=N;col++)
    {printf("%d ",count++);}
   
    printf("\n");}
   return 0;
}