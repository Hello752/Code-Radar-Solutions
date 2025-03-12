#include <stdio.h>

void printDiamond(int N) {
    for(i=1;i<=N;i++){
        for(j=1;j<=n-1;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
        
    }
    for(int i= N-1;i>=1;i--){
        for(int j=1;j<=N-1;j++){
            printf("*");

        }
        printf("\n");
    }
}
    int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    printDiamond(N);
    return 0;
}
}


    
    