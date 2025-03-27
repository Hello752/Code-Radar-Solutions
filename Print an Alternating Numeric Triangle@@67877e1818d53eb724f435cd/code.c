#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rowstart;
    for(int i=0;i<n;i++){
        if(i%2 ==0) rowstart =1;
        else rowstart =0;
        for(int j=0;j<=i;j++){
            printf("%d",rowstart);
            rowstart=(rowstart+1)%2;
        }
        printf("\n");
        }

    }


