#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read input
    
    for (int row = N; row >= 1; row--) { // Loop for rows in reverse order
        for (char ch = 'A'; ch < 'A' + row; ch++) { // Print letters from 'A' to row-th letter
            printf("%c ", ch);
        }
        printf("\n"); // Move to the next line
    }
    
    return 0;
}
