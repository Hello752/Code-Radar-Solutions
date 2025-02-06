#include <stdio.h>

int main() 
{

    char c;
    
    // Prompt the user to enter a year
    printf("Enter a year: ");
    scanf("%c", &ch);
    
    // Check if the year is a leap year
    if(isupper(ch)){
        printf("Uppercase",ch);
    }
    else if(islower(ch)){
        printf("Lowercase",ch);
    }
    else{
        printf("Not an alphabet",ch);
    }
    

}
