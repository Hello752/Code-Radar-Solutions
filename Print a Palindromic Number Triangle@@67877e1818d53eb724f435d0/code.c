#include <stdio.h>

int main() {
    int rows, i, j;

    // Get the number of rows from the user
    printf(" ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Inner loop for printing ascending numbers
        for (j = 1; j <= i; j++) {
            printf(" %d", j);
        }

        // Inner loop for printing descending numbers
        for (j = i - 1; j >= 1; j--) {
            printf(" %d", j);
        }

        printf(" \n"); // Move to the next line after each row
    }

    return 0;
}