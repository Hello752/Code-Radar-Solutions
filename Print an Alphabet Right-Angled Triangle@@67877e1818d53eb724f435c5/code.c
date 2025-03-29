#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    char alphabet = 'a';
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            alphabet = (char)(65 + j);
            printf("%c ", alphabet);
        }
        printf("\n");
    }

}