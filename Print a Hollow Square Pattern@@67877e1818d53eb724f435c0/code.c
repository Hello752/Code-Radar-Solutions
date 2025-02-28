#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    for(int row = 0; row < N; row++){ // Loop through rows
        for(int col = 0; col < N; col++){ // Loop through columns
            
            // Print '*' for boundary cells, otherwise print space
            if(row == 0 || row == N-1 || col == 0 || col == N-1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
