#include<stdio.h>
int main(){
    int num,n;
    scanf("%d %d",&num,&n);
    int mask=0<<n+2;
    printf("%d",num & mask);

}