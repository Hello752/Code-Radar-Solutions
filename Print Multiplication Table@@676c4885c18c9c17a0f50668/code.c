#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
      printf("Multiplication Table of %d:\n", n);
    for(int i=1;i<=n;i++){printf("%d * %d=%d\n",n,i,n*i);}
    return 0
}
