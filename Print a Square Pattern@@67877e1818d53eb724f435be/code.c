#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
//controls rows 
    for (int i = 0; i < N; i++) {
        //controls stars
        for (int j = 0; j < N; j++) {
            printf("*");
            if (j < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
