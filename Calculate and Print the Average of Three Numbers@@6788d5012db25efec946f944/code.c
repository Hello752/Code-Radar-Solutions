#include <stdio.h>
int main() {
    
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    float avg= (a+b+c)/3;
    printf("Average: %.lf ",avg);
    return 0;
}