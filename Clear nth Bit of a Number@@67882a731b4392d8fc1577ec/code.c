#include<stdio.h>
int main(){
    int num,n;
    scanf("%d %d",&num,&n);
    int mask=0<<n;
    printf("%d",num & mask);

}