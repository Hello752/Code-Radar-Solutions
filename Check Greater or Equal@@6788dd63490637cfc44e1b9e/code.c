#include <stdio.h>
int main(){
    int n,a;
    canf("%d %d",&n,&a);
    if (n>=a||a>=n){printf("Yes")};
    else{
        printf("No");
    }
}