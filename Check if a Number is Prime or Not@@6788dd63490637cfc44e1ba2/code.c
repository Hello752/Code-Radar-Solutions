#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int a = 0;
   for(int i=2;i<=n-1;i++){
    if(n%i==0){
    printf("Not Prime");
    break;
   } 
   }
   if(n==1){
    printf("Not prime");
   }
   else if(a==0){
    printf("Prime");
   }
   else{
    printf("Not Prime");
   }

}

