// C program to print the inverted right half pyramid of
// stars
#include <stdio.h>

int main()
{

    int N;
    scanf("%d",&N);
    // first loop to print all rows
    for (int i = 0; i < N; i++) {

        // first inner loop to print the * in each row
        for (int j = N - i; j > 0; j--) {
            printf("* ");
        }
        printf("\n");
    }

   return 0; 
}
