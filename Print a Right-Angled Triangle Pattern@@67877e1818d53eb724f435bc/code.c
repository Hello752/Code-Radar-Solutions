#include <stdio.h>

int main() {
    int N, i, j;

    // Input: Number of rows
    printf(" ");
    scanf("%d", &N);

    // Output: Right-angled triangle of stars
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("  *");
        }
        printf("\n");
    }

    return 0;
}
