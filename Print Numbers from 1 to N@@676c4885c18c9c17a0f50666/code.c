#include <stdio.h>

int main() {
    int i, n;
    
    // Proper prompt for user input
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Displaying the value of 'n'
    printf("You entered: %d\n", n);
    
    // Loop to print numbers from 1 to n
    for (i = 1; i <= n; i++) {
        printf("%d ", i);  // Added space for better readability
    }
    
    printf("\n"); // Newline for clean output
    
    return 0;
}
