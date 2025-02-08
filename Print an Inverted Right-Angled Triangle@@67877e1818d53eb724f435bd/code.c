// C program to print the inverted right half pyramid of
// stars
#include <stdio.h>

int main()
{

    // first loop to print all rows
    for (int i = 0; i < n; i++) {

        // first inner loop to print the * in each row
        for (int j = n; j > 0; j--) {
            printf("* ");
        }
        printf("\n");
    }
}
