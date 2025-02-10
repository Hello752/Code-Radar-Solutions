#include <stdio.h>

int main() {
    char n;
    scanf("%c", &n);

    // Check if n is a vowel
    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' ||
        n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U') {
        printf("Vowel");
    }
    // Check if n is a digit
    else if (n >= '0' && n <= '10') {
        printf("Digit");
    }
     else if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z')) {
        printf("Consonant");
     }
    // If not vowel or digit, it's a special character
    else {
        printf("Special Character");
    }

    return 0;
}
