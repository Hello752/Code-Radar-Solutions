#include<stdio.h>
int main(){
    int n;
    scanf(%d,&n);
    int startnum = 0;
    for(int i = 1; i<=n; i++){
        if(i % 2 != 0){
                startnum = 1;
        }
        else{
            startnum = 0 ;
        }
        for(int j=1; j<=i; j++){
            
            printf("%d ", startnum % 2);
            startnum = startnum + 1;
        }

        printf("\n");

    }
}