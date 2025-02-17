#include<stdio.h>
int main(){
    int num,n;
    scanf("%d %d",&num,&n);
    int mask=0<<n+1;
    printf("%d",num & mask);

}