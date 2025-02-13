#include<stdio.h>
int main(){
    int a,n;
    char op;
    scanf("%d %d %c",&n,&a,&op);
   if(op=='+'){
    int sum;
    sum=a + n;
    printf("%d",sum );}
    else if(op=='-'){
        int sub;
        sub= a-n;
        printf("%d",sub);}
     else if(op=='*'){
        int mul;
        mul= a*n;
        printf("%d",mul);}
     else if(op=='/'){
        int div;
        if(n=='0'){printf("error");}
        else{div= a/n;
        printf("%d",sub);}
    return 0;


}