#include<stdio.h>
int main(){
    int n,col,count=1;
   char N;
   scanf("%d %c",&n,&N);
   for(col=1;col<=N;col++){
    for(N=1;N<=n;N++)
    
    {printf("%d ",count++);}
   
    printf("\n");}
   return 0;
}
