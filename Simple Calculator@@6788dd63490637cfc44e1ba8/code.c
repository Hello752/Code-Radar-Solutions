#include<stdio.h>
int main(){
    int n,a;
    char op;
    scanf("%d %d %c",&n,&a,&op);
   if(op=='+'){
    int sum;
    sum=a + n;
    printf("%d",sum );}
    else if(op=='-'){
        int sub;
        sub= a-n;
        printf("%d",sub);
        
    }
    return 0;


}