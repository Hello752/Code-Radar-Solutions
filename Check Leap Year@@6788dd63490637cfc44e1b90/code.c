#include <stdio.h>

int main() {
    int year;
    
    // Prompt the user to enter a year
    scanf("%d", &year);
    
    // Check if the year is a leap year
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf(" Leap Year: %d ", year);
    } else {
        printf(" Not a Leap Year: %d ", year);
    }
    
    return 0;
}