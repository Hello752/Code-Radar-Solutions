#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter a year
    scanf("%d", &n);
    
    // Check if the year is a leap year
    if ((n%5==0|| n%11==0)) {
        printf("Divisible",n);
    } else {
        printf("Not Divisible", n);
    }
    
    return 0;
}