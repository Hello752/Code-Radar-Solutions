#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int lastnumber = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", lastnumber + 1);
            lastnumber = lastnumber + 1;
        }
        printf("\n");
    }
}