#include <stdio.h>

void printPalindromicTriangle(int N) {
    for (int i = 1; i <= N; i++) {
        // Print increasing sequence
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print decreasing sequence
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printPalindromicTriangle(N);
    return 0;
}
