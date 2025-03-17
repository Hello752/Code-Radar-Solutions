#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
      printf("Multiplication Table of %d:\n", n);
    for(int i=1;i<=10;i++){printf("%dx%d= %d\n",n,i,n*i);}
    return 0
}
