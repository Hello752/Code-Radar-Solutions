#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int lastnumber = 0;
    int numtobeprinted = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            numtobeprinted = lastnumber + 1;
            printf("%d ", numtobeprinted);
            lastnumber = numtobeprinted;
        }
        printf("\n");
    }
}